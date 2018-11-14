/*
 * Copyright (c) 2018, Intel Corporation.
 * SPDX-License-Identifier: BSD-3-Clause
 */


#ifndef _FORMAT_STRINGS_H_
#define _FORMAT_STRINGS_H_

#ifndef OS_BUILD
#define FORMAT_STR                              L"%s"
#define FORMAT_STR_WITH_PARANTHESIS             L"(%s)"
#define FORMAT_STR_SINGLE_QUOTE                 L"'%ls'"
#define FORMAT_DYN_STR                          L"%*s"
#define FORMAT_STR_NL                           L"%s\n"
#define FORMAT_NL_STR                           L"\n%s"
#define FORMAT_STR_NL_NL                        L"%s\n\n"
#define FORMAT_NL_NL_STR                        L"\n\n%s"
#define FORMAT_STR_SPACE                        L"%s "
#define SPACE_FORMAT_STR_SPACE                  L" %s "
#define FORMAT_SPACE_SPACE_SPACE_STR_EQ_STR_NL  L"   %s=%s\n"
#define FORMAT_STR_EQ_DEC_NL                    L"%s=%d\n"
#define FORMAT_3SPACE_STR_EQ_DEC_NL             L"   %s=%d\n"
#define FORMAT_3SPACE_EQ_0X04HEX_NL             L"   %s=0x%04x\n"
#define FORMAT_6SPACE_STR_EQ                    L"      %s="
#define FORMAT_SHOW_DIMM_HEADER                 L"%-22s%-14s%-14s%-16s%s\n"
#define FORMAT_SHOW_SENSOR_HEADER               L"%-21s %24s %19s %12s\n"
#define FORMAT_SHOW_DIMM_MANU_DATE              L"%02x-%02x"
#define FORMAT_SHOW_TOPO                        L"%-21s %-12s %-10s 0x%04x      %-13s\n"
#define FORMAT_FW_UPDATE_HEADER                 L"%-18s    %-11s    %-11s\n"
#define FORMAT_FW_UPDATE_VERSION                L"%-22s%02d.%02d.%02d.%04d      "
#define FORMAT_SHOW_GOAL_HEADER                 L"%-10s %-21s %-12s %-15s %-15s\n"
#define FORMAT_SHOW_GOAL_SINGLE                 L"0x%04x     %-21s %-12s %-15s %-15s\n"
#define FORMAT_SHOW_NS_HEADER                   L"%-7s   %-11s   %-8s\n"
#define FORMAT_SHOW_NS_HEALTH                   L"0x%04x        %-11s   "
#define FORMAT_SHOW_TOPO_HEADER                 L"%-21s %-12s %-10s %-11s %-13s\n"
#define FORMAT_SHOW_SOCKET_HEADER               L"%-9s %-22s %-20s\n"
#define FORMAT_SHOW_SOCKET                      L"0x%04x    %-22s %-20s\n"
#define FORMAT_SHOW_SOCKET_MEM                  L"%-22s"
#define FORMAT_SHOW_SOCKET_TOTAL_MEM            L"%-20s"
#define FORMAT_SHOW_REGION_HEADER               L"%8s %8s %23s %9s %12s %11s\n"
#define FORMAT_SHOW_REGION_ID                   L"%04d"
#define FORMAT_SHOW_ISET_ID                     L"0x%016llx"
#define FORMAT_16STR                            L"%16s"
#define FORMAT_INT64                            L"%ld"
#define FORMAT_UINT64                           L"%ld"
#define FORMAT_UINT64_HEX                       L"%016lx"
#define FORMAT_INT64                            L"%ld"
#define FORMAT_UINT32                           L"%u"
#define FORMAT_UINT32_HEX                       L"%08x"
#define FORMAT_INT32                            L"%d"
#define FORMAT_UINT16                           L"%hu"
#define FORMAT_UINT16_HEX                       L"%04x"
#define FORMAT_INT16                            L"%hi"
#define FORMAT_UINT8                            L"%hhu"
#define FORMAT_UINT8_HEX                        L"%02x"
#define FORMAT_INT8                             L"%hhi"
#define FORMAT_CHAR                             L"%c"
#define FORMAT_STR_WITH_COMMA                   L", %s"
#define FORMAT_HEX_WITH_COMMA                   L", 0x%04x"
#define FORMAT_HEX                              L"0x%04x"
#define SPACE_FORMAT_HEX                        L" 0x%04x"
#define FORMAT_EFI_STATUS                       "0x%lx"
#define FORMAT_GUID                             L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x"
#define FORMAT_STEPPING                         L"%s%d (0x%04x)"
#define FORMAT_HEX_PREFIX                       L"0x"
#define FORMAT_DYNAMIC_WIDTH_LEADING_ZEROS      L"%0*d"
#else // OS_BUILD
#define FORMAT_STR                              L"%ls"
#define FORMAT_STR_WITH_PARANTHESIS             L"(%ls)"
#define FORMAT_DYN_STR                          L"%*ls"
#define FORMAT_STR_NL                           L"%ls\n"
#define FORMAT_NL_STR                           L"\n%ls"
#define FORMAT_STR_NL_NL                        L"%ls\n\n"
#define FORMAT_STR_SPACE                        L"%ls "
#define SPACE_FORMAT_STR_SPACE                  L" %ls "
#define FORMAT_SPACE_SPACE_SPACE_STR_EQ_STR_NL  L"   %ls=%ls\n"
#define FORMAT_STR_EQ_DEC_NL                    L"%ls=%d\n"
#define FORMAT_STR_EQ_DEC_NL_NL                 L"%ls=%d\n\n"
#define FORMAT_3SPACE_STR_NL                    L"   %ls\n"
#define FORMAT_3SPACE_STR_EQ_DEC_NL             L"   %ls=%d\n"
#define FORMAT_3SPACE_EQ_0X04HEX_NL             L"   %ls=0x%04x\n"
#define FORMAT_6SPACE_STR_EQ                    L"      %ls="
#define FORMAT_SHOW_DIMM_HEADER                 L"%ls\t%ls\t%ls\t%ls\t%ls\t%ls\n"
#define FORMAT_SHOW_DIMM_CONTENT                L"%ls\t%ls\t%ls\t\t%ls\t\t%ls\t%ls\n"
#define FORMAT_SHOW_DIMM_MANU_DATE              L"%02x-%02x"
#define FORMAT_DEC                              L"%d"
#define FORMAT_SHOW_SENSOR_HEADER               L"%-21ls %24ls %19ls %12ls\n"
#define FORMAT_SHOW_TOPO                        L"%ls\t%ls\t\t%ls\t0x%04x\t\t%ls\n"
#define FORMAT_FW_UPDATE_HEADER                 L"%-18ls    %-11ls    %-11ls\n"
#define FORMAT_FW_UPDATE_VERSION                L"%-22ls%02d.%02d.%02d.%04d      "
#define FORMAT_SHOW_GOAL_HEADER                 L"%ls\t%ls\t%ls\t%ls\t%ls\n"
#define FORMAT_SHOW_GOAL_AR_HEADER              L"%ls\t%ls\t%ls\t%ls\t%ls\t%ls\n"
#define FORMAT_SHOW_GOAL_SINGLE                 L"0x%04x\t\t%ls\t%ls\t\t%ls\t%ls\n"
#define FORMAT_SHOW_GOAL_AR_SINGLE              L"0x%04x\t\t%ls\t%ls\t\t%ls\t%ls\t\t%ls\n"
#define FORMAT_SHOW_NS_HEADER                   L"%-7ls   %-11ls   %-8ls\n"
#define FORMAT_SHOW_NS_HEALTH                   L"0x%04x        %-11ls   "
#define FORMAT_SHOW_TOPO_HEADER                 L"%ls\t%ls\t%ls\t%ls\t%ls\n"
#define FORMAT_SHOW_SOCKET_HEADER               L"%-9ls %-22ls %-20ls\n"
#define FORMAT_SHOW_SOCKET                      L"0x%04x    %-22ls %-20ls\n"
#define FORMAT_SHOW_SOCKET_MEM                  L"%-22ls"
#define FORMAT_SHOW_SOCKET_TOTAL_MEM            L"%-20ls"
#define FORMAT_SHOW_REGION_HEADER               L"%8ls %18ls %23ls %9ls %12ls %11ls\n"
#define FORMAT_SHOW_REGION_ID                   L"%04d"
#define FORMAT_SHOW_ISET_ID                     L"0x%016llx"
#define FORMAT_16STR                            L"%16ls"
#define FORMAT_INT64                            L"%lld"
#define FORMAT_UINT64                           L"%llu"
#define FORMAT_UINT64_HEX                       L"%016llx"
#define FORMAT_UINT32                           L"%u"
#define FORMAT_UINT32_HEX                       L"%08x"
#define FORMAT_INT32                            L"%d"
#define FORMAT_UINT16                           L"%hu"
#define FORMAT_UINT16_HEX                       L"%04x"
#define FORMAT_INT16                            L"%hi"
#define FORMAT_UINT8                            L"%hhu"
#define FORMAT_UINT8_HEX                        L"%02x"
#define FORMAT_INT8                             L"%hhi"
#define FORMAT_STR_SINGLE_QUOTE                 L"'%ls'"
#define FORMAT_CHAR                             L"%lc"
#define FORMAT_STR_WITH_COMMA                   L", %ls"
#define FORMAT_HEX_WITH_COMMA                   L", 0x%04x"
#define FORMAT_HEX                              L"0x%04x"
#define SPACE_FORMAT_HEX                        L" 0x%04x"
#define FORMAT_EFI_STATUS                       "0x%x"
#define FORMAT_GUID                             L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x"
#define FORMAT_STEPPING                         L"%ls%d (0x%04x)"
#define FORMAT_HEX_PREFIX                       L"0x"
#define FORMAT_DYNAMIC_WIDTH_LEADING_ZEROS      L"%0*d"
#endif // OS_BUILD

#endif /** _FORMAT_STRINGS_H_ **/
