/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SPS_Information_TDD128_r8_H_
#define	_SPS_Information_TDD128_r8_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_DCH_SPS_Information_TDD128;
struct HS_DSCH_SPS_Information_TDD128;

/* SPS-Information-TDD128-r8 */
typedef struct SPS_Information_TDD128_r8 {
	struct E_DCH_SPS_Information_TDD128	*e_dch_SPS_Info	/* OPTIONAL */;
	struct HS_DSCH_SPS_Information_TDD128	*hs_dsch_SPS_Info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_Information_TDD128_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPS_Information_TDD128_r8;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-DCH-SPS-Information-TDD128.h"
#include "HS-DSCH-SPS-Information-TDD128.h"

#endif	/* _SPS_Information_TDD128_r8_H_ */
#include <asn_internal.h>