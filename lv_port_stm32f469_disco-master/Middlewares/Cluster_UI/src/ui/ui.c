#if defined(EEZ_FOR_LVGL)
#include <eez/core/vars.h>
#endif

#include "ui.h"
#include "screens.h"
#include "images.h"
#include "actions.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[3084] = {
    0x7E, 0x45, 0x45, 0x5A, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x03, 0xE0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x90, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0x10, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x34, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x65, 0x66, 0x61,
    0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42, 0xB0, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00,
    0xE8, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x3C, 0x01, 0x00, 0x00,
    0x58, 0x01, 0x00, 0x00, 0x74, 0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0xAC, 0x01, 0x00, 0x00,
    0xC8, 0x01, 0x00, 0x00, 0xE4, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1C, 0x02, 0x00, 0x00,
    0x38, 0x02, 0x00, 0x00, 0x54, 0x02, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00, 0x8C, 0x02, 0x00, 0x00,
    0xA8, 0x02, 0x00, 0x00, 0xC4, 0x02, 0x00, 0x00, 0xE0, 0x02, 0x00, 0x00, 0xFC, 0x02, 0x00, 0x00,
    0x18, 0x03, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0x50, 0x03, 0x00, 0x00, 0x6C, 0x03, 0x00, 0x00,
    0x88, 0x03, 0x00, 0x00, 0xA4, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xDC, 0x03, 0x00, 0x00,
    0xF8, 0x03, 0x00, 0x00, 0x14, 0x04, 0x00, 0x00, 0x30, 0x04, 0x00, 0x00, 0x4C, 0x04, 0x00, 0x00,
    0x68, 0x04, 0x00, 0x00, 0x84, 0x04, 0x00, 0x00, 0xA0, 0x04, 0x00, 0x00, 0xBC, 0x04, 0x00, 0x00,
    0xD8, 0x04, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00, 0x10, 0x05, 0x00, 0x00, 0x2C, 0x05, 0x00, 0x00,
    0x48, 0x05, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x70, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x21, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x60, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x4C, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3C, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2C, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1C, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0C, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xEC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xDC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xCC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xBC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xAC, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x9C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x8C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x7C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x5C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x24, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xEC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xDC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xCC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xB8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xA4, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x94, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x5C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x48, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x23, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x24, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x23, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xF0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xDC, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xCC, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xBC, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xA8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x98, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00,
    0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x01, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x03, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x02, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x04, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x05, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x06, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x07, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x08, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x09, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x0A, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x0B, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x0C, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x0D, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x0E, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x0F, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x12, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x13, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x14, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x15, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x16, 0x60, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x17, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x18, 0x60, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x10, 0x60, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x10, 0x60, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x1A, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x11, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x1B, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x1C, 0x60, 0x00, 0xE0,
    0x0C, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_left_indicator, set_var_command_left_indicator }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_right_indicator, set_var_command_right_indicator }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_head_light, set_var_command_head_light }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_high_beam, set_var_command_high_beam }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_parking_brake, set_var_command_parking_brake }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_selt_belt_unbuckled, set_var_command_selt_belt_unbuckled }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_charger_indicator, set_var_command_charger_indicator }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_low_brake_oil_indicator, set_var_command_low_brake_oil_indicator }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_low_battery_indicator, set_var_command_low_battery_indicator }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_high_battery_temperature, set_var_command_high_battery_temperature }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_hazard_indicator, set_var_command_hazard_indicator }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_regenerative_braking, set_var_command_regenerative_braking }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_bluetooth, set_var_command_bluetooth }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_phone_call, set_var_command_phone_call }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_sms, set_var_command_sms }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_side_stand_indicator, set_var_command_side_stand_indicator }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_speed, set_var_command_speed }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_speed_text, set_var_command_speed_text }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_trip_1, set_var_command_trip_1 }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_odometry, set_var_command_odometry }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_battery_level, set_var_command_battery_level }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_battery_level_text, set_var_command_battery_level_text }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_dte_text, set_var_command_dte_text }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_battery_voltage_text, set_var_command_battery_voltage_text }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_gear_status_text, set_var_command_gear_status_text }, 
    { NATIVE_VAR_TYPE_INTEGER, get_var_command_ampere, set_var_command_ampere }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_ampere_text, set_var_command_ampere_text }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_date, set_var_command_date }, 
    { NATIVE_VAR_TYPE_STRING, get_var_command_time, set_var_command_time }, 
};


ActionExecFunc actions[] = {
    0
};


#if defined(EEZ_FOR_LVGL)

void ui_init() {
    eez_flow_init(assets, sizeof(assets), (lv_obj_t **)&objects, sizeof(objects), images, sizeof(images), actions);
}

void ui_tick() {
    eez_flow_tick();
    tick_screen(g_currentScreen);
}

#else

static int16_t currentScreen = -1;

static lv_obj_t *getLvglObjectFromIndex(int32_t index) {
    if (index == -1) {
        return 0;
    }
    return ((lv_obj_t **)&objects)[index];
}

static const void *getLvglImageByName(const char *name) {
    for (size_t imageIndex = 0; imageIndex < sizeof(images) / sizeof(ext_img_desc_t); imageIndex++) {
        if (strcmp(images[imageIndex].name, name) == 0) {
            return images[imageIndex].img_dsc;
        }
    }
    return 0;
}

void loadScreen(enum ScreensEnum screenId) {
    currentScreen = screenId - 1;
    lv_obj_t *screen = getLvglObjectFromIndex(currentScreen);
    lv_scr_load_anim(screen, LV_SCR_LOAD_ANIM_FADE_IN, 200, 0, false);
}

void ui_init() {
    create_screens();
    loadScreen(SCREEN_ID_MAIN);
}

void ui_tick() {
    tick_screen(currentScreen);
}

#endif