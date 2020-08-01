#include "objects.hpp"

float battery::charge_percentage() {
	//TODO Calc the charge percentage
}

DCvoltage_t battery::want_input_voltage() {
	//Calc input voltage to charge the battery within the charge current
}

DCpower_t battery::calc_power_flow() {
	return voltage * current;
}


DCvoltage_t charger::set_voltage(DCvoltage_t target, DCvoltage_t upper_limit){
	//Calc and set output voltage to avaliable voltage under limit closest to target
}

DCpower_t charger::calc_output_power(){
	//return out_current * //battery voltage
}

ACpower_t charger::calc_input_power(){
	if(in_voltage == -1 || in_voltage == -1) return -1;
	return in_current * in_voltage;
}


void inverter::set_output(bool active){
	active_output = active;
	//SET output
}
ACpower_t inverter::calc_output_power(){
	if (out_voltage == -1 || out_voltage == -1) return -1;
	return out_current * out_voltage;
}
DCpower_t inverter::calc_input_power(){
	//return in_current * //battery voltage
}
