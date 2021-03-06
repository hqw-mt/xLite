/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_GPS_AcquisitionAssistance_r10_H_
#define	_UE_Positioning_GPS_AcquisitionAssistance_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GPS-TOW-1msec.h"
#include "UE-Positioning-GPS-ReferenceTimeUncertainty.h"
#include "AcquisitionSatInfoList-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UTRAN_GPSReferenceTime;

/* UE-Positioning-GPS-AcquisitionAssistance-r10 */
typedef struct UE_Positioning_GPS_AcquisitionAssistance_r10 {
	GPS_TOW_1msec_t	 gps_ReferenceTime;
	struct UTRAN_GPSReferenceTime	*utran_GPSReferenceTime	/* OPTIONAL */;
	UE_Positioning_GPS_ReferenceTimeUncertainty_t	*ue_Positioning_GPS_ReferenceTimeUncertainty	/* OPTIONAL */;
	AcquisitionSatInfoList_r10_t	 satelliteInformationList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_AcquisitionAssistance_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_AcquisitionAssistance_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UTRAN-GPSReferenceTime.h"

#endif	/* _UE_Positioning_GPS_AcquisitionAssistance_r10_H_ */
#include <asn_internal.h>
