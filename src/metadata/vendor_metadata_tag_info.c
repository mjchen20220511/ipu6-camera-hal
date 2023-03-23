/*
 * Copyright (C) 2012 The Android Open Source Project
 * Copyright (C) 2021-2023 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * ! Do not edit this file directly !
 *
 * Generated automatically from vendor_metadata_tag_info.mako
 */

const char* vendor_metadata_section_names[INTEL_VENDOR_SECTION_COUNT] = {
    "intel.vendorCamera", /* [INTEL_VENDOR_CAMERA] */
};

unsigned int vendor_metadata_section_bounds[INTEL_VENDOR_SECTION_COUNT][2] = {
    /* [INTEL_VENDOR_CAMERA] */
    {INTEL_VENDOR_CAMERA_START, INTEL_VENDOR_CAMERA_END},
};

static tag_info_t intel_vendor_camera[INTEL_VENDOR_CAMERA_END - INTEL_VENDOR_CAMERA_START] = {
    {"callbackRgbs", ICAMERA_TYPE_BYTE},
    {"rgbsGridSize", ICAMERA_TYPE_INT32},
    {"shadingCorrection", ICAMERA_TYPE_BYTE},
    {"rgbsStatsBlocks", ICAMERA_TYPE_BYTE},
    {"callbackTmCurve", ICAMERA_TYPE_BYTE},
    {"toneMapCurve", ICAMERA_TYPE_FLOAT},
    {"powerMode", ICAMERA_TYPE_BYTE},
    // LEVEL0_ICBM_S
    {"icCaps", ICAMERA_TYPE_INT32},
    // LEVEL0_ICBM_E
    // LEVEL0_ICBM_S
    {"icPeaceFeatures", ICAMERA_TYPE_INT32},
    // LEVEL0_ICBM_E
    // LEVEL0_ICBM_S
    {"icEccMode", ICAMERA_TYPE_BYTE},
    // LEVEL0_ICBM_E
    // LEVEL0_ICBM_S
    {"icBcMode", ICAMERA_TYPE_BYTE},
    // LEVEL0_ICBM_E
    // LEVEL0_ICBM_S
    {"icBrParameters", ICAMERA_TYPE_INT32},
    // LEVEL0_ICBM_E
    // LEVEL0_ICBM_S
    {"icUfMode", ICAMERA_TYPE_BYTE},
    // LEVEL0_ICBM_E
    {"totalExposureTarget", ICAMERA_TYPE_INT64},
    {"totalExposureTargetRange", ICAMERA_TYPE_INT64},
    {"rawDataOutput", ICAMERA_TYPE_BYTE},
};

tag_info_t* vendor_tag_info[INTEL_VENDOR_SECTION_COUNT] = {
    intel_vendor_camera,
};

int vendor_metadata_enum_snprint(uint32_t tag, int32_t value, char* dst, size_t size) {
    const char* msg = "error: not an enum";
    int ret = -1;

    switch (tag) {
        case INTEL_VENDOR_CAMERA_CALLBACK_RGBS: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_CALLBACK_RGBS_FALSE:
                    msg = "FALSE";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_CALLBACK_RGBS_TRUE:
                    msg = "TRUE";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
        case INTEL_VENDOR_CAMERA_RGBS_GRID_SIZE: {
            break;
        }
        case INTEL_VENDOR_CAMERA_SHADING_CORRECTION: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_SHADING_CORRECTION_FALSE:
                    msg = "FALSE";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_SHADING_CORRECTION_TRUE:
                    msg = "TRUE";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
        case INTEL_VENDOR_CAMERA_RGBS_STATS_BLOCKS: {
            break;
        }
        case INTEL_VENDOR_CAMERA_CALLBACK_TM_CURVE: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_CALLBACK_TM_CURVE_FALSE:
                    msg = "FALSE";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_CALLBACK_TM_CURVE_TRUE:
                    msg = "TRUE";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
        case INTEL_VENDOR_CAMERA_TONE_MAP_CURVE: {
            break;
        }
        case INTEL_VENDOR_CAMERA_POWER_MODE: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_POWER_MODE_LOW_POWER:
                    msg = "LOW_POWER";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_POWER_MODE_HIGH_QUALITY:
                    msg = "HIGH_QUALITY";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
            // LEVEL0_ICBM_S
        case INTEL_VENDOR_CAMERA_IC_CAPS: {
            break;
        }
            // LEVEL0_ICBM_E
            // LEVEL0_ICBM_S
        case INTEL_VENDOR_CAMERA_IC_PEACE_FEATURES: {
            break;
        }
            // LEVEL0_ICBM_E
            // LEVEL0_ICBM_S
        case INTEL_VENDOR_CAMERA_IC_ECC_MODE: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_IC_ECC_MODE_OFF:
                    msg = "OFF";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_IC_ECC_MODE_ON:
                    msg = "ON";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
            // LEVEL0_ICBM_E
            // LEVEL0_ICBM_S
        case INTEL_VENDOR_CAMERA_IC_BC_MODE: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_IC_BC_MODE_OFF:
                    msg = "OFF";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_IC_BC_MODE_BLUR:
                    msg = "BLUR";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_IC_BC_MODE_REPLACEMENT:
                    msg = "REPLACEMENT";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
            // LEVEL0_ICBM_E
            // LEVEL0_ICBM_S
        case INTEL_VENDOR_CAMERA_IC_BR_PARAMETERS: {
            break;
        }
            // LEVEL0_ICBM_E
            // LEVEL0_ICBM_S
        case INTEL_VENDOR_CAMERA_IC_UF_MODE: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_IC_UF_MODE_OFF:
                    msg = "OFF";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_IC_UF_MODE_AUTO:
                    msg = "AUTO";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
            // LEVEL0_ICBM_E
        case INTEL_VENDOR_CAMERA_TOTAL_EXPOSURE_TARGET: {
            break;
        }
        case INTEL_VENDOR_CAMERA_TOTAL_EXPOSURE_TARGET_RANGE: {
            break;
        }
        case INTEL_VENDOR_CAMERA_RAW_DATA_OUTPUT: {
            switch (value) {
                case INTEL_VENDOR_CAMERA_RAW_DATA_OUTPUT_OFF:
                    msg = "OFF";
                    ret = 0;
                    break;
                case INTEL_VENDOR_CAMERA_RAW_DATA_OUTPUT_ON:
                    msg = "ON";
                    ret = 0;
                    break;
                default:
                    msg = "error: enum value out of range";
            }
            break;
        }
    }

    snprintf(dst, size, "%s", msg);
    dst[size - 1] = '\0';

    return ret;
}
