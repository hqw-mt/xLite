/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_NewInterFreqCellList_v7b0ext_H_
#define	_NewInterFreqCellList_v7b0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NewInterFreqCell_v7b0ext;

/* NewInterFreqCellList-v7b0ext */
typedef struct NewInterFreqCellList_v7b0ext {
	A_SEQUENCE_OF(struct NewInterFreqCell_v7b0ext) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewInterFreqCellList_v7b0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewInterFreqCellList_v7b0ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NewInterFreqCell-v7b0ext.h"

#endif	/* _NewInterFreqCellList_v7b0ext_H_ */
#include <asn_internal.h>