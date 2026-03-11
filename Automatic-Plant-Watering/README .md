# Automatic Plant Watering System

## Description

The Automatic Plant Watering System is an embedded project that automatically waters plants when the soil becomes dry.
It uses a soil moisture sensor to detect the moisture level in the soil and activates a water pump when the soil moisture drops below a defined threshold.

This system helps maintain proper soil moisture without manual watering and is useful for home gardens and agricultural applications.

## Components Used

* Arduino UNO
* Soil Moisture Sensor
* Relay Module
* Water Pump
* Connecting Wires
* Power Supply

## Working Principle

The soil moisture sensor continuously measures the moisture level of the soil.
When the soil becomes dry, the sensor sends a signal to the Arduino.

If the moisture value is below the preset threshold:

* Arduino activates the relay
* The relay turns ON the water pump
* Water is supplied to the plant

When the soil becomes sufficiently wet, the pump automatically turns OFF.

## Applications

* Smart agriculture
* Home gardening automation
* Greenhouse irrigation systems
* Water conservation systems

## Future Improvements

* Integration with IoT for remote monitoring
* Mobile application for irrigation control
* Solar-powered irrigation system
