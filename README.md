# MaRS-Task-1
MaRS task 1- EC25I2022

This repository includes the simulation and code for all the questions and the mini project for MaRS Task 1.

## Question-1
[Tinkercad simulation-Q1](https://www.tinkercad.com/things/63cSrGVwtIy-mars-question-1ec25i2022/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=JHuZ_9Q8U_Qgi91Tj3V2x_seAH8M0Xa4zSJzv40HkQE)

Code explanation:

The circuit simulation demonstrates independent blinking of three LEDs in different time intervals 500ms, 1000ms and 1500ms using the millis() function. The code uses independent timing mechanism for the three LEDs. The time intervals are stored in a variable - interval and then the time is tracked using millis() function and is stored in a variable-current and another variable-previous is used to store the last time the LED blinked. When the (current time passed) -(previous time it blinked) becomes greater than the interval then the current state changes that is from LOW to HIGH or HIGH to LOW. The use of millis() let's us operate the LEDs independently. Delay doesn't let the LEDs blink simultaneously since delay() blocks the entire loop.

Circuit explanation:

The circuit uses Arduino Uno R3 board to control all the electronic components using programming logic. Then the LEDs are connected to three different pins and are connected to resistors to limit current flow to protect LEDs from burning.And then the circuit is completed by connecting the other side to ground.

## Question-2
[Tinkercad simulation-Q2](https://www.tinkercad.com/things/6M2NQFIm6n8-mars-question-2ec25i2022/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=HEarIVdlxkexyREgVeB30WIAsI7TyXM5oun7SJAxRME)
