/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/ibrotech/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_MobilityParametersInformation_H_
#define	_X2ap_MobilityParametersInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2ap-MobilityParametersInformation */
typedef struct X2ap_MobilityParametersInformation {
	long	 handoverTriggerChange;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_MobilityParametersInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_MobilityParametersInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_MobilityParametersInformation_H_ */
#include <asn_internal.h>
