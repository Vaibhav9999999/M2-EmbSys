# BIDIRECTIONAL VISITOR COUNTER AND FIRE ALARMING SYSTEM


# Abstract 

Many times we need to monitor the person/people visiting some place like Seminar hall, conference room or Shopping mall or temple. This project can be used to count and display the number of visitors entering inside any conference room or seminar hall. This is a bidirectional counter which means it works in a two way. That means counter will be incremented if person enters the room and will be decremented if a person leaves the room. LCD displays this value which is placed outside the room and Led will automatically switch on or off depending on the situation.

This system is helpful for counting the number of people in an auditorium or halls for seminar to avoid congestion. Moreover it can also be used to check the number of people who have come to an event or a museum to watch a certain exhibit. Microcontroller is a reliable circuit that takes over the task of counting the number of persons/ visitors in the room very accurately. We will be showing bothe In count i.e. number of people entering the room and Out count i.e. number of people exiting the room on a 16x2 Alphanumeric LCD. An IR sensor is used to monitor the person entering and exiting the room.

The Arduino does the above job. It receives the signals from the sensors, and this signal is operated under the control of software which is stored in ROM. Arduino UNO continuously monitor the Infrared Receivers. When any object pass through the IR Receiver's then the IR Rays falling on the receiver are obstructed, this obstruction is sensed by the Arduino.

Here we also using an analog sensor i.e temprature sensor/Potentiometer so that we can keep a check on fire in the room or buildings.

Whenever a single person is entering in a room a LED will automatically turned on and remain on untill there is no one in the room.


#  Components

1) Push buttons/ IR Sensors

A push button switch controls an action in a machine or other type of process. They are common features within the home and workplace, and are also referred to as pushbutton switches or push switches.

The buttons are typically made from plastic or metal and the push button may either be flat or customised to ergonomic specifications. There is a wide variety of button switch models, which are powered either by momentary or latching action.
Here we are using push buttons as a door sensor or two IR Sensors.


2) Potentiometer/Temprature sensor

A potentiometer is a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider.If only two terminals are used, one end and the wiper, it acts as a variable resistor or rheostat.
The measuring instrument called a potentiometer is essentially a voltage divider used for measuring electric potential (voltage); the component is an implementation of the same principle, hence its name.
A temperature sensor is a device used to measure temperature. This can be air temperature, liquid temperature or the temperature of solid matter. There are different types of temperature sensors available and they each use different technologies and principles to take the temperature measurement.
It is an analog sensor.


3)  Arduino

Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online. You can tell your board what to do by sending a set of instructions to the microcontroller on the board. To do so you use the Arduino programming language (based on Wiring), and the Arduino Software (IDE), based on Processing.

Over the years Arduino has been the brain of thousands of projects, from everyday objects to complex scientific instruments. A worldwide community of makers - students, hobbyists, artists, programmers, and professionals - has gathered around this open-source platform, their contributions have added up to an incredible amount of accessible knowledge that can be of great help to novices and experts alike.


4) Power supply

A power supply is an electrical device that supplies electric power to an electrical load. The main purpose of a power supply is to convert electric current from a source to the correct voltage, current, and frequency to power the load. As a result, power supplies are sometimes referred to as electric power converters. Some power supplies are separate standalone pieces of equipment, while others are built into the load appliances that they power.

5) Relays

A relay is an electrically operated switch. It consists of a set of input terminals for a single or multiple control signals, and a set of operating contact terminals. The switch may have any number of contacts in multiple contact forms, such as make contacts, break contacts, or combinations thereof.

Relays are used where it is necessary to control a circuit by an independent low-power signal, or where several circuits must be controlled by one signal. Relays were first used in long-distance telegraph circuits as signal repeaters: they refresh the signal coming in from one circuit by transmitting it on another circuit. Relays were used extensively in telephone exchanges and early computers to perform logical operations.
In this project two relays has been used one for controlling Led and one for buzzer.

6) LED 

A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons. The color of the light (corresponding to the energy of the photons) is determined by the energy required for electrons to cross the band gap of the semiconductor.[5] White light is obtained by using multiple semiconductors or a layer of light-emitting phosphor on the semiconductor device.

7) LCD 

A liquid-crystal display (LCD) is a flat-panel display or other electronically modulated optical device that uses the light-modulating properties of liquid crystals combined with polarizers. Liquid crystals do not emit light directly,[1] instead using a backlight or reflector to produce images in color or monochrome.

8) Buzzer

A buzzer or beeper is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers and beepers include alarm devices, timers, and confirmation of user input such as a mouse click or keystroke.


# Applications

* Offices.
* Public Places
* Restrooms at railway stations.
* Buildings , Malls