# Gas Leakage Detection System

## Description

The Gas Leakage Detection System is designed to detect the presence of harmful or combustible gases in the environment.
It uses an MQ2 gas sensor to monitor gas concentration in the air and alerts users through a buzzer and LED when gas levels exceed a predefined threshold.

This system improves safety in homes, kitchens, laboratories, and industrial environments by providing early warning of gas leaks.

## Components Used

* Arduino UNO
* MQ2 Gas Sensor
* Buzzer
* LED Indicator
* Resistor
* Connecting Wires
* Power Supply

## Working Principle

The MQ2 gas sensor detects gases such as LPG, methane, and smoke. The sensor outputs an analog signal proportional to the gas concentration.

The Arduino reads the sensor value and compares it with a predefined threshold.

If the gas concentration exceeds the threshold:

* The buzzer is activated
* The LED turns ON
* A warning message is displayed through the serial monitor

If gas levels return to normal, the alarm is automatically turned OFF.

## Applications

* Kitchen gas leakage detection
* Industrial safety systems
* Laboratory gas monitoring
* Fire prevention systems

## Future Improvements

* Send SMS alerts using GSM module
* Integrate with IoT platforms for remote monitoring
* Automatic gas supply shut-off system

## Note

This project was developed as a hardware mini project during diploma studies. The exact circuit configuration may vary depending on the available components.
