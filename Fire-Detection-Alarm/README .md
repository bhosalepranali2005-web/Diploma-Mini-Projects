# Fire Detection Alarm System

## Description

The Fire Detection Alarm System is designed to detect fire or flame using a flame sensor and provide an immediate alert using a buzzer and LED indicator.

This system helps in early fire detection and can be used in homes, laboratories, and industrial environments to improve safety.

The flame sensor detects infrared light emitted by fire. When the sensor detects flame within its range, the Arduino processes the signal and activates the alarm system.

## Components Used

* Arduino UNO
* Flame Sensor Module
* Buzzer
* LED Indicator
* Resistors
* Connecting Wires
* Power Supply

## Working Principle

The flame sensor continuously monitors the environment for infrared radiation emitted by fire.

The Arduino reads the digital signal from the flame sensor.

If flame is detected:

* The buzzer turns ON
* The LED indicator lights up
* A warning message appears in the serial monitor

If no flame is detected, the alarm remains OFF.

## Applications

* Fire safety systems
* Industrial safety monitoring
* Home security systems
* Laboratory safety equipment

## Future Improvements

* Integration with GSM module to send SMS alerts
* IoT-based fire monitoring system
* Automatic fire suppression system

## Note

This project was developed as a hardware mini project during diploma studies. Circuit implementation may vary depending on available components.
