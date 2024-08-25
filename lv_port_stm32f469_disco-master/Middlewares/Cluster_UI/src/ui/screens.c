#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_dashboard_left_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_right_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_high_beam_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_head_light_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_parking_brake_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_seat_belt_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_charger_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_low_brake_oil_level_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_low_battery_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_high_battery_temperature_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_hazard_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_regenerative_braking_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_bluetooth_connection_status(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_phone_call_alert(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_sms_alert(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_side_stand_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

static void event_handler_cb_dashboard_battery_level_indicator(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
}

void create_screen_dashboard() {
    void *flowState = getFlowState(0, 0);
    lv_obj_t *obj = lv_obj_create(0);
    objects.dashboard = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xfff3f3f3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffb3b3b3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // left_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.left_indicator = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 90, 90);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_left_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_left_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // right_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.right_indicator = obj;
            lv_obj_set_pos(obj, 711, 1);
            lv_obj_set_size(obj, 90, 90);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_right_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_right_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // high_beam_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.high_beam_indicator = obj;
            lv_obj_set_pos(obj, 13, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_high_beam_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_high_beam, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // head_light_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.head_light_indicator = obj;
            lv_obj_set_pos(obj, 83, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_head_light_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_head_light, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // parking_brake_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.parking_brake_indicator = obj;
            lv_obj_set_pos(obj, 153, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_parking_brake_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_parking_brake, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // seat_belt_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.seat_belt_indicator = obj;
            lv_obj_set_pos(obj, 223, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_seat_belt_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_seat_belt_unbuckled, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // charger_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.charger_indicator = obj;
            lv_obj_set_pos(obj, 293, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_charger_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_charger_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // low_brake_oil_level_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.low_brake_oil_level_indicator = obj;
            lv_obj_set_pos(obj, 438, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_low_brake_oil_level_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_low_brake_oil_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // low_battery_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.low_battery_indicator = obj;
            lv_obj_set_pos(obj, 508, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_low_battery_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_low_battery_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // high_battery_temperature_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.high_battery_temperature_indicator = obj;
            lv_obj_set_pos(obj, 578, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_high_battery_temperature_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_high_battery_temperature, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // hazard_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.hazard_indicator = obj;
            lv_obj_set_pos(obj, 648, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_hazard_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_hazard_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // regenerative_braking_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.regenerative_braking_indicator = obj;
            lv_obj_set_pos(obj, 718, 420);
            lv_obj_set_size(obj, 70, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_regenerative_braking_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_regenerative_braking, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // bluetooth_connection_status
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.bluetooth_connection_status = obj;
            lv_obj_set_pos(obj, 725, 150);
            lv_obj_set_size(obj, 75, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_bluetooth_connection_status, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_bluetooth, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // phone_call_alert
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.phone_call_alert = obj;
            lv_obj_set_pos(obj, 725, 210);
            lv_obj_set_size(obj, 75, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_phone_call_alert, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_phone_call, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // sms_alert
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.sms_alert = obj;
            lv_obj_set_pos(obj, 725, 270);
            lv_obj_set_size(obj, 75, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_sms_alert, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_sms, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // side_stand_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.side_stand_indicator = obj;
            lv_obj_set_pos(obj, 363, 420);
            lv_obj_set_size(obj, 75, 60);
            lv_bar_set_range(obj, 0, 1);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_side_stand_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_side_stand_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 207, 293);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "TRIP :  ");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj0 = obj;
            lv_obj_set_pos(obj, 254, 292);
            lv_obj_set_size(obj, 80, 18);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 334, 293);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, " Km");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 203, 311);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "ODO :  ");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj1 = obj;
            lv_obj_set_pos(obj, 254, 310);
            lv_obj_set_size(obj, 80, 18);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 334, 311);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, " Km");
        }
        {
            // battery_level_indicator
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.battery_level_indicator = obj;
            lv_obj_set_pos(obj, 176, 5);
            lv_obj_set_size(obj, 450, 50);
            lv_obj_add_event_cb(obj, event_handler_cb_dashboard_battery_level_indicator, LV_EVENT_ALL, flowState);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xffa3e61d), LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_stop(obj, 120, LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfff3c121), LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff565656), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj2 = obj;
            lv_obj_set_pos(obj, 386, 18);
            lv_obj_set_size(obj, 48, 27);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_opa(obj, 215, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 430, 26);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "%");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 203, 328);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "  DTE : ");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj3 = obj;
            lv_obj_set_pos(obj, 254, 327);
            lv_obj_set_size(obj, 80, 18);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 334, 328);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, " Km");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 185, 346);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "Battery :  ");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj4 = obj;
            lv_obj_set_pos(obj, 254, 346);
            lv_obj_set_size(obj, 80, 17);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 334, 346);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, " V");
        }
        {
            // hazard_indicator_1
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.hazard_indicator_1 = obj;
            lv_obj_set_pos(obj, 247, 202);
            lv_obj_set_size(obj, 107, 77);
            lv_bar_set_range(obj, 0, 1);
            lv_bar_set_value(obj, 1, LV_ANIM_OFF);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            apply_style_style_indicators(obj);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_img_src(obj, &img_icon_gear_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj5 = obj;
            lv_obj_set_pos(obj, 283, 215);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff304ad9), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // ampere_meter
            lv_obj_t *obj = lv_meter_create(parent_obj);
            objects.ampere_meter = obj;
            lv_obj_set_pos(obj, 363, 60);
            lv_obj_set_size(obj, 360, 360);
            {
                lv_meter_scale_t *scale = lv_meter_add_scale(obj);
                lv_meter_set_scale_ticks(obj, scale, 51, 1, 5, lv_color_hex(0xffa0a0a0));
                lv_meter_set_scale_major_ticks(obj, scale, 5, 3, 10, lv_color_hex(0xff000000), 10);
                lv_meter_set_scale_range(obj, scale, 0, 100, 240, 120);
                {
                    lv_meter_indicator_t *indicator = lv_meter_add_needle_line(obj, scale, 0, lv_color_hex(0xff0000ff), -28);
                }
                {
                    lv_meter_indicator_t *indicator = lv_meter_add_arc(obj, scale, 0, lv_color_hex(0xffe21212), 7);
                    lv_meter_set_indicator_start_value(obj, indicator, 60);
                    lv_meter_set_indicator_end_value(obj, indicator, 100);
                }
            }
            lv_obj_set_style_bg_opa(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // speed_meter
            lv_obj_t *obj = lv_meter_create(parent_obj);
            objects.speed_meter = obj;
            lv_obj_set_pos(obj, 413, 110);
            lv_obj_set_size(obj, 260, 260);
            {
                lv_meter_scale_t *scale = lv_meter_add_scale(obj);
                lv_meter_set_scale_ticks(obj, scale, 21, 1, 5, lv_color_hex(0xffa0a0a0));
                lv_meter_set_scale_major_ticks(obj, scale, 4, 3, 10, lv_color_hex(0xff000000), 10);
                lv_meter_set_scale_range(obj, scale, 0, 100, 270, 120);
                {
                    lv_meter_indicator_t *indicator = lv_meter_add_needle_line(obj, scale, 3, lv_color_hex(0xff0000ff), -28);
                }
                {
                    lv_meter_indicator_t *indicator = lv_meter_add_arc(obj, scale, 0, lv_color_hex(0xffe27012), 7);
                    lv_meter_set_indicator_start_value(obj, indicator, 60);
                    lv_meter_set_indicator_end_value(obj, indicator, 100);
                }
            }
            lv_obj_set_style_bg_opa(obj, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // speed_unit
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.speed_unit = obj;
            lv_obj_set_pos(obj, 593, 314);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "Kmph");
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff951805), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // current_unit
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.current_unit = obj;
            lv_obj_set_pos(obj, 593, 370);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "Amps");
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff024c9f), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // current_text
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.current_text = obj;
            lv_obj_set_pos(obj, 497, 363);
            lv_obj_set_size(obj, 96, 52);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_CLIP);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff024c9f), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // speed_text
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.speed_text = obj;
            lv_obj_set_pos(obj, 497, 307);
            lv_obj_set_size(obj, 96, 52);
            lv_label_set_long_mode(obj, LV_LABEL_LONG_CLIP);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff951805), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 180, 364);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "      Date :  ");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj6 = obj;
            lv_obj_set_pos(obj, 247, 364);
            lv_obj_set_size(obj, 116, 17);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 179, 381);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "      Time :  ");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj7 = obj;
            lv_obj_set_pos(obj, 247, 381);
            lv_obj_set_size(obj, 116, 17);
            lv_label_set_text(obj, "");
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
}

