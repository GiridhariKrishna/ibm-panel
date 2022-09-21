#pragma once

namespace panel
{
namespace firmware
{
/** The latest base firmware code can be found here. */

static constexpr std::array base{std::to_array<uint8_t>(
    {0xFF, 0x20, 0x08, 0x00, 0x5A, 0xEF, 0x04, 0xF0, 0xFF, 0x00, 0xFF, 0x00,
     0x49, 0x82, 0x98, 0xEF, 0x08, 0xF0, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
     0xFF, 0x00, 0xFF, 0x00, 0x49, 0x80, 0xD8, 0xCF, 0x33, 0xF0, 0xE8, 0xCF,
     0x34, 0xF0, 0xE0, 0xCF, 0x35, 0xF0, 0xFA, 0xCF, 0x36, 0xF0, 0xFB, 0xCF,
     0x37, 0xF0, 0xD9, 0xCF, 0x38, 0xF0, 0xDA, 0xCF, 0x39, 0xF0, 0xA0, 0xA6,
     0x20, 0xEF, 0x04, 0xF0, 0x22, 0xEF, 0x04, 0xF0, 0xFF, 0x20, 0x08, 0x40,
     0x38, 0xEF, 0x04, 0xF0, 0xA1, 0xA6, 0x27, 0xEF, 0x04, 0xF0, 0x29, 0xEF,
     0x04, 0xF0, 0x38, 0xEF, 0x04, 0xF0, 0x02, 0xD8, 0x36, 0xEF, 0x04, 0xF0,
     0x05, 0x00, 0xFA, 0x6E, 0x10, 0x50, 0xFD, 0x6E, 0x11, 0x50, 0xFE, 0x6E,
     0xF8, 0x50, 0xFF, 0x6E, 0xFA, 0x50, 0x12, 0x00, 0x48, 0xEF, 0x04, 0xF0,
     0x9D, 0xA6, 0x3D, 0xEF, 0x04, 0xF0, 0x3F, 0xEF, 0x04, 0xF0, 0x48, 0xEF,
     0x04, 0xF0, 0x9E, 0xA6, 0xFF, 0x20, 0x08, 0x80, 0x44, 0xEF, 0x04, 0xF0,
     0x46, 0xEF, 0x04, 0xF0, 0x48, 0xEF, 0x04, 0xF0, 0x29, 0xEF, 0x04, 0xF0,
     0x9E, 0x96, 0xC6, 0x88, 0x39, 0xC0, 0xDA, 0xFF, 0x38, 0xC0, 0xD9, 0xFF,
     0x37, 0xC0, 0xFB, 0xFF, 0x36, 0xC0, 0xFA, 0xFF, 0x35, 0xC0, 0xE0, 0xFF,
     0x34, 0xC0, 0xE8, 0xFF, 0x33, 0xC0, 0xD8, 0xFF, 0x49, 0x90, 0x10, 0x00,
     0x1D, 0xEF, 0x08, 0xF0, 0xC7, 0xA4, 0x61, 0xEF, 0x04, 0xF0, 0x63, 0xEF,
     0xFF, 0x20, 0x08, 0xC0, 0x04, 0xF0, 0xB9, 0xEF, 0x04, 0xF0, 0xC9, 0xCF,
     0x47, 0xF0, 0x1C, 0x04, 0xD8, 0xA4, 0x6B, 0xEF, 0x04, 0xF0, 0x6D, 0xEF,
     0x04, 0xF0, 0x7D, 0xEF, 0x04, 0xF0, 0xC7, 0xA8, 0x72, 0xEF, 0x04, 0xF0,
     0x74, 0xEF, 0x04, 0xF0, 0x7D, 0xEF, 0x04, 0xF0, 0x00, 0x0E, 0x1B, 0x6E,
     0x00, 0x0E, 0x1C, 0x6E, 0x03, 0x0E, 0x0F, 0xEC, 0x05, 0xF0, 0x0E, 0xEF,
     0x05, 0xF0, 0xC7, 0xAA, 0x82, 0xEF, 0x04, 0xF0, 0xFF, 0x20, 0x09, 0x00,
     0x84, 0xEF, 0x04, 0xF0, 0x99, 0xEF, 0x04, 0xF0, 0x05, 0x0E, 0x1B, 0x64,
     0x8A, 0xEF, 0x04, 0xF0, 0x8C, 0xEF, 0x04, 0xF0, 0x8E, 0xEF, 0x04, 0xF0,
     0x00, 0x0E, 0x1B, 0x6E, 0x40, 0x0E, 0x1B, 0x24, 0xD9, 0x6E, 0xDA, 0x6A,
     0x00, 0x0E, 0xDA, 0x22, 0xDF, 0x50, 0xC9, 0x6E, 0x1B, 0x2A, 0x0E, 0xEF,
     0x05, 0xF0, 0x4D, 0x0E, 0x40, 0x6E, 0x50, 0x0E, 0x41, 0x6E, 0x20, 0x0E,
     0x42, 0x6E, 0x35, 0x0E, 0xFF, 0x20, 0x09, 0x40, 0x43, 0x6E, 0x2E, 0x0E,
     0x44, 0x6E, 0x35, 0x0E, 0x45, 0x6E, 0x00, 0x0E, 0x1B, 0x6E, 0x01, 0x0E,
     0x1C, 0x6E, 0x40, 0x0E, 0x1B, 0x24, 0xD9, 0x6E, 0xDA, 0x6A, 0x00, 0x0E,
     0xDA, 0x22, 0xDF, 0x50, 0xC9, 0x6E, 0x1B, 0x2A, 0x04, 0x0E, 0x0F, 0xEC,
     0x05, 0xF0, 0x0E, 0xEF, 0x05, 0xF0, 0x0E, 0xEF, 0x05, 0xF0, 0xC7, 0xB4,
     0xBE, 0xEF, 0x04, 0xF0, 0xC0, 0xEF, 0x04, 0xF0, 0x0E, 0xEF, 0x05, 0xF0,
     0xFF, 0x20, 0x09, 0x80, 0xC6, 0xAC, 0xC5, 0xEF, 0x04, 0xF0, 0xC7, 0xEF,
     0x04, 0xF0, 0xCC, 0xEF, 0x04, 0xF0, 0xC9, 0xCF, 0x47, 0xF0, 0xC6, 0x9C,
     0x0E, 0xEF, 0x05, 0xF0, 0xC7, 0xA6, 0xD1, 0xEF, 0x04, 0xF0, 0xD3, 0xEF,
     0x04, 0xF0, 0xE8, 0xEF, 0x04, 0xF0, 0xC7, 0xBA, 0xD8, 0xEF, 0x04, 0xF0,
     0xDA, 0xEF, 0x04, 0xF0, 0xE8, 0xEF, 0x04, 0xF0, 0xC7, 0xA0, 0xDF, 0xEF,
     0x04, 0xF0, 0xE1, 0xEF, 0x04, 0xF0, 0xE8, 0xEF, 0xFF, 0x20, 0x09, 0xC0,
     0x04, 0xF0, 0xC9, 0xCF, 0x47, 0xF0, 0x01, 0x0E, 0x0F, 0xEC, 0x05, 0xF0,
     0x0E, 0xEF, 0x05, 0xF0, 0xC7, 0xA6, 0xED, 0xEF, 0x04, 0xF0, 0xEF, 0xEF,
     0x04, 0xF0, 0x04, 0xEF, 0x05, 0xF0, 0xC7, 0xAA, 0xF4, 0xEF, 0x04, 0xF0,
     0xF6, 0xEF, 0x04, 0xF0, 0x04, 0xEF, 0x05, 0xF0, 0xC7, 0xA0, 0xFB, 0xEF,
     0x04, 0xF0, 0xFD, 0xEF, 0x04, 0xF0, 0x04, 0xEF, 0x05, 0xF0, 0xC9, 0xCF,
     0x48, 0xF0, 0x00, 0x0E, 0xFF, 0x20, 0x0A, 0x00, 0x0F, 0xEC, 0x05, 0xF0,
     0x0E, 0xEF, 0x05, 0xF0, 0xC7, 0xA8, 0x09, 0xEF, 0x05, 0xF0, 0x0B, 0xEF,
     0x05, 0xF0, 0xB7, 0xEF, 0x04, 0xF0, 0x02, 0x0E, 0x0F, 0xEC, 0x05, 0xF0,
     0x12, 0x00, 0x32, 0x6E, 0x73, 0xEF, 0x05, 0xF0, 0x00, 0x0E, 0x18, 0x6E,
     0xA3, 0x0E, 0x46, 0x6E, 0x01, 0x0E, 0x25, 0x6E, 0x00, 0x0E, 0x24, 0x6E,
     0x94, 0xEF, 0x05, 0xF0, 0x25, 0x50, 0xD8, 0xB4, 0x22, 0xEF, 0x05, 0xF0,
     0xFF, 0x20, 0x0A, 0x40, 0x24, 0xEF, 0x05, 0xF0, 0x94, 0xEF, 0x05, 0xF0,
     0x18, 0x50, 0x2D, 0x6E, 0x2E, 0x6A, 0x01, 0x0E, 0x2D, 0x26, 0x00, 0x0E,
     0x2E, 0x22, 0x46, 0x50, 0x2F, 0x6E, 0x30, 0x6A, 0x2D, 0x50, 0x2F, 0x5C,
     0x30, 0x50, 0x80, 0x0A, 0x31, 0x6E, 0x2E, 0x50, 0x80, 0x0A, 0x31, 0x58,
     0xD8, 0xB0, 0x3B, 0xEF, 0x05, 0xF0, 0x3D, 0xEF, 0x05, 0xF0, 0x3F, 0xEF,
     0x05, 0xF0, 0x94, 0xEF, 0x05, 0xF0, 0x00, 0x0E, 0xFF, 0x20, 0x0A, 0x80,
     0x18, 0x24, 0xD9, 0x6E, 0xDA, 0x6A, 0x01, 0x0E, 0xDA, 0x22, 0x48, 0xC0,
     0xDF, 0xFF, 0x18, 0x2A, 0x02, 0x0E, 0x18, 0x18, 0xD8, 0xA4, 0x4F, 0xEF,
     0x05, 0xF0, 0x51, 0xEF, 0x05, 0xF0, 0x56, 0xEF, 0x05, 0xF0, 0x48, 0x50,
     0xB2, 0xEC, 0x08, 0xF0, 0x94, 0xEF, 0x05, 0xF0, 0x46, 0x50, 0x18, 0x18,
     0xD8, 0xA4, 0x5D, 0xEF, 0x05, 0xF0, 0x5F, 0xEF, 0x05, 0xF0, 0x67, 0xEF,
     0x05, 0xF0, 0x36, 0xEC, 0xFF, 0x20, 0x0A, 0xC0, 0x07, 0xF0, 0x00, 0x0E,
     0x25, 0x6E, 0x00, 0x0E, 0x24, 0x6E, 0x94, 0xEF, 0x05, 0xF0, 0x94, 0xEF,
     0x05, 0xF0, 0x25, 0x50, 0xD8, 0xB4, 0x6F, 0xEF, 0x05, 0xF0, 0x71, 0xEF,
     0x05, 0xF0, 0x94, 0xEF, 0x05, 0xF0, 0x5F, 0xEF, 0x05, 0xF0, 0x32, 0x50,
     0x2D, 0x6E, 0x2E, 0x6A, 0x2E, 0x50, 0x00, 0x0A, 0xD8, 0xB4, 0x7D, 0xEF,
     0x05, 0xF0, 0x94, 0xEF, 0x05, 0xF0, 0x2D, 0x50, 0x00, 0x0A, 0xD8, 0xB4,
     0xFF, 0x20, 0x0B, 0x00, 0x1C, 0xEF, 0x05, 0xF0, 0x01, 0x0A, 0xD8, 0xB4,
     0x12, 0xEF, 0x05, 0xF0, 0x03, 0x0A, 0xD8, 0xB4, 0x69, 0xEF, 0x05, 0xF0,
     0x01, 0x0A, 0xD8, 0xB4, 0x94, 0xEF, 0x05, 0xF0, 0x07, 0x0A, 0xD8, 0xB4,
     0x94, 0xEF, 0x05, 0xF0, 0x94, 0xEF, 0x05, 0xF0, 0x12, 0x00, 0x80, 0xAC,
     0x02, 0xD0, 0x1A, 0x82, 0x01, 0xD0, 0x1A, 0x92, 0x80, 0xAA, 0x02, 0xD0,
     0x1A, 0x80, 0x01, 0xD0, 0x1A, 0x90, 0x80, 0xAC, 0xFF, 0x20, 0x0B, 0x40,
     0x02, 0xD0, 0x1A, 0x82, 0x01, 0xD0, 0x1A, 0x92, 0x1A, 0xB2, 0xA9, 0xEF,
     0x05, 0xF0, 0xAC, 0xEF, 0x05, 0xF0, 0x01, 0x0E, 0xAD, 0xEF, 0x05, 0xF0,
     0x00, 0x0E, 0x26, 0x6E, 0x1A, 0xB6, 0xB3, 0xEF, 0x05, 0xF0, 0xB6, 0xEF,
     0x05, 0xF0, 0x01, 0x0E, 0xB7, 0xEF, 0x05, 0xF0, 0x00, 0x0E, 0x26, 0x1A,
     0xD8, 0xA4, 0xBD, 0xEF, 0x05, 0xF0, 0xBF, 0xEF, 0x05, 0xF0, 0xDA, 0xEF,
     0x05, 0xF0, 0x1A, 0xB0, 0xFF, 0x20, 0x0B, 0x80, 0xC4, 0xEF, 0x05, 0xF0,
     0xC7, 0xEF, 0x05, 0xF0, 0x01, 0x0E, 0xC8, 0xEF, 0x05, 0xF0, 0x00, 0x0E,
     0x26, 0x6E, 0x1A, 0xB4, 0xCE, 0xEF, 0x05, 0xF0, 0xD1, 0xEF, 0x05, 0xF0,
     0x01, 0x0E, 0xD2, 0xEF, 0x05, 0xF0, 0x00, 0x0E, 0x26, 0x1A, 0xD8, 0xB4,
     0xD8, 0xEF, 0x05, 0xF0, 0xDA, 0xEF, 0x05, 0xF0, 0x18, 0xEF, 0x06, 0xF0,
     0x00, 0x0E, 0x27, 0x6E, 0x1A, 0xA4, 0xE1, 0xEF, 0x05, 0xF0, 0xE3, 0xEF,
     0xFF, 0x20, 0x0B, 0xC0, 0x05, 0xF0, 0xF0, 0xEF, 0x05, 0xF0, 0x1A, 0xB0,
     0xE8, 0xEF, 0x05, 0xF0, 0xEA, 0xEF, 0x05, 0xF0, 0xF0, 0xEF, 0x05, 0xF0,
     0x51, 0xEC, 0x09, 0xF0, 0x01, 0x0E, 0x22, 0x6E, 0x01, 0x0E, 0x27, 0x6E,
     0x1A, 0xB6, 0xF5, 0xEF, 0x05, 0xF0, 0xF7, 0xEF, 0x05, 0xF0, 0x02, 0xEF,
     0x06, 0xF0, 0x1A, 0xA2, 0xFC, 0xEF, 0x05, 0xF0, 0xFE, 0xEF, 0x05, 0xF0,
     0x02, 0xEF, 0x06, 0xF0, 0x51, 0xEC, 0x09, 0xF0, 0xFF, 0x20, 0x0C, 0x00,
     0x01, 0x0E, 0x27, 0x6E, 0x27, 0x50, 0xD8, 0xA4, 0x08, 0xEF, 0x06, 0xF0,
     0x0A, 0xEF, 0x06, 0xF0, 0x0C, 0xEF, 0x06, 0xF0, 0xDE, 0xEC, 0x08, 0xF0,
     0x1A, 0xA2, 0x02, 0xD0, 0x1A, 0x86, 0x01, 0xD0, 0x1A, 0x96, 0x1A, 0xA0,
     0x02, 0xD0, 0x1A, 0x84, 0x01, 0xD0, 0x1A, 0x94, 0x1A, 0xEF, 0x06, 0xF0,
     0xDE, 0xEC, 0x08, 0xF0, 0x12, 0x00, 0x80, 0xAA, 0x02, 0xD0, 0x1A, 0x80,
     0x01, 0xD0, 0x1A, 0x90, 0xFF, 0x20, 0x0C, 0x40, 0x80, 0xAC, 0x02, 0xD0,
     0x1A, 0x82, 0x01, 0xD0, 0x1A, 0x92, 0x05, 0xBE, 0x31, 0xEF, 0x06, 0xF0,
     0xC0, 0x0E, 0x04, 0x5C, 0x5D, 0x0E, 0x05, 0x58, 0xD8, 0xA0, 0x31, 0xEF,
     0x06, 0xF0, 0x33, 0xEF, 0x06, 0xF0, 0x69, 0xEF, 0x06, 0xF0, 0x04, 0x50,
     0x05, 0x10, 0xD8, 0xB4, 0x3A, 0xEF, 0x06, 0xF0, 0x3C, 0xEF, 0x06, 0xF0,
     0x69, 0xEF, 0x06, 0xF0, 0x1A, 0xB6, 0x41, 0xEF, 0x06, 0xF0, 0x43, 0xEF,
     0xFF, 0x20, 0x0C, 0x80, 0x06, 0xF0, 0x4A, 0xEF, 0x06, 0xF0, 0x1A, 0xA2,
     0x48, 0xEF, 0x06, 0xF0, 0x4A, 0xEF, 0x06, 0xF0, 0x67, 0xEF, 0x06, 0xF0,
     0x1A, 0xB4, 0x4F, 0xEF, 0x06, 0xF0, 0x51, 0xEF, 0x06, 0xF0, 0x58, 0xEF,
     0x06, 0xF0, 0x1A, 0xA0, 0x56, 0xEF, 0x06, 0xF0, 0x58, 0xEF, 0x06, 0xF0,
     0x67, 0xEF, 0x06, 0xF0, 0x1A, 0xA0, 0x5D, 0xEF, 0x06, 0xF0, 0x5F, 0xEF,
     0x06, 0xF0, 0x69, 0xEF, 0x06, 0xF0, 0x22, 0x50, 0xFF, 0x20, 0x0C, 0xC0,
     0xD8, 0xA4, 0x65, 0xEF, 0x06, 0xF0, 0x67, 0xEF, 0x06, 0xF0, 0x69, 0xEF,
     0x06, 0xF0, 0x66, 0xEC, 0x09, 0xF0, 0x12, 0x00, 0xFB, 0xEC, 0x06, 0xF0,
     0x19, 0xB0, 0x71, 0xEF, 0x06, 0xF0, 0x73, 0xEF, 0x06, 0xF0, 0xAB, 0xEF,
     0x06, 0xF0, 0x19, 0xA4, 0x78, 0xEF, 0x06, 0xF0, 0x7A, 0xEF, 0x06, 0xF0,
     0xB5, 0xEF, 0x06, 0xF0, 0x19, 0xB6, 0x7F, 0xEF, 0x06, 0xF0, 0x81, 0xEF,
     0x06, 0xF0, 0xB5, 0xEF, 0xFF, 0x20, 0x0D, 0x00, 0x06, 0xF0, 0x19, 0x86,
     0x19, 0x94, 0x63, 0xEC, 0x09, 0xF0, 0x89, 0x84, 0x03, 0x0E, 0x3D, 0x6E,
     0x08, 0x0E, 0x3C, 0x6E, 0x77, 0x0E, 0xE8, 0x2E, 0xFE, 0xD7, 0x3C, 0x2E,
     0xFC, 0xD7, 0x3D, 0x2E, 0xFA, 0xD7, 0x00, 0xF0, 0x80, 0xB6, 0x97, 0xEF,
     0x06, 0xF0, 0x99, 0xEF, 0x06, 0xF0, 0x86, 0xEF, 0x06, 0xF0, 0x89, 0x90,
     0x0B, 0x0E, 0x3D, 0x6E, 0x26, 0x0E, 0x3C, 0x6E, 0x5E, 0x0E, 0xE8, 0x2E,
     0xFF, 0x20, 0x0D, 0x40, 0xFE, 0xD7, 0x3C, 0x2E, 0xFC, 0xD7, 0x3D, 0x2E,
     0xFA, 0xD7, 0x89, 0x80, 0x89, 0x98, 0x89, 0x94, 0x19, 0x84, 0xB5, 0xEF,
     0x06, 0xF0, 0x19, 0xA6, 0xB0, 0xEF, 0x06, 0xF0, 0xB2, 0xEF, 0x06, 0xF0,
     0xB5, 0xEF, 0x06, 0xF0, 0x19, 0x96, 0xB5, 0xEF, 0x06, 0xF0, 0x12, 0x00,
     0x0C, 0xEC, 0x09, 0xF0, 0x6C, 0xEC, 0x09, 0xF0, 0xD3, 0xA4, 0xBF, 0xEF,
     0x06, 0xF0, 0xC1, 0xEF, 0x06, 0xF0, 0xBA, 0xEF, 0xFF, 0x20, 0x0D, 0x80,
     0x06, 0xF0, 0xF2, 0x9E, 0xF2, 0x9C, 0x80, 0xBA, 0xC8, 0xEF, 0x06, 0xF0,
     0xCA, 0xEF, 0x06, 0xF0, 0xCE, 0xEF, 0x06, 0xF0, 0x01, 0x0E, 0x22, 0x6E,
     0xD0, 0xEF, 0x06, 0xF0, 0x00, 0x0E, 0x22, 0x6E, 0x15, 0x0E, 0x3F, 0x6E,
     0x4B, 0x0E, 0x3E, 0x6E, 0xBE, 0x0E, 0xE8, 0x2E, 0xFE, 0xD7, 0x3E, 0x2E,
     0xFC, 0xD7, 0x3F, 0x2E, 0xFA, 0xD7, 0x00, 0xF0, 0x00, 0xF0, 0xF2, 0x8C,
     0xF2, 0x8E, 0x80, 0xAA, 0xFF, 0x20, 0x0D, 0xC0, 0x02, 0xD0, 0x1A, 0x80,
     0x01, 0xD0, 0x1A, 0x90, 0x80, 0xAC, 0x02, 0xD0, 0x1A, 0x82, 0x01, 0xD0,
     0x1A, 0x92, 0x80, 0xAA, 0x02, 0xD0, 0x1A, 0x84, 0x01, 0xD0, 0x1A, 0x94,
     0x80, 0xAC, 0x02, 0xD0, 0x1A, 0x86, 0x01, 0xD0, 0x1A, 0x96, 0x19, 0x84,
     0x01, 0x0E, 0x23, 0x6E, 0x19, 0x80, 0xF5, 0xEC, 0x07, 0xF0, 0x5A, 0xEF,
     0x04, 0xF0, 0x00, 0x0E, 0x80, 0xB2, 0x01, 0x0E, 0x3B, 0x6E, 0x00, 0x0E,
     0xFF, 0x20, 0x0E, 0x00, 0x3A, 0x6E, 0x3B, 0x50, 0x23, 0x18, 0xD8, 0xB4,
     0x08, 0xEF, 0x07, 0xF0, 0x0A, 0xEF, 0x07, 0xF0, 0x30, 0xEF, 0x07, 0xF0,
     0x00, 0x0E, 0x80, 0xB2, 0x01, 0x0E, 0x3B, 0x6E, 0x3B, 0xC0, 0x23, 0xF0,
     0x00, 0x0E, 0x80, 0xB2, 0x01, 0x0E, 0x3B, 0x6E, 0x3A, 0x2A, 0x3B, 0x50,
     0x23, 0x18, 0xD8, 0xA4, 0x1C, 0xEF, 0x07, 0xF0, 0x1E, 0xEF, 0x07, 0xF0,
     0x26, 0xEF, 0x07, 0xF0, 0x4F, 0x0E, 0x3A, 0x64, 0xFF, 0x20, 0x0E, 0x40,
     0x24, 0xEF, 0x07, 0xF0, 0x26, 0xEF, 0x07, 0xF0, 0x10, 0xEF, 0x07, 0xF0,
     0x3B, 0x50, 0x23, 0x18, 0xD8, 0xA4, 0x2D, 0xEF, 0x07, 0xF0, 0x2F, 0xEF,
     0x07, 0xF0, 0x0A, 0xEF, 0x07, 0xF0, 0x3B, 0x1E, 0x3B, 0xB0, 0x02, 0xD0,
     0x19, 0x90, 0x01, 0xD0, 0x19, 0x80, 0x12, 0x00, 0x03, 0x0E, 0x18, 0x60,
     0x3C, 0xEF, 0x07, 0xF0, 0x3E, 0xEF, 0x07, 0xF0, 0x40, 0xEF, 0x07, 0xF0,
     0x6D, 0xEF, 0x07, 0xF0, 0xFF, 0x20, 0x0E, 0x80, 0x01, 0x01, 0x00, 0x29,
     0xD8, 0xB4, 0x47, 0xEF, 0x07, 0xF0, 0x49, 0xEF, 0x07, 0xF0, 0x4B, 0xEF,
     0x07, 0xF0, 0x6D, 0xEF, 0x07, 0xF0, 0xFF, 0x0E, 0x18, 0x24, 0xD9, 0x6E,
     0xDA, 0x6A, 0x00, 0x0E, 0xDA, 0x22, 0x00, 0x0E, 0xDF, 0x6E, 0x30, 0x0E,
     0x01, 0x19, 0xD8, 0xA4, 0x5A, 0xEF, 0x07, 0xF0, 0x5C, 0xEF, 0x07, 0xF0,
     0x62, 0xEF, 0x07, 0xF0, 0x01, 0x0E, 0x01, 0x6E, 0xF2, 0x9E, 0xF2, 0x9C,
     0xFF, 0x20, 0x0E, 0xC0, 0x00, 0xEF, 0x00, 0xF0, 0x40, 0x0E, 0x01, 0x01,
     0x01, 0x19, 0xD8, 0xA4, 0x6A, 0xEF, 0x07, 0xF0, 0x6C, 0xEF, 0x07, 0xF0,
     0x6D, 0xEF, 0x07, 0xF0, 0x89, 0x88, 0x12, 0x00, 0xEF, 0xEC, 0x08, 0xF0,
     0xB4, 0x0E, 0x5F, 0xEC, 0x09, 0xF0, 0xFE, 0x0E, 0x5B, 0xEC, 0x09, 0xF0,
     0xBE, 0x0E, 0x3A, 0x6E, 0x10, 0x0E, 0x3B, 0x6E, 0x42, 0xEC, 0x09, 0xF0,
     0x00, 0x0E, 0x3A, 0x6E, 0x00, 0x0E, 0x3B, 0x6E, 0xFF, 0x20, 0x0F, 0x00,
     0x47, 0xEC, 0x09, 0xF0, 0x00, 0x0E, 0x3A, 0x6E, 0x00, 0x0E, 0x3B, 0x6E,
     0x33, 0xEC, 0x09, 0xF0, 0x00, 0x0E, 0x3A, 0x6E, 0x00, 0x0E, 0x3B, 0x6E,
     0x3D, 0xEC, 0x09, 0xF0, 0x00, 0x0E, 0x3A, 0x6E, 0x00, 0x0E, 0x3B, 0x6E,
     0x4C, 0xEC, 0x09, 0xF0, 0x00, 0x0E, 0x3A, 0x6E, 0x00, 0x0E, 0x3B, 0x6E,
     0x38, 0xEC, 0x09, 0xF0, 0x70, 0xEC, 0x09, 0xF0, 0x6E, 0xEC, 0x09, 0xF0,
     0x12, 0x00, 0x80, 0xB2, 0xFF, 0x20, 0x0F, 0x40, 0xA4, 0xEF, 0x07, 0xF0,
     0xA6, 0xEF, 0x07, 0xF0, 0xC9, 0xEF, 0x07, 0xF0, 0x89, 0x84, 0x03, 0x0E,
     0x3B, 0x6E, 0x08, 0x0E, 0x3A, 0x6E, 0x77, 0x0E, 0xE8, 0x2E, 0xFE, 0xD7,
     0x3A, 0x2E, 0xFC, 0xD7, 0x3B, 0x2E, 0xFA, 0xD7, 0x00, 0xF0, 0x80, 0xB6,
     0xB8, 0xEF, 0x07, 0xF0, 0xBA, 0xEF, 0x07, 0xF0, 0xA7, 0xEF, 0x07, 0xF0,
     0x89, 0x90, 0x0B, 0x0E, 0x3B, 0x6E, 0x26, 0x0E, 0x3A, 0x6E, 0x5E, 0x0E,
     0xFF, 0x20, 0x0F, 0x80, 0xE8, 0x2E, 0xFE, 0xD7, 0x3A, 0x2E, 0xFC, 0xD7,
     0x3B, 0x2E, 0xFA, 0xD7, 0x89, 0x80, 0x89, 0x98, 0x89, 0x94, 0x12, 0x00,
     0xF2, 0x94, 0x15, 0x50, 0xD7, 0x6E, 0x14, 0xC0, 0xD6, 0xFF, 0x12, 0x4A,
     0x13, 0x2A, 0x12, 0x50, 0x13, 0x10, 0xD8, 0xB4, 0xD8, 0xEF, 0x07, 0xF0,
     0xDA, 0xEF, 0x07, 0xF0, 0xF4, 0xEF, 0x07, 0xF0, 0x16, 0x50, 0x17, 0x10,
     0xD8, 0xB4, 0xE1, 0xEF, 0x07, 0xF0, 0xE3, 0xEF, 0xFF, 0x20, 0x0F, 0xC0,
     0x07, 0xF0, 0xF0, 0xEF, 0x07, 0xF0, 0x02, 0xD8, 0xF0, 0xEF, 0x07, 0xF0,
     0x05, 0x00, 0xFA, 0x6E, 0x16, 0x50, 0xFD, 0x6E, 0x17, 0x50, 0xFE, 0x6E,
     0xF8, 0x50, 0xFF, 0x6E, 0xFA, 0x50, 0x12, 0x00, 0x00, 0x0E, 0x13, 0x6E,
     0x00, 0x0E, 0x12, 0x6E, 0x12, 0x00, 0xF2, 0x9E, 0xF2, 0x9C, 0x25, 0x50,
     0xD8, 0xB4, 0xFD, 0xEF, 0x07, 0xF0, 0xFF, 0xEF, 0x07, 0xF0, 0x0C, 0xEF,
     0x08, 0xF0, 0x14, 0x0E, 0xFF, 0x20, 0x10, 0x00, 0x24, 0x64, 0x05, 0xEF,
     0x08, 0xF0, 0x07, 0xEF, 0x08, 0xF0, 0x0C, 0xEF, 0x08, 0xF0, 0x00, 0x0E,
     0x25, 0x6E, 0x00, 0x0E, 0x24, 0x6E, 0xC6, 0x88, 0xF2, 0x8C, 0xF2, 0x8E,
     0x6A, 0xEC, 0x06, 0xF0, 0x9F, 0xEC, 0x07, 0xF0, 0xF2, 0x9E, 0xF2, 0x9C,
     0x1B, 0xEC, 0x06, 0xF0, 0xF2, 0x8C, 0xF2, 0x8E, 0x40, 0xEC, 0x08, 0xF0,
     0xF5, 0xEF, 0x07, 0xF0, 0x12, 0x00, 0xAC, 0x0E, 0xF6, 0x6E, 0x12, 0x0E,
     0xFF, 0x20, 0x10, 0x40, 0xF7, 0x6E, 0x00, 0x0E, 0xF8, 0x6E, 0x00, 0xEE,
     0x40, 0xF0, 0x10, 0xEE, 0x09, 0xF0, 0x09, 0x00, 0xF5, 0xCF, 0xEE, 0xFF,
     0xE5, 0x50, 0xE1, 0x50, 0xFA, 0xE1, 0x01, 0xEE, 0x00, 0xF0, 0xA3, 0x0E,
     0xEE, 0x6A, 0xE8, 0x06, 0xFD, 0xE1, 0x00, 0xEE, 0x02, 0xF0, 0x24, 0x0E,
     0xEE, 0x6A, 0xE8, 0x06, 0xFD, 0xE1, 0x49, 0x90, 0x49, 0x92, 0x00, 0x0E,
     0xF8, 0x6E, 0x00, 0x01, 0xB6, 0xEF, 0x06, 0xF0, 0xFF, 0x20, 0x10, 0x80,
     0x81, 0xB0, 0x45, 0xEF, 0x08, 0xF0, 0x47, 0xEF, 0x08, 0xF0, 0x5E, 0xEF,
     0x08, 0xF0, 0x00, 0x0E, 0x3A, 0x6E, 0x3A, 0x2A, 0x31, 0x0E, 0x3A, 0x64,
     0x50, 0xEF, 0x08, 0xF0, 0x52, 0xEF, 0x08, 0xF0, 0x49, 0xEF, 0x08, 0xF0,
     0x81, 0xB0, 0x57, 0xEF, 0x08, 0xF0, 0x59, 0xEF, 0x08, 0xF0, 0x5E, 0xEF,
     0x08, 0xF0, 0x8B, 0x8A, 0xF2, 0x9E, 0xF2, 0x9C, 0x00, 0xEF, 0x00, 0xF0,
     0x12, 0x00, 0x72, 0xEC, 0xFF, 0x20, 0x10, 0xC0, 0x09, 0xF0, 0xC7, 0xA6,
     0x66, 0xEF, 0x08, 0xF0, 0x68, 0xEF, 0x08, 0xF0, 0x78, 0xEF, 0x08, 0xF0,
     0xC7, 0xB0, 0x6D, 0xEF, 0x08, 0xF0, 0x6F, 0xEF, 0x08, 0xF0, 0x78, 0xEF,
     0x08, 0xF0, 0xC7, 0xB4, 0x74, 0xEF, 0x08, 0xF0, 0x76, 0xEF, 0x08, 0xF0,
     0x78, 0xEF, 0x08, 0xF0, 0x7C, 0xEF, 0x08, 0xF0, 0x5C, 0xEC, 0x04, 0xF0,
     0x74, 0xEC, 0x09, 0xF0, 0x12, 0x00, 0xD5, 0x9C, 0xCF, 0x0E, 0xD7, 0x6E,
     0xFF, 0x20, 0x11, 0x00, 0x2B, 0x0E, 0xD6, 0x6E, 0xD6, 0x50, 0xD7, 0xCF,
     0x3C, 0xF0, 0x3D, 0x6A, 0x3C, 0xC0, 0x3D, 0xF0, 0x3C, 0x6A, 0x3C, 0x10,
     0x14, 0x6E, 0x3D, 0x50, 0x15, 0x6E, 0xF2, 0x94, 0xF2, 0x8A, 0xD2, 0x0E,
     0x3A, 0x6E, 0x12, 0x0E, 0x3B, 0x6E, 0x24, 0xEC, 0x09, 0xF0, 0x91, 0x0E,
     0xD5, 0x6E, 0x12, 0x00, 0xFA, 0xCF, 0x28, 0xF0, 0xFB, 0xCF, 0x29, 0xF0,
     0xF2, 0xAA, 0xA1, 0xEF, 0x08, 0xF0, 0xA3, 0xEF, 0xFF, 0x20, 0x11, 0x40,
     0x08, 0xF0, 0xAC, 0xEF, 0x08, 0xF0, 0xF2, 0xA4, 0xA8, 0xEF, 0x08, 0xF0,
     0xAA, 0xEF, 0x08, 0xF0, 0xAC, 0xEF, 0x08, 0xF0, 0xCA, 0xEC, 0x07, 0xF0,
     0x29, 0xC0, 0xFB, 0xFF, 0x28, 0xC0, 0xFA, 0xFF, 0x49, 0x92, 0x11, 0x00,
     0x2C, 0x6E, 0xB9, 0xEF, 0x08, 0xF0, 0x44, 0x0E, 0x46, 0x6E, 0xCA, 0xEF,
     0x08, 0xF0, 0x2C, 0x50, 0x2A, 0x6E, 0x2B, 0x6A, 0x2B, 0x50, 0x00, 0x0A,
     0xD8, 0xB4, 0xC3, 0xEF, 0xFF, 0x20, 0x11, 0x80, 0x08, 0xF0, 0xCA, 0xEF,
     0x08, 0xF0, 0x2A, 0x50, 0x30, 0x0A, 0xD8, 0xB4, 0xB5, 0xEF, 0x08, 0xF0,
     0xCA, 0xEF, 0x08, 0xF0, 0x12, 0x00, 0x11, 0x0E, 0x89, 0x6E, 0x00, 0x0E,
     0x8A, 0x6E, 0x00, 0x0E, 0x8B, 0x6E, 0xEA, 0x0E, 0x92, 0x6E, 0x93, 0x68,
     0x5C, 0x0E, 0x94, 0x6E, 0x00, 0x0E, 0x7E, 0x6E, 0x0F, 0x0E, 0x7F, 0x6E,
     0x00, 0x0E, 0x7C, 0x6E, 0xF1, 0x8E, 0x12, 0x00, 0x05, 0xBE, 0xEC, 0xEF,
     0xFF, 0x20, 0x11, 0xC0, 0x08, 0xF0, 0xC1, 0x0E, 0x04, 0x5C, 0x5D, 0x0E,
     0x05, 0x58, 0xD8, 0xB0, 0xEA, 0xEF, 0x08, 0xF0, 0xEC, 0xEF, 0x08, 0xF0,
     0xEE, 0xEF, 0x08, 0xF0, 0x04, 0x4A, 0x05, 0x2A, 0x12, 0x00, 0xC6, 0xBA,
     0xF4, 0xEF, 0x08, 0xF0, 0xF6, 0xEF, 0x08, 0xF0, 0xFD, 0xEF, 0x08, 0xF0,
     0x00, 0x0E, 0xC7, 0x6E, 0x1E, 0x0E, 0xC6, 0x12, 0x81, 0x0E, 0xC5, 0x6E,
     0xC6, 0x8A, 0x12, 0x00, 0x00, 0x0E, 0xC7, 0x6E, 0xFF, 0x20, 0x12, 0x00,
     0x1E, 0x0E, 0xC6, 0x12, 0x81, 0x0E, 0xC5, 0x6E, 0xC6, 0x9A, 0x6E, 0xEC,
     0x07, 0xF0, 0x00, 0x0E, 0x25, 0x6E, 0x00, 0x0E, 0x24, 0x6E, 0x12, 0x00,
     0x2E, 0xEC, 0x09, 0xF0, 0xFE, 0xEC, 0x08, 0xF0, 0xCB, 0xEC, 0x08, 0xF0,
     0x29, 0xEC, 0x09, 0xF0, 0x7D, 0xEC, 0x08, 0xF0, 0xD0, 0x82, 0x12, 0x00,
     0x95, 0xEC, 0x05, 0xF0, 0x24, 0x28, 0xD8, 0xB4, 0x20, 0xEF, 0x09, 0xF0,
     0x22, 0xEF, 0x09, 0xF0, 0xFF, 0x20, 0x12, 0x40, 0x23, 0xEF, 0x09, 0xF0,
     0x24, 0x2A, 0x12, 0x00, 0x3A, 0xC0, 0x16, 0xF0, 0x3B, 0xC0, 0x17, 0xF0,
     0x12, 0x00, 0x70, 0x0E, 0xD3, 0x6E, 0x00, 0x0E, 0x9B, 0x6E, 0x12, 0x00,
     0xD0, 0x8E, 0xF1, 0x84, 0xA2, 0x96, 0x9F, 0x96, 0x12, 0x00, 0x3A, 0xC0,
     0x0C, 0xF0, 0x3B, 0xC0, 0x0D, 0xF0, 0x12, 0x00, 0x3A, 0xC0, 0x06, 0xF0,
     0x3B, 0xC0, 0x07, 0xF0, 0x12, 0x00, 0x3A, 0xC0, 0x0E, 0xF0, 0x3B, 0xC0,
     0xFF, 0x20, 0x12, 0x80, 0x0F, 0xF0, 0x12, 0x00, 0x3A, 0xC0, 0x10, 0xF0,
     0x3B, 0xC0, 0x11, 0xF0, 0x12, 0x00, 0x3A, 0xC0, 0x08, 0xF0, 0x3B, 0xC0,
     0x09, 0xF0, 0x12, 0x00, 0x3A, 0xC0, 0x0A, 0xF0, 0x3B, 0xC0, 0x0B, 0xF0,
     0x12, 0x00, 0x00, 0x0E, 0x05, 0x6E, 0x00, 0x0E, 0x04, 0x6E, 0x12, 0x00,
     0x4D, 0x50, 0x20, 0x35, 0x2E, 0x35, 0xA3, 0x55, 0x55, 0x00, 0x3A, 0x6E,
     0x3A, 0xC0, 0x77, 0xFF, 0x12, 0x00, 0x3A, 0x6E, 0xFF, 0x20, 0x12, 0xC0,
     0x3A, 0xC0, 0xC8, 0xFF, 0x12, 0x00, 0x8B, 0x90, 0x8B, 0x9E, 0x12, 0x00,
     0x8B, 0x80, 0x8B, 0x8E, 0x12, 0x00, 0x18, 0xEC, 0x09, 0xF0, 0x12, 0x00,
     0xD5, 0x8E, 0x12, 0x00, 0x9D, 0x86, 0x12, 0x00, 0x9E, 0x96, 0x12, 0x00,
     0x9E, 0x96, 0x12, 0x00, 0xC6, 0x88, 0x12, 0x00, 0xFF, 0x00, 0xFF, 0x00,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF})};

} // namespace firmware
} // namespace panel