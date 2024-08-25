#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *dashboard;
    lv_obj_t *ampere_meter;
    lv_obj_t *battery_level_indicator;
    lv_obj_t *bluetooth_connection_status;
    lv_obj_t *charger_indicator;
    lv_obj_t *current_text;
    lv_obj_t *current_unit;
    lv_obj_t *hazard_indicator;
    lv_obj_t *hazard_indicator_1;
    lv_obj_t *head_light_indicator;
    lv_obj_t *high_battery_temperature_indicator;
    lv_obj_t *high_beam_indicator;
    lv_obj_t *left_indicator;
    lv_obj_t *low_battery_indicator;
    lv_obj_t *low_brake_oil_level_indicator;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj5;
    lv_obj_t *obj6;
    lv_obj_t *obj7;
    lv_obj_t *parking_brake_indicator;
    lv_obj_t *phone_call_alert;
    lv_obj_t *regenerative_braking_indicator;
    lv_obj_t *right_indicator;
    lv_obj_t *seat_belt_indicator;
    lv_obj_t *side_stand_indicator;
    lv_obj_t *sms_alert;
    lv_obj_t *speed_meter;
    lv_obj_t *speed_text;
    lv_obj_t *speed_unit;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_DASHBOARD = 1,
};

void create_screen_dashboard();
void tick_screen_dashboard();

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/