void tick_screen_dashboard() {
    void *flowState = getFlowState(0, 0);
    {
        int32_t new_val = evalIntegerProperty(flowState, 0, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.left_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.left_indicator;
            lv_bar_set_value(objects.left_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 2, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.right_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.right_indicator;
            lv_bar_set_value(objects.right_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 3, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.high_beam_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.high_beam_indicator;
            lv_bar_set_value(objects.high_beam_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 4, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.head_light_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.head_light_indicator;
            lv_bar_set_value(objects.head_light_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 5, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.parking_brake_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.parking_brake_indicator;
            lv_bar_set_value(objects.parking_brake_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 6, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.seat_belt_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.seat_belt_indicator;
            lv_bar_set_value(objects.seat_belt_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 7, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.charger_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.charger_indicator;
            lv_bar_set_value(objects.charger_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 8, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.low_brake_oil_level_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.low_brake_oil_level_indicator;
            lv_bar_set_value(objects.low_brake_oil_level_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 9, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.low_battery_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.low_battery_indicator;
            lv_bar_set_value(objects.low_battery_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 10, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.high_battery_temperature_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.high_battery_temperature_indicator;
            lv_bar_set_value(objects.high_battery_temperature_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 11, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.hazard_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.hazard_indicator;
            lv_bar_set_value(objects.hazard_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 12, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.regenerative_braking_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.regenerative_braking_indicator;
            lv_bar_set_value(objects.regenerative_braking_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 13, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.bluetooth_connection_status);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.bluetooth_connection_status;
            lv_bar_set_value(objects.bluetooth_connection_status, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 14, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.phone_call_alert);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.phone_call_alert;
            lv_bar_set_value(objects.phone_call_alert, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 15, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.sms_alert);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.sms_alert;
            lv_bar_set_value(objects.sms_alert, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 16, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.side_stand_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.side_stand_indicator;
            lv_bar_set_value(objects.side_stand_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 18, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj0);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj0;
            lv_label_set_text(objects.obj0, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 21, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj1);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj1;
            lv_label_set_text(objects.obj1, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 23, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.battery_level_indicator);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.battery_level_indicator;
            lv_bar_set_value(objects.battery_level_indicator, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 24, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj2);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj2;
            lv_label_set_text(objects.obj2, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 27, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj3);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj3;
            lv_label_set_text(objects.obj3, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 30, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj4);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj4;
            lv_label_set_text(objects.obj4, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 33, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj5);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj5;
            lv_label_set_text(objects.obj5, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        lv_meter_indicator_t *indicator;
        
        lv_ll_t *indicators = &((lv_meter_t *)objects.ampere_meter)->indicator_ll;
        int index = 0;
        for (indicator = _lv_ll_get_tail(indicators); index > 0 && indicator != NULL; indicator = _lv_ll_get_prev(indicators, indicator), index--);
        
        if (indicator) {
            int32_t new_val = evalIntegerProperty(flowState, 34, 3, "Failed to evaluate Value in Meter widget");
            int32_t cur_val = indicator->start_value;
            if (new_val != cur_val) {
                tick_value_change_obj = objects.ampere_meter;
                lv_meter_set_indicator_value(objects.ampere_meter, indicator, new_val);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        lv_meter_indicator_t *indicator;
        
        lv_ll_t *indicators = &((lv_meter_t *)objects.speed_meter)->indicator_ll;
        int index = 0;
        for (indicator = _lv_ll_get_tail(indicators); index > 0 && indicator != NULL; indicator = _lv_ll_get_prev(indicators, indicator), index--);
        
        if (indicator) {
            int32_t new_val = evalIntegerProperty(flowState, 35, 3, "Failed to evaluate Value in Meter widget");
            int32_t cur_val = indicator->start_value;
            if (new_val != cur_val) {
                tick_value_change_obj = objects.speed_meter;
                lv_meter_set_indicator_value(objects.speed_meter, indicator, new_val);
                tick_value_change_obj = NULL;
            }
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 38, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.current_text);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.current_text;
            lv_label_set_text(objects.current_text, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 39, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.speed_text);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.speed_text;
            lv_label_set_text(objects.speed_text, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 41, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj6);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj6;
            lv_label_set_text(objects.obj6, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 43, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.obj7);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.obj7;
            lv_label_set_text(objects.obj7, new_val);
            tick_value_change_obj = NULL;
        }
    }
}


void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_dashboard();
}

typedef void (*tick_screen_func_t)();

tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_dashboard,
};

void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
