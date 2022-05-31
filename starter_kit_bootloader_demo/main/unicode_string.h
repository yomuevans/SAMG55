/**
 * \file
 *
 * Copyright (c) 2014-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef UNICODE_STRING_H_INCLUDED
#define UNICODE_STRING_H_INCLUDED

#ifdef CONF_CHINESE_LANGUAGE
/* Unicode string for Chinese language. */
const uint16_t switch_info_1_cn[] = {0x5361, 0x4E2D, 0x6709, 0x5176,
		0x5B83, 0x7248, 0x7A0B, 0x5E8F, 0x0000};
const uint16_t switch_info_2_cn[] = {0x6309, 0x0000};
const uint16_t switch_info_3_cn[] = {0x5207, 0x6362, 0x0000};
const uint16_t start_info_1_cn[] = {0x5F00, 0x53D1, 0x677F, 0x6F14,
		0x793A, 0x7A0B, 0x5E8F, 0x0000};
const uint16_t temperature_info_1_cn[] = {0x6E29, 0x5EA6, 0x4F20, 0x611F,
		0x5668, 0x503C, 0x0000};
const uint16_t light_info_1_cn[] = {0x4EAE, 0x5EA6, 0x4F20, 0x611F,
		0x5668, 0x503C, 0x0000};
const uint16_t end_info_1_cn[] = {0x7B49, 0x5F85, 0x5F15, 0x5BFC,
		0x7A0B, 0x5E8F, 0x5B8C, 0x6210, 0x0000};
const uint16_t no_sd_info_1_cn[] = {0x8BF7, 0x63D2, 0x5361, 0x0000};
const uint16_t sd_info_1_cn[] = {0x5361, 0x4FE1, 0x606F, 0x0000};
const uint16_t normal_card_info_1_cn[] = {0x666E, 0x901A, 0x5361, 0x0000};
const uint16_t high_capacity_card_info_1_cn[] = {0x5927, 0x5BB9, 0x91CF,
		0x5361, 0x0000};
const uint16_t unknow_card_info_1_cn[] = {0x672A, 0x77E5, 0x0000};
const uint16_t card_size_info_1_cn[] = {0x5361, 0x5BB9, 0x91CF, 0x0000};
const uint16_t no_fatfs_info_1_cn[] = {0x65E0, 0x6587, 0x4EF6, 0x7CFB,
		0x7EDF, 0x0000};
const uint16_t no_files_info_1_cn[] = {0x6CA1, 0x6709, 0x6587, 0x4EF6,
		0x0000};
const uint16_t browse_info_1_cn[] = {0x4F7F, 0x7528, 0x6309, 0x952E,
		0x4E8C, 0x4E09, 0x6D4F, 0x89C8, 0x0000};
#endif

#ifdef CONF_FRENCH_LANGUAGE
/* Unicode string for French language. */
const uint16_t switch_info_1_fr[] = {0x0050, 0x006F, 0x0075, 0x0073,
		0x0073, 0x0065, 0x0072, 0xFFFF, 0x0070, 0x006F, 0x0075, 0x0072,
		0x0000};
const uint16_t switch_info_2_fr[] = {0x0063, 0x006F, 0x006D, 0x006D,
		0x0075, 0x0074, 0x0065, 0x0072, 0x0000};
const uint16_t start_info_1_fr[] = {0x0043, 0x006F, 0x006D, 0x006D,
		0x0065, 0x006E, 0x006C, 0x0063, 0x0065, 0x007A, 0x0000};
const uint16_t start_info_2_fr[] = {0x0044, 0x0065, 0x006D, 0x006F,
		0xFFFF, 0x004B, 0x0069, 0x0074, 0x0000};
const uint16_t temperature_info_1_fr[] = {0x0054, 0x0065, 0x006D, 0x0070,
		0x00E9, 0x0072, 0x0061, 0x0000};
const uint16_t light_info_1_fr[] = {0x004C, 0x0075, 0x006D, 0x0069,
		0x00E8, 0x0072, 0x0065, 0x0000};
const uint16_t end_info_1_fr[] = {0x0041, 0x0074, 0x0074, 0x0065,
		0x006E, 0x0064, 0x0065, 0x007A, 0x0000};
const uint16_t end_info_2_fr[] = {0x0063, 0x006F, 0x006D, 0x0070,
		0x006C, 0x0065, 0x0074, 0x0000};
