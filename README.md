# MaRS-Task-1
MaRS task 1- EC25I2022

This repository includes the simulation and code for all the questions and the mini project for MaRS Task 1.

## Question-1
[Tinkercad simulation-Q1](https://www.tinkercad.com/things/63cSrGVwtIy-mars-question-1ec25i2022/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=JHuZ_9Q8U_Qgi91Tj3V2x_seAH8M0Xa4zSJzv40HkQE)

Code explanation:

The circuit simulation demonstrates independent blinking of three LEDs in different time intervals 500ms, 1000ms and 1500ms using the millis() function. The code uses independent timing mechanism for the three LEDs. The time intervals are stored in a variable - interval and then the time is tracked using millis() function and is stored in a variable-current and another variable-previous is used to store the last time the LED blinked. When the (current time passed) -(previous time it blinked) becomes greater than the interval then the current state changes that is from LOW to HIGH or HIGH to LOW. The use of millis() let's us operate the LEDs independently. Delay doesn't let the LEDs blink simultaneously since delay() blocks the entire loop.

Circuit explanation:

The circuit uses Arduino Uno R3 board to control all the electronic components using programming logic. Then the LEDs are connected to three different digital pins and are connected to resistors to limit current flow to protect LEDs from burning.And then the circuit is completed by connecting the other side to ground.

## Question-2
[Tinkercad simulation-Q2](https://www.tinkercad.com/things/6M2NQFIm6n8-mars-question-2ec25i2022/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=HEarIVdlxkexyREgVeB30WIAsI7TyXM5oun7SJAxRME)

Code explanation:

The circuit demonstrates the use of potentiometer to control the blinking speed of an LED and the colour of a RGB LED. The potentiometer value is read using analogRead and the value is mapped to control the brightness of RGB using pwm signals. The mapping is required because potentiometer reads value from 0 to 1023 while pwm reads 0 to 255. The same value is mapped to adjust the blinking interval of the LED. As the value in potentiometer increases intensity of red increaes and green decreases while blue changes moderately. For the blinking of LED millis() is used for non-blocking execution.

Circuit explanation:

The circuit uses an Arduino Uno R3 board to control all the electronic components using programmed logic. A normal LED is connected such that its anode is connected to a digital pin and its cathode is connected to ground through a resistor to limit flow of current, ensuring safe operation.An RGB LED is also used, where its red, green, and blue pins are connected to PWM-enabled pins, here 9, 10, and 11 of the Arduino. Each of these connections includes a resistor to limit current. The common cathode of the RGB LED is connected to ground to complete the circuit.A potentiometer is connected with its two outer terminals to 5V and GND, and the middle terminal-wiper is connected to analog pin A0. This allows the Arduino to read varying voltage values from 0 to 5V which are then used to control both the color of the RGB LED and the blinking speed of the normal LED.
