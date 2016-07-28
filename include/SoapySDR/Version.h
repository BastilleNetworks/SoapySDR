///
/// \file SoapySDR/Version.h
///
/// Utility functions to query version information.
///
/// \copyright
/// Copyright (c) 2014-2016 Josh Blum
/// Copyright (c) 2016-2016 Bastille Networks
/// SPDX-License-Identifier: BSL-1.0
///

#pragma once
#include <SoapySDR/Config.h>

/*!
 * API version number which can be used as a preprocessor check.
 * The format of the version number is encoded as follows:
 * <b>(major << 24) | (minor << 16) | (16 bit increment)</b>.
 * Where the increment can be used to indicate implementation
 * changes, fixes, or API additions within a minor release series.
 *
 * The macro is typically used in an application as follows:
 * \code
 * #if defined(SOAPY_SDR_API_VERSION) && (SOAPY_SDR_API_VERSION >= 0x00001234)
 * // Use a newer feature from the SoapySDR library API
 * #endif
 * \endcode
 */
#define SOAPY_SDR_API_VERSION 0x00050001

/*!
 * ABI Version Information - incremented when the ABI is changed.
 * The ABI version format is <b>major.minor-bump</b>. The <i>major.minor</i>
 * comes from the in-progress library version when the change was made,
 * and <i>bump</i> signifies a change to the ABI during library development.
 * The ABI should remain constant across patch releases of the library.
 */
#define SOAPY_SDR_ABI_VERSION "0.5-2"

/*!
 * Compatibility define for GPIO access API with masks
 */
#define SOAPY_SDR_API_HAS_MASKED_GPIO

/*!
 * Compatibility define for channel sensors access API
 */
#define SOAPY_SDR_API_HAS_CHANNEL_SENSORS

/*!
 * Compatibility define for error to string function
 */
#define SOAPY_SDR_API_HAS_ERR_TO_STR

/*!
 * Compatibility define for corrections support checks
 */
#define SOAPY_SDR_API_HAS_CORRECTIONS_QUERY

/*!
 * Compatibility define for clock rates query API
 */
#define SOAPY_SDR_API_HAS_CLOCK_RATES_QUERY

/*!
 * Compatibility define for AGC support check
 */
#define SOAPY_SDR_API_HAS_AGC_MODE_QUERY

/*!
 * Compatibility define for querying stream argument info
 */
#define SOAPY_SDR_API_HAS_STREAM_ARG_INFO

/*!
 * Compatibility define for querying setting argument info
 */
#define SOAPY_SDR_API_HAS_SETTING_ARG_INFO

/*!
 * Compatibility define for querying sensor info API
 */
#define SOAPY_SDR_API_HAS_QUERY_SENSOR_INFO

/*!
 * Compatibility define for querying tune args info
 */
#define SOAPY_SDR_API_HAS_QUERY_TUNE_ARG_INFO

/*!
 * Compatibility define for querying native stream format
 */
#define SOAPY_SDR_API_HAS_NATIVE_STREAM_FORMAT

/*!
 * Compatibility define for setting the log level
 */
#define SOAPY_SDR_API_HAS_SET_LOG_LEVEL

/*!
 * Compatibility define for format header and defines
 */
#define SOAPY_SDR_API_HAS_FORMAT_DEFINES

/*!
 * Compatibility define for arbitrary channel settings
 */
#define SOAPY_SDR_API_HAS_CHANNEL_SETTINGS

/*!
 * Compatibility define for get bandwidth range API
 */
#define SOAPY_SDR_API_HAS_GET_BANDWIDTH_RANGE

/*!
 * Compatibility define for get channel info API
 */
#define SOAPY_SDR_API_HAS_GET_CHANNEL_INFO

/*!
 * Compatibility define for named register interface API
 */
#define SOAPY_SDR_API_HAS_NAMED_REGISTER_API

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * Get the SoapySDR library API version as a string.
 * The format of the version string is <b>major.minor.increment</b>,
 * where the digits are taken directly from <b>SOAPY_SDR_API_VERSION</b>.
 */
SOAPY_SDR_API const char *SoapySDR_getAPIVersion(void);

/*!
 * Get the ABI version string that the library was built against.
 * A client can compare <b>SOAPY_SDR_ABI_VERSION</b> to getABIVersion()
 * to check for ABI incompatibility before using the library.
 * If the values are not equal then the client code was
 * compiled against a different ABI than the library.
 */
SOAPY_SDR_API const char *SoapySDR_getABIVersion(void);

/*!
 * Get the library version and build information string.
 * The format of the version string is <b>major.minor.patch-buildInfo</b>.
 * This function is commonly used to identify the software back-end
 * to the user for command-line utilities and graphical applications.
 */
SOAPY_SDR_API const char *SoapySDR_getLibVersion(void);

#ifdef __cplusplus
}
#endif