const uint16_t no_sd_info_1_fr[] = {0x0069, 0x006E, 0x0073, 0x00E9,
		0x0072, 0x0065, 0x0072, 0x0000};
const uint16_t no_sd_info_2_fr[] = {0x006C, 0x0061, 0xFFFF, 0x0063,
		0x0061, 0x0072, 0x0074, 0x0065, 0x0000};
const uint16_t sd_info_1_fr[] = {0x0074, 0x0079, 0x0070, 0x0065,
		0xFFFF, 0x0064, 0x0065, 0xFFFF, 0x0063, 0x0061, 0x0072,
		0x0074, 0x0065, 0x0000};
const uint16_t normal_card_info_1_fr[] = {0x004E, 0x006F, 0x0072, 0x006D,
		0x0061, 0x006C, 0x0065, 0x0000};
const uint16_t high_capacity_card_info_1_fr[] = {0x0047, 0x0072, 0x0061,
		0x006E, 0x0064, 0x0000};
const uint16_t unknow_card_info_1_fr[] = {0x0069, 0x006E, 0x0063, 0x006F,
		0x006E, 0x006E, 0x0075, 0x0065, 0x0000};
const uint16_t card_size_info_1_fr[] = {0x0043, 0x0061, 0x0070, 0x0061,
		0x0063, 0x0069, 0x0074, 0x00E9, 0x0000};
const uint16_t no_fatfs_info_1_fr[] = {0x0050, 0x0061, 0x0073, 0xFFFF,
		0x0066, 0x006F, 0x0072, 0x006D, 0x0061, 0x0074, 0x00E9, 0x0065,
		0x0000};
const uint16_t no_files_info_1_fr[] = {0x0040, 0x0075, 0x0063, 0x0075,
		0x006E, 0xFFFF, 0x0066, 0x0069, 0x0063, 0x0068, 0x0069, 0x0065,
		0x0072, 0x0000};
const uint16_t browse_info_1_fr[] = {0x0042, 0x006F, 0x0075, 0x0074,
		0x006F, 0x006E, 0x0032, 0x0033, 0x0000};
const uint16_t browse_info_2_fr[] = {0x00E0, 0xFFFF, 0x0070, 0x0061,
		0x0072, 0x0063, 0x006F, 0x0075, 0x0072, 0x0069, 0x0072, 0x0000};
#endif

#ifdef CONF_JAPANESE_LANGUAGE
/* Unicode string for Japanese language. */
const uint16_t switch_info_1_jp[] = {0x62BC, 0x3059, 0x0000};
const uint16_t switch_info_2_jp[] = {0x30B9, 0x30A4, 0x30C3, 0x30C1,
		0x0000};
const uint16_t start_info_1_jp[] = {0x958B, 0x767A, 0x30DC, 0x30FC,
		0x30C9, 0x306E, 0x30C7, 0x30E2, 0x0000};
const uint16_t temperature_info_1_jp[] = {0x6E29, 0x5EA6, 0x30BB, 0x30F3,
		0x30B5, 0x5024, 0x0000};
const uint16_t light_info_1_jp[] = {0x660E, 0x308B, 0x3055, 0x30BB,
		0x30F3, 0x30B5, 0x0000};
const uint16_t end_info_1_jp[] = {0x30D6, 0x30FC, 0x30C8, 0x30ED,
		0x30FC, 0x30C0, 0x0000};
const uint16_t end_info_2_jp[] = {0x304C, 0x5B8C, 0x4E86, 0x5F85,
		0x3061, 0x0000};
const uint16_t no_sd_info_1_jp[] = {0x30AB, 0x30FC, 0x30C9, 0x3092,
		0x304F, 0x3061, 0x3055, 0x3044, 0x0000};
const uint16_t sd_info_1_jp[] = {0x30AB, 0x30FC, 0x30C9, 0x60C5,
		0x5831, 0x0000};
const uint16_t normal_card_info_1_jp[] = {0x666E, 0x901A, 0x0000};
const uint16_t high_capacity_card_info_1_jp[] = {0x5927, 0x0000};
const uint16_t unknow_card_info_1_jp[] = {0x4E0D, 0x660E, 0x0000};
const uint16_t card_size_info_1_jp[] = {0x5BB9, 0x91CF, 0x0000};
const uint16_t no_fatfs_info_1_jp[] = {0x30CE, 0x30FC, 0x30D5, 0x30A9,
		0x30FC, 0x30DE, 0x30C3, 0x30C8, 0x0000};
