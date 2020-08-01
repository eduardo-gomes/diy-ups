#include <stdint.h>
typedef int16_t DCcurrent_t;  //cA, A^-2 max = 327,67 A
typedef int16_t ACcurrent_t;  //mA, A^-3 max = 32,767 A

typedef int16_t DCvoltage_t;  //mV, V^-3 max = 32,767 V
typedef int16_t ACvoltage_t;  //mV, V^-2 max = 327,67 V

typedef int32_t ACpower_t;	//dVA, VA^-5 max = 21474,83647 VA
typedef int32_t DCpower_t;	//dVA, VA^-5 max = 21474,83647 VA

class battery {
	static const DCcurrent_t max_discharge_current, max_charge_current;
	static const DCvoltage_t float_voltage, min_voltage, full_voltage;
	DCcurrent_t current;
	DCvoltage_t voltage;

	float charge_percentage();
	DCvoltage_t want_input_voltage();
	DCpower_t calc_power_flow();
};

class charger {
	static const DCcurrent_t max_set_current;
	static const DCvoltage_t max_set_voltage, min_set_volage;
	DCcurrent_t out_current;
	//DCvoltage_t out_voltage; will use battery voltage sensor
	ACcurrent_t in_current;	 //Optional
	ACvoltage_t in_voltage;	 //Optional

	DCvoltage_t set_voltage(DCvoltage_t target, DCvoltage_t upper_limit);
	DCpower_t calc_output_power();
	ACpower_t calc_input_power();  //-1 means unavaliable
};

class inverter {
	static const DCcurrent_t max_in_current;
	static const ACcurrent_t max_out_current;

	bool active_output;

	DCcurrent_t in_current;
	ACcurrent_t out_current;  //Optional
	ACvoltage_t out_voltage;  //Optional

	void set_output(bool active);
	ACpower_t calc_output_power();	//-1 means unavaliable
};