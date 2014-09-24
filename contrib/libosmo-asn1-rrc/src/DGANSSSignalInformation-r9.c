/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "DGANSSSignalInformation-r9.h"

static int
memb_satId_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_iode_dganss_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ganss_prc_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -2047 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ganss_rrc_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_satId_constr_2 = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_iode_dganss_constr_3 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ganss_prc_constr_5 = {
	{ APC_CONSTRAINED,	 12,  12, -2047,  2047 }	/* (-2047..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ganss_rrc_constr_6 = {
	{ APC_CONSTRAINED,	 8,  8, -127,  127 }	/* (-127..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DGANSSSignalInformation_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSignalInformation_r9, satId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_satId_constraint_1,
		&asn_PER_memb_satId_constr_2,
		0,
		"satId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSignalInformation_r9, iode_dganss),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_iode_dganss_constraint_1,
		&asn_PER_memb_iode_dganss_constr_3,
		0,
		"iode-dganss"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSignalInformation_r9, udre),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UDRE,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"udre"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSignalInformation_r9, ganss_prc),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ganss_prc_constraint_1,
		&asn_PER_memb_ganss_prc_constr_5,
		0,
		"ganss-prc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DGANSSSignalInformation_r9, ganss_rrc),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ganss_rrc_constraint_1,
		&asn_PER_memb_ganss_rrc_constr_6,
		0,
		"ganss-rrc"
		},
	{ ATF_POINTER, 2, offsetof(struct DGANSSSignalInformation_r9, udreGrowthRate),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UDREGrowthRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"udreGrowthRate"
		},
	{ ATF_POINTER, 1, offsetof(struct DGANSSSignalInformation_r9, udreValidityTime),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UDREValidityTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"udreValidityTime"
		},
};
static int asn_MAP_DGANSSSignalInformation_r9_oms_1[] = { 5, 6 };
static ber_tlv_tag_t asn_DEF_DGANSSSignalInformation_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DGANSSSignalInformation_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* satId at 13670 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* iode-dganss at 13671 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* udre at 13672 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ganss-prc at 13673 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ganss-rrc at 13674 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* udreGrowthRate at 13675 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* udreValidityTime at 13676 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DGANSSSignalInformation_r9_specs_1 = {
	sizeof(struct DGANSSSignalInformation_r9),
	offsetof(struct DGANSSSignalInformation_r9, _asn_ctx),
	asn_MAP_DGANSSSignalInformation_r9_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_DGANSSSignalInformation_r9_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DGANSSSignalInformation_r9 = {
	"DGANSSSignalInformation-r9",
	"DGANSSSignalInformation-r9",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DGANSSSignalInformation_r9_tags_1,
	sizeof(asn_DEF_DGANSSSignalInformation_r9_tags_1)
		/sizeof(asn_DEF_DGANSSSignalInformation_r9_tags_1[0]), /* 1 */
	asn_DEF_DGANSSSignalInformation_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_DGANSSSignalInformation_r9_tags_1)
		/sizeof(asn_DEF_DGANSSSignalInformation_r9_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DGANSSSignalInformation_r9_1,
	7,	/* Elements count */
	&asn_SPC_DGANSSSignalInformation_r9_specs_1	/* Additional specs */
};
