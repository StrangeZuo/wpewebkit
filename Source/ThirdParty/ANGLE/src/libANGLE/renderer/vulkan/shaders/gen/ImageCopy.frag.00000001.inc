// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageCopy.frag.00000001.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageCopy_frag_00000001[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x85,0x58,0x6b,0x4c,0x96,0x65,
    0x18,0x7e,0x9f,0xef,0xe3,0xe0,0xa9,0xd2,0x65,0x98,0x8a,0xa6,0x62,0x5b,0x4e,0x07,
    0x16,0x50,0x2a,0x71,0xf0,0x48,0x96,0x08,0x61,0x1e,0x90,0x2d,0x86,0x01,0xa9,0xa4,
    0x64,0x92,0x26,0x82,0xe2,0x69,0xba,0x36,0xdb,0x1a,0x1b,0x25,0x34,0x2a,0x0f,0x68,
    0x50,0x24,0xcc,0x29,0x92,0xf5,0xc3,0x4a,0xb6,0xfe,0xf4,0xa7,0x66,0xa5,0x3f,0xd2,
    0x0a,0xd7,0x9c,0xb5,0x12,0x27,0xd2,0x8c,0x9e,0xfb,0x7d,0xae,0xdb,0xef,0xda,0x5b,
    0x2e,0xb7,0x67,0xef,0xf7,0x5c,0xf7,0xe9,0xba,0xaf,0xe7,0xf0,0xbe,0x12,0x0e,0x25,
    0xc4,0x7a,0x9e,0xf1,0x86,0x78,0x83,0xbc,0xcf,0x8c,0xe7,0xff,0x1b,0xe1,0x85,0x3c,
    0xf9,0x39,0xd4,0x8b,0xf1,0x9f,0xd9,0x8b,0x96,0x2c,0x4a,0xdc,0x58,0x59,0x92,0x98,
    0x92,0x3a,0x5d,0xec,0xf7,0x7a,0x61,0xdf,0x4f,0x6c,0xf7,0x79,0xb1,0x5e,0x94,0x7d,
    0xca,0x58,0x57,0xbc,0x66,0xbd,0xe0,0x33,0x65,0x6e,0x8d,0xc3,0xad,0x9f,0xe0,0xb1,
    0x92,0xc3,0xfe,0x9a,0xe9,0xe7,0x94,0x18,0xcf,0x7b,0xca,0x8b,0xf6,0x32,0x5d,0x39,
    0x2f,0x01,0x4f,0xc5,0x0c,0xb0,0x41,0x84,0x85,0x80,0x0d,0x27,0x2c,0x0c,0x6c,0x24,
    0x61,0x51,0xc0,0x1e,0x24,0x2c,0x1a,0x58,0x3c,0x61,0x31,0xc0,0x26,0x10,0x16,0x0b,
    0x6c,0x32,0x61,0x83,0x80,0x3d,0x42,0xd8,0x60,0x60,0xd3,0x08,0x1b,0x02,0x6c,0x3a,
    0x61,0x43,0x81,0xa5,0x10,0x36,0x0c,0xd8,0x0c,0xc2,0xee,0x01,0xf6,0xa4,0xaf,0x53,
    0xf8,0x4e,0xbf,0xa2,0xd9,0x3a,0xfb,0x9c,0x04,0x7d,0x74,0x3e,0x91,0xe6,0xa2,0xf3,
    0x78,0xcc,0xef,0xb7,0x51,0x21,0xdf,0x1e,0xf6,0xb5,0x91,0xdf,0x71,0xf6,0x57,0x0c,
    0xfa,0x9c,0x6a,0xfd,0x63,0xa0,0x61,0x7c,0x62,0x4e,0xda,0x48,0xeb,0x31,0x82,0xf0,
    0x38,0x3b,0xf2,0x3b,0x17,0xcf,0xd6,0xf9,0x58,0x3b,0x96,0x2e,0xfd,0x36,0x43,0xe7,
    0xe3,0xec,0x48,0x1f,0xb2,0x37,0x53,0xe7,0x0f,0xd9,0xd1,0x96,0x5d,0x9c,0xae,0x73,
    0xd1,0xad,0xa7,0xed,0xe1,0x3b,0xf3,0x24,0x3b,0x1a,0x0e,0x8c,0xce,0x7a,0xc0,0xce,
    0x93,0xc1,0x41,0xd6,0x76,0x94,0x9d,0x8b,0x26,0xc9,0xe0,0x28,0xf3,0x27,0xb0,0x26,
    0x51,0xbe,0x5f,0x94,0xaf,0x8f,0xf8,0x0a,0x9e,0x86,0xf9,0x4c,0x8a,0x9f,0x05,0x7f,
    0x89,0x97,0xfc,0x19,0xc8,0x2f,0xff,0xc6,0xdb,0x0e,0x33,0xa1,0xbb,0xd6,0x91,0x91,
    0xf1,0x3f,0x43,0x7d,0xa4,0x7e,0x16,0xd6,0x39,0x13,0xf5,0x65,0x3e,0x1b,0xd8,0x54,
    0xf4,0x33,0x07,0x7c,0xc4,0x7f,0x2e,0x6c,0x29,0x64,0x5f,0x48,0xfd,0x3c,0x0d,0x7b,
    0x06,0xec,0xf2,0xcc,0x01,0x5f,0xf5,0x5f,0x86,0xbd,0xaa,0xf3,0x62,0xec,0x8d,0xd1,
    0x36,0xb2,0x1c,0xfd,0xe2,0x88,0xfe,0xeb,0x29,0x35,0x5e,0xc2,0xef,0x72,0x70,0x96,
    0xf9,0xba,0x40,0x8d,0x8a,0xc0,0xbc,0x12,0xe7,0x48,0xe2,0x5f,0x05,0xc7,0x64,0x68,
    0xfc,0x1a,0x7e,0x87,0xc9,0xbf,0x1a,0x9a,0xeb,0xbc,0x16,0x7b,0x5f,0xe7,0xf5,0xe0,
    0x29,0xf1,0xef,0xe2,0x37,0xc7,0x37,0xe3,0x9c,0xe9,0x1e,0x69,0x0b,0xf0,0x39,0x8b,
    0x73,0xa3,0xf3,0xf3,0x38,0x83,0x3a,0xbf,0x1c,0x58,0x83,0x6b,0x38,0x53,0x9a,0xcf,
    0xf8,0x82,0xd4,0x66,0x4a,0x3f,0x61,0xe3,0x6a,0xeb,0x1e,0x92,0x79,0x94,0x89,0xf0,
    0x11,0xff,0x43,0x76,0x5e,0x71,0xf4,0x95,0x3b,0x7b,0xfa,0xb0,0x9d,0xbf,0xb9,0xab,
    0x29,0xfd,0x71,0xbb,0x12,0x21,0xac,0x9f,0x87,0x1e,0xfa,0x2c,0x22,0xeb,0x93,0x8e,
    0xfd,0x9a,0x86,0x3d,0x99,0x6b,0x3b,0x9a,0x85,0xf3,0x9b,0x86,0xa1,0x6b,0xb3,0x1e,
    0x7b,0x3d,0x1d,0xf6,0xd9,0x36,0x83,0xec,0x95,0x79,0xd8,0x4f,0x73,0x90,0x4f,0x7c,
    0xe6,0x03,0xdf,0x69,0x7d,0x64,0xbe,0x00,0x71,0xf3,0x11,0x27,0x7b,0xe8,0x19,0xc4,
    0x2d,0x44,0x9c,0xec,0xa3,0x45,0xc0,0x5b,0xad,0x8f,0x9c,0xe7,0xc5,0xc0,0x64,0x7f,
    0xdd,0xb4,0xcc,0xf3,0xc0,0xa7,0xdf,0xfa,0x2f,0xf6,0xf9,0x7a,0x3e,0x26,0xfd,0xc8,
    0xef,0x67,0x6d,0x9c,0x68,0xb9,0x04,0x35,0xe5,0xdf,0x36,0xe8,0xfb,0x1c,0xf0,0x7c,
    0xab,0x8e,0x70,0xda,0x61,0x1c,0xa6,0x7e,0xb7,0x6c,0x0e,0xcd,0x25,0xcf,0x1b,0x56,
    0x0b,0xf1,0x3b,0x62,0x9c,0x4f,0x34,0x62,0x72,0xa9,0x87,0xe5,0xe8,0x61,0x19,0xf5,
    0xb0,0x02,0xb8,0xf6,0x50,0x00,0x4c,0x7b,0x28,0xa4,0x1e,0xc4,0xb6,0xd2,0x8e,0x42,
    0xd4,0x5d,0x49,0x3d,0x3c,0x8f,0xda,0x86,0x7a,0x28,0x02,0xae,0x3d,0xec,0x36,0x0e,
    0x53,0x3f,0xe9,0x41,0x73,0x15,0x52,0x0f,0xcd,0xc6,0xf9,0xe4,0x21,0x66,0x25,0xf5,
    0xb0,0x0a,0x3d,0x14,0x53,0x0f,0x2f,0x00,0xd7,0x1e,0x4a,0x80,0x69,0x0f,0x65,0xd4,
    0x83,0xd8,0x4a,0xed,0x28,0x43,0xdd,0x52,0xec,0x23,0xa9,0xbb,0x1a,0xb5,0x9b,0x4d,
    0xe4,0x7c,0x0b,0x47,0xf5,0x2d,0x23,0x8e,0x47,0xe1,0x57,0x88,0xb8,0x52,0xf0,0x29,
    0xf7,0xf7,0x9e,0x3b,0xff,0xba,0xe7,0x5e,0x06,0xe7,0x0a,0xda,0x73,0x1b,0x80,0xd7,
    0x62,0xcf,0x6d,0x04,0x26,0x79,0x25,0x4e,0xee,0x84,0x4d,0x88,0xab,0x44,0x9c,0x68,
    0xba,0x19,0xb8,0xea,0xbe,0x05,0xb1,0x1e,0x61,0x55,0xc0,0x8c,0xbf,0xdf,0x62,0xfc,
    0xfb,0x64,0x2b,0x7c,0xab,0x90,0x43,0x6b,0xd4,0xa0,0x46,0x35,0xd5,0xd8,0x06,0xbc,
    0xc8,0xf6,0x2a,0xe7,0x6d,0x3b,0x7a,0xda,0x8a,0x3b,0x68,0x1b,0xad,0xc7,0x0e,0xc4,
    0xd7,0xd2,0x7a,0xec,0x04,0xae,0xeb,0xb1,0x0b,0x98,0xae,0xc7,0x1e,0x5a,0x0f,0xb1,
    0xed,0xb6,0x63,0x0f,0x34,0xde,0x8d,0x3e,0xe4,0x4e,0xd8,0x87,0xda,0x1e,0xe2,0x12,
    0xb0,0x28,0x7f,0xd9,0xdf,0x92,0x6b,0x94,0x71,0x31,0xf2,0x3c,0x83,0x5a,0xa3,0x8d,
    0x8b,0x1b,0x8e,0x98,0x49,0x26,0x52,0x4b,0x6c,0x63,0xec,0x18,0x87,0x38,0x79,0x0e,
    0xb3,0x3d,0xfa,0xef,0x54,0xac,0xf9,0x18,0xd4,0x1d,0xeb,0x73,0x72,0x3c,0x26,0x18,
    0x67,0x1f,0xe7,0xf7,0xe2,0xb0,0x89,0x06,0x38,0xf6,0x48,0x02,0x72,0x4a,0x7e,0x8d,
    0x8b,0x07,0x97,0xb8,0x80,0x8f,0x70,0x1a,0xb0,0xd5,0xfa,0x80,0xdd,0x00,0x87,0x63,
    0xc6,0xe5,0x15,0x5e,0xf1,0xe0,0x2a,0x67,0x47,0xd6,0x60,0xaf,0x71,0xf6,0xed,0xb4,
    0xd6,0x12,0xb3,0x1f,0x1a,0x19,0xf4,0x9b,0x1a,0xd0,0x68,0x0a,0x6a,0x4e,0x21,0x8d,
    0xa6,0x1a,0x17,0xa7,0x1a,0xa5,0x90,0x46,0x62,0x9b,0x66,0x47,0x12,0xe2,0x92,0x48,
    0xa3,0x47,0x49,0xa3,0xfd,0x01,0x8d,0x1e,0x33,0xce,0xce,0x1a,0x25,0x1b,0x87,0xab,
    0x46,0xa9,0xc8,0x39,0x8d,0x34,0x4a,0x04,0x97,0xb8,0x80,0x4f,0x0a,0x69,0x94,0x4a,
    0x1a,0xb5,0x18,0x97,0x57,0x78,0x25,0x82,0xab,0x6a,0xf4,0xba,0x71,0xf6,0xbd,0xe0,
    0xa9,0x1a,0xd5,0x41,0xa3,0x10,0xfa,0xcd,0x0e,0x68,0x94,0x86,0x9a,0x69,0xa4,0x51,
    0xba,0x71,0x71,0xaa,0xd1,0x02,0xd2,0x48,0x6c,0x19,0x72,0x4e,0x11,0x37,0x9b,0x34,
    0x9a,0x4b,0x1a,0xd5,0x05,0x34,0x9a,0x67,0x9c,0x9d,0x35,0x9a,0x6f,0x1c,0xae,0x1a,
    0x65,0x23,0x67,0x06,0x69,0x94,0x05,0x2e,0x71,0x01,0x9f,0x05,0xa4,0x51,0x36,0x69,
    0xf4,0xa1,0x71,0x79,0x85,0x57,0x16,0xb8,0xaa,0x46,0xfb,0x8d,0xb3,0x8b,0x56,0x21,
    0xe4,0xd3,0xb3,0xb7,0x07,0xf7,0x9b,0xf8,0xb5,0x61,0xaf,0x95,0x21,0x26,0xdb,0x44,
    0xce,0xfc,0x5b,0x38,0xf3,0xf5,0x74,0xe6,0xdf,0x06,0xae,0x67,0xfe,0x00,0x30,0x3d,
    0xf3,0x8d,0x74,0xe6,0xc5,0xd6,0x20,0xef,0x01,0xd4,0x3d,0x42,0xf7,0xc9,0x51,0xe4,
    0x6e,0xa6,0xdc,0xc7,0x80,0x6b,0xee,0x0f,0x80,0x69,0xee,0x56,0xca,0x2d,0xb6,0x16,
    0xdf,0xd7,0xe5,0x6e,0xa1,0x7d,0xf0,0x11,0xfa,0x92,0x6f,0x8a,0x2e,0xe4,0xfa,0x58,
    0x71,0x68,0xa1,0x71,0xad,0xd0,0x42,0x7c,0x8e,0xa3,0xe6,0x11,0xf8,0xb7,0xa0,0x6e,
    0x07,0xd5,0x15,0x9f,0x76,0x3b,0x3a,0x10,0xdf,0x4e,0x75,0x4f,0x50,0xdd,0x5c,0xfb,
    0x55,0x25,0xdf,0x67,0x27,0x81,0xb5,0x99,0xc8,0x37,0x4b,0x08,0xf7,0xb5,0xd8,0x4f,
    0x21,0x4e,0xc7,0x3e,0x9b,0x4b,0xf0,0x4e,0xc4,0x9e,0xf2,0x73,0x0d,0xf6,0xd7,0xaa,
    0x0b,0xb9,0x3a,0xf1,0xdd,0x14,0x4d,0xdf,0x7f,0xd2,0x93,0x72,0xea,0xa0,0xf5,0x6d,
    0x47,0xed,0x56,0xc4,0xb7,0xc3,0xb7,0x11,0xbe,0x0d,0xc4,0xbf,0xe9,0x3f,0xf8,0xbf,
    0x7f,0x17,0xfe,0x6f,0x80,0xe7,0x41,0xf8,0x34,0x11,0xcf,0xc3,0x88,0x39,0x78,0x17,
    0x9e,0x5a,0xbb,0x91,0x78,0x1e,0x37,0x8e,0x6b,0x07,0xe2,0x1b,0x68,0xaf,0x7c,0x8e,
    0xbd,0x72,0x96,0xf6,0xca,0x17,0xc0,0x75,0xaf,0x7c,0x09,0x4c,0xf7,0x4a,0x37,0xad,
    0x99,0xd8,0xce,0xd9,0xd1,0x8d,0xba,0xe7,0xa8,0xe7,0xaf,0x50,0x5b,0xdf,0x3d,0x05,
    0x81,0x3b,0x23,0x07,0x67,0x30,0x87,0xee,0x8c,0x5c,0xe3,0xe2,0x26,0x23,0x66,0x05,
    0xdd,0x19,0x62,0xcb,0xb3,0x63,0x09,0xe2,0xe4,0xb9,0x03,0xb5,0x96,0x22,0xee,0x21,
    0xba,0x2b,0x96,0x19,0x87,0x1f,0xa2,0xbb,0x65,0x39,0xdd,0x2d,0x62,0x4f,0x82,0x6e,
    0x05,0xc8,0x99,0x47,0x77,0x46,0x3e,0x72,0xca,0x77,0x35,0xfb,0xac,0xa0,0x3b,0xa3,
    0x80,0xee,0x8c,0x0e,0xe3,0xf2,0x0b,0xaf,0x7c,0x70,0xd5,0x3b,0xa3,0xce,0x38,0xbb,
    0xea,0xa1,0x1a,0x7d,0x0d,0x8d,0xf4,0xdd,0x53,0x1e,0xd0,0xa8,0x08,0x35,0x8b,0x48,
    0xa3,0x62,0xe3,0xe2,0x54,0xa3,0xb5,0xa4,0x91,0xd8,0x56,0xd9,0x51,0x8a,0xb8,0x52,
    0xd2,0xe8,0x45,0xc4,0xb1,0x46,0xab,0x8d,0xc3,0x59,0xa3,0x35,0xa4,0xd1,0x6a,0xd2,
    0xa8,0x1c,0x39,0x57,0x91,0x46,0x25,0xc8,0xa9,0x1a,0xa9,0xcf,0x5a,0xd2,0xa8,0x9c,
    0x34,0x3a,0x61,0x5c,0x7e,0xe1,0x55,0x02,0xae,0xaa,0x51,0xbd,0x71,0xf6,0xba,0xc0,
    0xbb,0xe7,0x1b,0x68,0xa4,0xef,0x9e,0x9a,0x80,0x46,0x1b,0x50,0x73,0x03,0x69,0xb4,
    0xd1,0xb8,0x38,0xd5,0xa8,0x9a,0x34,0x12,0x5b,0xa5,0x1d,0x9b,0x11,0xb7,0x99,0x34,
    0xda,0x82,0x38,0xd6,0xa8,0xca,0x38,0x9c,0x35,0xda,0x4a,0x1a,0x55,0x91,0x46,0x35,
    0xc8,0x59,0x49,0x1a,0x6d,0x42,0x4e,0xd5,0x48,0x7d,0xaa,0x49,0xa3,0x1a,0xd2,0xe8,
    0xa4,0x71,0xf9,0x85,0xd7,0x26,0x70,0x55,0x8d,0x0e,0x18,0x67,0xaf,0xa7,0x77,0x8f,
    0x9e,0xbd,0x6e,0x3a,0xf3,0x9d,0xd8,0x6b,0x8d,0x88,0xa9,0xa1,0x77,0xcf,0x77,0x38,
    0xf3,0xe7,0xe9,0xcc,0x7f,0x0f,0x5c,0xcf,0xfc,0x0f,0xc0,0xf4,0xcc,0x5f,0xa4,0x33,
    0x2f,0xb6,0x0b,0x76,0x5c,0x42,0xdd,0x4b,0x74,0x9f,0xfc,0x84,0xdc,0x97,0x29,0xf7,
    0xcf,0xc0,0x35,0xf7,0x2f,0xc0,0x34,0xf7,0x15,0xca,0x2d,0xb6,0x1e,0x3b,0xae,0x22,
    0xf7,0x55,0xfa,0xce,0xfe,0x0d,0xb9,0xaf,0xd1,0x77,0xf6,0xef,0xc0,0xbb,0xf1,0xdd,
    0xfe,0x07,0xb0,0x6a,0xaa,0xf7,0x27,0xf0,0x0a,0xd4,0xeb,0xa5,0x7a,0x62,0xbb,0x6e,
    0x47,0x2f,0xea,0x5d,0xf7,0x22,0x5a,0x37,0x19,0xf7,0x4e,0xeb,0xa4,0xff,0x6b,0xa9,
    0x5f,0x2f,0x69,0x7d,0xda,0x38,0x9f,0xab,0x88,0xb9,0x4e,0x7c,0x6e,0x82,0xcf,0x42,
    0xe2,0xd3,0x07,0x5c,0xf9,0xf4,0x13,0x9f,0x3e,0xbf,0x8e,0xe7,0x63,0x52,0xe7,0x16,
    0xf1,0x79,0x0f,0x7c,0x4e,0xd3,0xda,0xab,0x5f,0x3f,0xf1,0xe9,0x32,0xce,0xa7,0x17,
    0x31,0xb7,0x88,0xcf,0x6d,0xf0,0x39,0x4f,0x7c,0xfe,0x06,0xae,0x7c,0x3c,0x3a,0x2b,
    0x62,0x1b,0xc0,0xcb,0x49,0xea,0x0c,0x10,0x9f,0x83,0xc6,0xfd,0xcd,0xa2,0xcb,0x44,
    0xde,0x3f,0xea,0xe7,0x99,0x08,0x9f,0x4f,0xe1,0xd3,0x8f,0x98,0x01,0xf8,0x5e,0x01,
    0xf7,0x1e,0x3a,0xeb,0xbf,0x42,0xef,0x30,0xd5,0x79,0xc7,0x44,0x70,0x2f,0x10,0x7b,
    0x85,0xfa,0x3e,0x63,0x5c,0x2d,0xa9,0x2d,0x31,0x3d,0xf0,0xbd,0x08,0xdf,0x0b,0xf4,
    0x1e,0xfd,0x11,0xf9,0x64,0xe8,0xdf,0x79,0x43,0xf4,0x1e,0xd5,0x98,0x8b,0x94,0xff,
    0x13,0xe3,0x6a,0x5c,0x41,0xfc,0x05,0xff,0x6f,0x62,0x61,0xff,0xef,0x32,0x62,0xbb,
    0x6d,0x0b,0xcf,0xb0,0xe3,0x1f,0xe2,0x59,0x4a,0x80,0x98,0x16,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(set = 0, binding = 0)uniform texture2DArray src;
