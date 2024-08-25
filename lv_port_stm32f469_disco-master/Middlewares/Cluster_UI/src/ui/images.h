#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const lv_img_dsc_t img_icon_left_indicator;
extern const lv_img_dsc_t img_icon_right_indicator;
extern const lv_img_dsc_t img_icon_high_beam;
extern const lv_img_dsc_t img_icon_head_light;
extern const lv_img_dsc_t img_icon_parking_brake;
extern const lv_img_dsc_t img_icon_seat_belt_unbuckled;
extern const lv_img_dsc_t img_icon_charger_indicator;
extern const lv_img_dsc_t img_icon_low_brake_oil_indicator;
extern const lv_img_dsc_t img_icon_low_battery_indicator;
extern const lv_img_dsc_t img_icon_high_battery_temperature;
extern const lv_img_dsc_t img_icon_hazard_indicator;
extern const lv_img_dsc_t img_icon_regenerative_braking;
extern const lv_img_dsc_t img_icon_bluetooth;
extern const lv_img_dsc_t img_icon_phone_call;
extern const lv_img_dsc_t img_icon_sms;
extern const lv_img_dsc_t img_icon_side_stand_indicator;
extern const lv_img_dsc_t img_logo_oem;
extern const lv_img_dsc_t img_icon_gear_indicator;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[18];


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_IMAGES_H*/
