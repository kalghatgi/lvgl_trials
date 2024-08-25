#include "vars.h"
#include <string.h>

int32_t command_left_indicator;
int32_t command_right_indicator;
int32_t command_head_light;
int32_t command_high_beam;
int32_t command_parking_brake;
int32_t command_selt_belt_unbuckled;
int32_t command_charger_indicator;
int32_t command_low_brake_oil_indicator;
int32_t command_low_battery_indicator;
int32_t command_high_battery_temperature;
int32_t command_hazard_indicator;
int32_t command_regenerative_braking;
int32_t command_bluetooth;
int32_t command_phone_call;
int32_t command_sms;
int32_t command_side_stand_indicator;
int32_t command_speed;
char command_speed_text[3];
char command_trip_1[8];
char command_odometry[8];
int32_t command_battery_level;
char command_battery_level_text[3];
char command_dte_text[7];
char command_battery_voltage_text[6];
char command_gear_status_text[1];
int32_t command_ampere;
char command_ampere_text[3];
char command_date[12];
char command_time[9];

int32_t get_var_command_left_indicator()
{
	return command_left_indicator;
}
void set_var_command_left_indicator(int32_t value)
{
	command_left_indicator = value;
}
int32_t get_var_command_right_indicator()
{
	return command_right_indicator;
}
void set_var_command_right_indicator(int32_t value)
{
	command_right_indicator = value;
}
int32_t get_var_command_head_light()
{
	return command_head_light;
}
void set_var_command_head_light(int32_t value)
{
	command_head_light = value;
}
int32_t get_var_command_high_beam()
{
	return command_high_beam;
}
void set_var_command_high_beam(int32_t value)
{
	command_high_beam = value;
}
int32_t get_var_command_parking_brake()
{
	return command_parking_brake;
}
void set_var_command_parking_brake(int32_t value)
{
	command_parking_brake = value;
}
int32_t get_var_command_selt_belt_unbuckled()
{
	return command_selt_belt_unbuckled;
}
void set_var_command_selt_belt_unbuckled(int32_t value)
{
	command_selt_belt_unbuckled = value;
}
int32_t get_var_command_charger_indicator()
{
	return command_charger_indicator;
}
void set_var_command_charger_indicator(int32_t value)
{
	command_charger_indicator = value;
}
int32_t get_var_command_low_brake_oil_indicator()
{
	return command_low_brake_oil_indicator;
}
void set_var_command_low_brake_oil_indicator(int32_t value)
{
	command_low_brake_oil_indicator = value;
}
int32_t get_var_command_low_battery_indicator()
{
	return command_low_battery_indicator;
}
void set_var_command_low_battery_indicator(int32_t value)
{
	command_low_battery_indicator = value;
}
int32_t get_var_command_high_battery_temperature()
{
	return command_high_battery_temperature;
}
void set_var_command_high_battery_temperature(int32_t value)
{
	command_high_battery_temperature = value;
}
int32_t get_var_command_hazard_indicator()
{
	return command_hazard_indicator;
}
void set_var_command_hazard_indicator(int32_t value)
{
	command_hazard_indicator = value;
}
int32_t get_var_command_regenerative_braking()
{
	return command_regenerative_braking;
}
void set_var_command_regenerative_braking(int32_t value)
{
	command_regenerative_braking = value;
}
int32_t get_var_command_bluetooth()
{
	return command_bluetooth;
}
void set_var_command_bluetooth(int32_t value)
{
	command_bluetooth = value;
}
int32_t get_var_command_phone_call()
{
	return command_phone_call;
}
void set_var_command_phone_call(int32_t value)
{
	command_phone_call = value;
}
int32_t get_var_command_sms()
{
	return command_sms;
}
void set_var_command_sms(int32_t value)
{
	command_sms = value;
}
int32_t get_var_command_side_stand_indicator()
{
	return command_side_stand_indicator;
}
void set_var_command_side_stand_indicator(int32_t value)
{
	command_side_stand_indicator = value;
}
int32_t get_var_command_speed()
{
	return command_speed;
}
void set_var_command_speed(int32_t value)
{
	command_speed = value;
}
const char *get_var_command_speed_text()
{
	return command_speed_text;
}
void set_var_command_speed_text(const char *value)
{
	strcpy(command_speed_text, value);
}
const char *get_var_command_trip_1()
{
	return command_trip_1;
}
void set_var_command_trip_1(const char *value)
{
	strcpy(command_trip_1, value);
}
const char *get_var_command_odometry()
{
	return command_odometry;
}
void set_var_command_odometry(const char *value)
{
	strcpy(command_odometry, value);
}
int32_t get_var_command_battery_level()
{
	return command_battery_level;
}
void set_var_command_battery_level(int32_t value)
{
	command_battery_level = value;
}
const char *get_var_command_battery_level_text()
{
	return command_battery_level_text;
}
void set_var_command_battery_level_text(const char *value)
{
	strcpy(command_battery_level_text, value);
}
const char *get_var_command_dte_text()
{
	return command_dte_text;
}
void set_var_command_dte_text(const char *value)
{
	strcpy(command_dte_text, value);
}
const char *get_var_command_battery_voltage_text()
{
	return command_battery_voltage_text;
}
void set_var_command_battery_voltage_text(const char *value)
{
	strcpy(command_battery_voltage_text, value);
}
const char *get_var_command_gear_status_text()
{
	return command_gear_status_text;
}
void set_var_command_gear_status_text(const char *value)
{
	strcpy(command_gear_status_text, value);
}
int32_t get_var_command_ampere()
{
	return command_ampere;
}
void set_var_command_ampere(int32_t value)
{
	command_ampere = value;
}
const char *get_var_command_ampere_text()
{
	return command_ampere_text;
}
void set_var_command_ampere_text(const char *value)
{
	strcpy(command_ampere_text, value);
}
const char *get_var_command_date()
{
	return command_date;
}
void set_var_command_date(const char *value)
{
	strcpy(command_date, value);
}
const char *get_var_command_time()
{
	return command_time;
}
void set_var_command_time(const char *value)
{
	strcpy(command_time, value);
}