// layout(location = 0)out vec4 dst;
//
// layout(push_constant)uniform PushConstants {
//
//     ivec2 srcOffset;
//     ivec2 dstOffset;
//     int srcMip;
//     int srcLayer;
//
//     bool flipX;
//     bool flipY;
//
//     bool premultiplyAlpha;
//     bool unmultiplyAlpha;
//
//     bool dstHasLuminance;
//     bool dstIsAlpha;
//
//     bool srcIsSRGB;
//     bool dstIsSRGB;
//
//     int dstDefaultChannelsMask;
//     bool rotateXY;
// } params;
//
// float linearToSRGB(float linear)
// {
//
//     if(linear <= 0.0031308)
//     {
//         return linear * 12.92;
//     }
//     else
//     {
//         return pow(linear,(1.0f / 2.4f))* 1.055f - 0.055f;
//     }
// }
//
// float sRGBToLinear(float sRGB)
// {
//
//     if(sRGB <= 0.04045)
//     {
//         return sRGB / 12.92;
//     }
//     else
//     {
//         return pow((sRGB + 0.055f)/ 1.055f, 2.4f);
//     }
// }
//
// void main()
// {
//     ivec2 dstSubImageCoords = ivec2(gl_FragCoord . xy)- params . dstOffset;
//
//     ivec2 srcSubImageCoords = dstSubImageCoords;
//
//     if(params . flipX)
//     {
//         srcSubImageCoords . x = - srcSubImageCoords . x;
//     }
//     if(params . flipY)
//     {
//         srcSubImageCoords . y = - srcSubImageCoords . y;
//     }
//     if(params . rotateXY)
//     {
//         srcSubImageCoords . xy = srcSubImageCoords . yx;
//     }
//
//           vec4 srcValue = texelFetch(src, ivec3(params . srcOffset + srcSubImageCoords, params . srcLayer), params . srcMip);
//
//     if(params . srcIsSRGB)
//     {
//
//         srcValue . r = linearToSRGB(srcValue . r);
//         srcValue . g = linearToSRGB(srcValue . g);
//         srcValue . b = linearToSRGB(srcValue . b);
//     }
//
//     if(params . premultiplyAlpha)
//     {
//         srcValue . rgb *= srcValue . a;
//     }
//     else if(params . unmultiplyAlpha && srcValue . a > 0)
//     {
//         srcValue . rgb /= srcValue . a;
//     }
//
//            vec4 dstValue = vec4(srcValue);
//
//     if(params . dstIsSRGB)
//     {
//
//         dstValue . r = sRGBToLinear(dstValue . r);
//         dstValue . g = sRGBToLinear(dstValue . g);
//         dstValue . b = sRGBToLinear(dstValue . b);
//     }
//
//     if(params . dstHasLuminance)
//     {
//         dstValue . rg = dstValue . ra;
//     }
//     else if(params . dstIsAlpha)
//     {
//         dstValue . r = dstValue . a;
//     }
//     else
//     {
//         int defaultChannelsMask = params . dstDefaultChannelsMask;
//         if((defaultChannelsMask & 2)!= 0)
//         {
//             dstValue . g = 0;
//         }
//         if((defaultChannelsMask & 4)!= 0)
//         {
//             dstValue . b = 0;
//         }
//         if((defaultChannelsMask & 8)!= 0)
//         {
//             dstValue . a = 1;
//         }
//     }
//
//     dst = dstValue;
// }