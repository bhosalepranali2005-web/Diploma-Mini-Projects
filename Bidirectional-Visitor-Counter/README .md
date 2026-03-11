# Bidirectional Visitor Counter

## Description

The Bidirectional Visitor Counter is an embedded system that counts the number of people entering and exiting a room through a single door. The system uses two IR sensors placed near the doorway to detect movement direction and updates the total count accordingly.

The current number of people inside the room is displayed on an LCD screen.

This system is useful for monitoring occupancy in classrooms, offices, libraries, and shopping malls.

## Components Used

* Arduino UNO
* IR Sensors (2)
* 16x2 LCD Display
* Resistors
* Connecting Wires
* Power Supply

## Working Principle

Two IR sensors are placed near the doorway.

The system works as follows:

1. When **Sensor 1 triggers first and then Sensor 2**, a person is **entering** → count increases.
2. When **Sensor 2 triggers first and then Sensor 1**, a person is **exiting** → count decreases.
3. Arduino processes the sequence of signals.
4. The current number of people inside the room is displayed on the LCD.

This allows accurate tracking of room occupancy.

## Applications

* Classroom occupancy monitoring
* Shopping mall visitor counting
* Office entry monitoring
* Smart building management

## Future Improvements

* IoT-based visitor analytics
* Cloud-based occupancy dashboard
* Automatic light control based on occupancy

## Note

This project was implemented as a hardware mini project during diploma studies. Sensor placement and calibration may vary depending on the door setup.