const uint16_t no_files_info_1_jp[] = {0x30CE, 0x30FC, 0x30D5, 0x30A1,
		0x30A4, 0x30EB, 0x0000};
const uint16_t browse_info_1_jp[] = {0x4F7F, 0x7528, 0x30DC, 0x30BF,
		0x30F3, 0x4E8C, 0x4E09, 0x898B, 0x0000};
#endif

#ifdef CONF_SPANISH_LANGUAGE
/* Unicode string for Spanish language. */
const uint16_t switch_info_1_sp[] = {0x0050, 0x0072, 0x0065, 0x0073,
		0x0069, 0x006F, 0x006E, 0x0000};
const uint16_t switch_info_2_sp[] = {0x0070, 0x0061, 0x0072, 0x0061,
		0xFFFF, 0x0063, 0x0061, 0x006D, 0x0062, 0x0069, 0x0061, 0x0072,
		0x0000};
const uint16_t start_info_1_sp[] = {0x0049, 0x006E, 0x0069, 0x0063,
		0x0069, 0x006F, 0xFFFF, 0x0044, 0x0065, 0x006D, 0x006F, 0x0000};
const uint16_t start_info_2_sp[] = {0x004B, 0x0069, 0x0074, 0x0000};
const uint16_t temperature_info_1_sp[] = {0x0054, 0x0065, 0x006D, 0x0070,
		0x0065, 0x0072, 0x0061, 0x0000};
const uint16_t light_info_1_sp[] = {0x004C, 0x0075, 0x007A, 0x0000};
const uint16_t end_info_1_sp[] = {0x0045, 0x0073, 0x0070, 0x0065,
		0x0072, 0x0065, 0x0000};
const uint16_t end_info_2_sp[] = {0x0063, 0x006F, 0x006D, 0x0070,
		0x006C, 0x0065, 0x0074, 0x0061, 0x0000};
const uint16_t no_sd_info_1_sp[] = {0x0069, 0x006E, 0x0073, 0x0065,
		0x0072, 0x0074, 0x0061, 0x0072, 0x0000};
const uint16_t no_sd_info_2_sp[] = {0x006C, 0x0061, 0xFFFF, 0x0074,
		0x0061, 0x0072, 0x006A, 0x0065, 0x0074, 0x0061, 0x0000};
const uint16_t sd_info_1_sp[] = {0x0074, 0x0061, 0x0072, 0x006A,
		0x0065, 0x0074, 0x0061, 0x0000};
const uint16_t normal_card_info_1_sp[] = {0x004E, 0x006F, 0x0072, 0x006D,
		0x0061, 0x006C, 0x0000};
const uint16_t high_capacity_card_info_1_sp[] = {0x0047, 0x0072, 0x0061,
		0x006E, 0x0064, 0x0065, 0x0000};
const uint16_t unknow_card_info_1_sp[] = {0x0069, 0x006E, 0x0063, 0x00F3,
		0x0067, 0x006E, 0x0069, 0x0074, 0x0061, 0x0000};
const uint16_t card_size_info_1_sp[] = {0x0043, 0x0061, 0x0070, 0x0061,
		0x0063, 0x0069, 0x0064, 0x0061, 0x0064, 0x0000};
const uint16_t no_fatfs_info_1_sp[] = {0x004E, 0x006F, 0xFFFF, 0x0066,
		0x006F, 0x0072, 0x006D, 0x0061, 0x0074, 0x0065, 0x0061, 0x0064,
		0x006F, 0x0000};
const uint16_t no_files_info_1_sp[] = {0x004E, 0x0069, 0x006E, 0x0067,
		0x00FA, 0x006E, 0xFFFF, 0x0061, 0x0072, 0x0063, 0x0068, 0x0069,
		0x0076, 0x006F, 0x0000};
const uint16_t browse_info_1_sp[] = {0x0042, 0x006F, 0x0074, 0x00F3,
		0x006E, 0x0032, 0x0033, 0x0000};
const uint16_t browse_info_2_sp[] = {0x0070, 0x0061, 0x0072, 0x0061,
		0xFFFF, 0x006E, 0x0061, 0x0076, 0x0065, 0x0067, 0x0061, 0x0072,
		0x0000};
#endif

#endif /* UNICODE_STRING_H_INCLUDED */