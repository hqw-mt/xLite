package de.srlabs.snoopsnitch.util;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;

import android.content.Context;

import de.srlabs.snoopsnitch.R;
public class DeviceCompatibilityChecker {
	private static String su_binary = null;

	/**
	 * Check whether the phone is compatible with the App. Please note that this
	 * test already requests root privileges to test whether the su binary is
	 * actually working. Unfortunately, many non-rooted phones still have a su
	 * binary which is not installed setuid-root. This also applies to some
	 * rooted phones which have a non-working /system/bin/su but a working
	 * /system/xbin/su. Since there is no standard Android/Java API to retrieve
	 * the POSIX filesystem permissions for a file, it will instead run 'su -c
	 * "id"' and check whether the id command reports UID 0 (root).
	 * 
	 * @return Returns null if everything is OK or a textual description of the
	 *         Error if the phone is not compatible.
	 */
	public static String checkDeviceCompatibility(Context context){
		File diagDevice = new File("/dev/diag");

		if(!diagDevice.exists()) {
			return context.getResources().getString(R.string.compat_no_qualcomm);
		}

		if(getSuBinary() == null) {
			return context.getResources().getString(R.string.compat_no_root);
		}

		// Everything OK
		return null;
	}
	public static String getSuBinary(){
		if(su_binary == null)
			su_binary = findSuBinary();
		return su_binary;
	}
	private static String findSuBinary(){
		// Iterate over all PATH entries to find su binary
		String path = System.getenv("PATH");
		HashSet<String> pathDirs = new HashSet<String>();
		// Always consider the default paths /system/bin/ and /system/xbin/ in case $PATH is incomplete
		pathDirs.add("/system/bin/");
		pathDirs.add("/system/xbin/");
		for(String pathEntry: path.split(":")){
			pathDirs.add(pathEntry);
		}
		for(String pathDir:pathDirs){
			File f = new File(pathDir + "/su");
			if(!f.exists())
				continue;	
			String cmd[] = {pathDir + "/su","-c","id"};
			Process p;
			try {
				p = Runtime.getRuntime().exec(cmd, null, null);
				BufferedReader su_stdout = new BufferedReader(new InputStreamReader(p.getInputStream()));
				String id_line = su_stdout.readLine();
				su_stdout.close();
				p.waitFor();
				// We don't receive anything if root was denied
				if(id_line == null){
					return null;
				}
				// Check whether the id command reports UID zero (root) to make sure that the su binary actually works
				if(id_line.startsWith("uid=0")){
					return pathDir + "/su";
				}
			} catch (InterruptedException e) {
				e.printStackTrace();
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
		return null;
	}
}