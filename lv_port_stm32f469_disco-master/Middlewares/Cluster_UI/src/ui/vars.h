#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_NONE
};

// Native global variables

extern int32_t get_var_command_left_indicator();
extern void set_var_command_left_indicator(int32_t value);
extern int32_t get_var_command_right_indicator();
extern void set_var_command_right_indicator(int32_t value);
extern int32_t get_var_command_head_light();
extern void set_var_command_head_light(int32_t value);
extern int32_t get_var_command_high_beam();
extern void set_var_command_high_beam(int32_t value);
extern int32_t get_var_command_parking_brake();
extern void set_var_command_parking_brake(int32_t value);
extern int32_t get_var_command_selt_belt_unbuckled();
extern void set_var_command_selt_belt_unbuckled(int32_t value);
extern int32_t get_var_command_charger_indicator();
extern void set_var_command_charger_indicator(int32_t value);
extern int32_t get_var_command_low_brake_oil_indicator();
extern void set_var_command_low_brake_oil_indicator(int32_t value);
extern int32_t get_var_command_low_battery_indicator();
extern void set_var_command_low_battery_indicator(int32_t value);
extern int32_t get_var_command_high_battery_temperature();
extern void set_var_command_high_battery_temperature(int32_t value);
extern int32_t get_var_command_hazard_indicator();
extern void set_var_command_hazard_indicator(int32_t value);
extern int32_t get_var_command_regenerative_braking();
extern void set_var_command_regenerative_braking(int32_t value);
extern int32_t get_var_command_bluetooth();
extern void set_var_command_bluetooth(int32_t value);
extern int32_t get_var_command_phone_call();
extern void set_var_command_phone_call(int32_t value);
extern int32_t get_var_command_sms();
extern void set_var_command_sms(int32_t value);
extern int32_t get_var_command_side_stand_indicator();
extern void set_var_command_side_stand_indicator(int32_t value);
extern int32_t get_var_command_speed();
extern void set_var_command_speed(int32_t value);
extern const char *get_var_command_speed_text();
extern void set_var_command_speed_text(const char *value);
extern const char *get_var_command_trip_1();
extern void set_var_command_trip_1(const char *value);
extern const char *get_var_command_odometry();
extern void set_var_command_odometry(const char *value);
extern int32_t get_var_command_battery_level();
extern void set_var_command_battery_level(int32_t value);
extern const char *get_var_command_battery_level_text();
extern void set_var_command_battery_level_text(const char *value);
extern const char *get_var_command_dte_text();
extern void set_var_command_dte_text(const char *value);
extern const char *get_var_command_battery_voltage_text();
extern void set_var_command_battery_voltage_text(const char *value);
extern const char *get_var_command_gear_status_text();
extern void set_var_command_gear_status_text(const char *value);
extern int32_t get_var_command_ampere();
extern void set_var_command_ampere(int32_t value);
extern const char *get_var_command_ampere_text();
extern void set_var_command_ampere_text(const char *value);
extern const char *get_var_command_date();
extern void set_var_command_date(const char *value);
extern const char *get_var_command_time();
extern void set_var_command_time(const char *value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/