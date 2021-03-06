/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_TFCS_Identity_H_
#define	_TFCS_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCS-IdentityPlain.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TFCS-Identity */
typedef struct TFCS_Identity {
	TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
	BOOLEAN_t	 sharedChannelIndicator;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TFCS_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TFCS_Identity;

#ifdef __cplusplus
}
#endif

#endif	/* _TFCS_Identity_H_ */
#include <asn_internal.h>
