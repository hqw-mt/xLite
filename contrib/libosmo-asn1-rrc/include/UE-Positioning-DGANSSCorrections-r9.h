/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_DGANSSCorrections_r9_H_
#define	_UE_Positioning_DGANSSCorrections_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "DGANSSInfoList-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Positioning-DGANSSCorrections-r9 */
typedef struct UE_Positioning_DGANSSCorrections_r9 {
	long	 dganssreferencetime;
	DGANSSInfoList_r9_t	 dganssInfoList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_DGANSSCorrections_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_DGANSSCorrections_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_DGANSSCorrections_r9_H_ */
#include <asn_internal.h>