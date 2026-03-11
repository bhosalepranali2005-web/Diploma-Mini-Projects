# Digital Temperature Monitoring System

## Description

The Digital Temperature Monitoring System measures the surrounding temperature using an LM35 temperature sensor and displays the temperature value on an LCD display.

The LM35 sensor provides an analog voltage output proportional to the temperature in Celsius. The Arduino reads this analog signal, converts it into a temperature value, and displays the result on the LCD.

This system is useful for real-time temperature monitoring in homes, laboratories, and industrial environments.

## Components Used

* Arduino UNO
* LM35 Temperature Sensor
* 16x2 LCD Display
* Potentiometer (for LCD contrast)
* Resistors
* Connecting Wires
* Power Supply

## Working Principle

The LM35 sensor senses the ambient temperature and produces an analog voltage output proportional to the temperature.

The Arduino performs the following steps:

1. Reads the analog signal from the LM35 sensor.
2. Converts the voltage into temperature in Celsius.
3. Displays the temperature value on the LCD screen.

The system continuously updates the temperature reading in real time.

## Applications

* Weather monitoring systems
* Industrial temperature monitoring
* Laboratory equipment monitoring
* Smart home automation systems

## Future Improvements

* Add IoT connectivity for remote monitoring
* Send alerts when temperature crosses a threshold
* Store temperature data for analysis

## Note

This project was developed as a hardware mini project during diploma studies. Circuit implementation may vary depending on available components.
