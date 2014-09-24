/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CellReportingQuantities_H_
#define	_CellReportingQuantities_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SFN-SFN-OTD-Type.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellReportingQuantities__modeSpecificInfo_PR {
	CellReportingQuantities__modeSpecificInfo_PR_NOTHING,	/* No components present */
	CellReportingQuantities__modeSpecificInfo_PR_fdd,
	CellReportingQuantities__modeSpecificInfo_PR_tdd
} CellReportingQuantities__modeSpecificInfo_PR;

/* CellReportingQuantities */
typedef struct CellReportingQuantities {
	SFN_SFN_OTD_Type_t	 dummy;
	BOOLEAN_t	 cellIdentity_reportingIndicator;
	BOOLEAN_t	 cellSynchronisationInfoReportingIndicator;
	struct CellReportingQuantities__modeSpecificInfo {
		CellReportingQuantities__modeSpecificInfo_PR present;
		union CellReportingQuantities__modeSpecificInfo_u {
			struct CellReportingQuantities__modeSpecificInfo__fdd {
				BOOLEAN_t	 cpich_Ec_N0_reportingIndicator;
				BOOLEAN_t	 cpich_RSCP_reportingIndicator;
				BOOLEAN_t	 pathloss_reportingIndicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct CellReportingQuantities__modeSpecificInfo__tdd {
				BOOLEAN_t	 timeslotISCP_reportingIndicator;
				BOOLEAN_t	 proposedTGSN_ReportingRequired;
				BOOLEAN_t	 primaryCCPCH_RSCP_reportingIndicator;
				BOOLEAN_t	 pathloss_reportingIndicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReportingQuantities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReportingQuantities;

#ifdef __cplusplus
}
#endif

#endif	/* _CellReportingQuantities_H_ */
#include <asn_internal.h>