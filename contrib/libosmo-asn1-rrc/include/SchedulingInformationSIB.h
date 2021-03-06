/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SchedulingInformationSIB_H_
#define	_SchedulingInformationSIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-TypeAndTag.h"
#include "SchedulingInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SchedulingInformationSIB */
typedef struct SchedulingInformationSIB {
	SIB_TypeAndTag_t	 sib_Type;
	SchedulingInformation_t	 scheduling;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInformationSIB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInformationSIB;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInformationSIB_H_ */
#include <asn_internal.h>
