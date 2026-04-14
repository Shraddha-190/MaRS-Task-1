# MaRS-Task-1
MaRS task 1- EC25I2022

This repository includes the simulation and code for all the questions and the mini project for MaRS Task 1.

## Question-1
[Tinkercad simulation-Q1](https://www.tinkercad.com/things/63cSrGVwtIy-mars-question-1ec25i2022/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=JHuZ_9Q8U_Qgi91Tj3V2x_seAH8M0Xa4zSJzv40HkQE)

Code explanation:

The circuit simulation demonstrates independent blinking of three LEDs in different time intervals 500ms, 1000ms and 1500ms using the millis() function. The code uses independent timing mechanism for the three LEDs. The time intervals are stored in a variable - interval and then the time is tracked using millis() function and is stored in a variable-current and another variable-previous is used to store the last time the LED blinked. When the (current time passed) -(previous time it blinked) becomes greater than the interval then the current state changes that is from LOW to HIGH or HIGH to LOW. The use of millis() let's us operate the LEDs independently. Delay doesn't let the LEDs blink simultaneously since delay() blocks the entire loop.

Circuit explanation:

The circuit uses Arduino Uno R3 board to control all the electronic components using programming logic. Then the LEDs are connected to three different digital pins and are connected to 220 ohm resistors to limit current flow to protect LEDs from burning.And then the circuit is completed by connecting the other side to ground.

## Question-2
[Tinkercad simulation-Q2](https://www.tinkercad.com/things/6M2NQFIm6n8-mars-question-2ec25i2022/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=HEarIVdlxkexyREgVeB30WIAsI7TyXM5oun7SJAxRME)

Code explanation:

The circuit demonstrates the use of potentiometer to control the blinking speed of an LED and the colour of a RGB LED. The potentiometer value is read using analogRead and the value is mapped to control the brightness of RGB using pwm signals. The mapping is required because potentiometer reads value from 0 to 1023 while pwm reads 0 to 255. The same value is mapped to adjust the blinking interval of the LED. As the value in potentiometer increases intensity of red increaes and green decreases while blue changes moderately. For the blinking of LED millis() is used for non-blocking execution.

Circuit explanation:

The circuit uses an Arduino Uno R3 board to control all the electronic components using programmed logic. A normal LED is connected such that its anode is connected to a digital pin and its cathode is connected to ground through a resistor to limit flow of current, ensuring safe operation.An RGB LED is also used, where its red, green, and blue pins are connected to PWM-enabled pins, here 9, 10, and 11 of the Arduino. Each of these connections includes a resistor to limit current. The common cathode of the RGB LED is connected to ground to complete the circuit.A potentiometer is connected with its two outer terminals to 5V and GND, and the middle terminal-wiper is connected to analog pin A0. This allows the Arduino to read varying voltage values from 0 to 5V which are then used to control both the color of the RGB LED and the blinking speed of the normal LED.

## Question-3
[Tinkercad simulation-Q3](https://www.tinkercad.com/things/7dwlGhEGco8-mars-question-3ec25i2022/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=g54fT8JDTm5X58G36VR0HYy0_VWqxrYtRkzG6mIuqQE)

Code explanation:

The circuit implements a reaction time tester using an LED and a pushbutton. The LED turns ON after a random delay, and the user is required to press the pushbutton as quickly as possible. The reaction time is then calculated and displayed as output.The pushbutton is configured using INPUT_PULLUP, which means it remains in a HIGH state by default and changes to LOW when pressed. The LED state is initially set to false and becomes true when the LED turns ON.A random delay is generated using random() along with randomSeed() to ensure that the delay is different each time the program runs.When the LED turns ON, the current time is recorded using millis(). When the button is pressed, the reaction time is calculated as the difference between the current time and the recorded start time.

Circuit explanation:

The circuit consists of an Arduino Uno to control all the elctronic components, an LED, and a pushbutton. The LED is connected to a digital pin through a 220 ohm resistor to limit current flow, with its cathode connected to ground. The pushbutton is connected to a digital pin using the INPUT_PULLUP configuration, where it remains HIGH by default and goes LOW when pressed. This setup allows the Arduino to detect button presses and control the LED for measuring reaction time.

## Mini Project- Gas leak detection system
[Tinkercad simulation](https://www.tinkercad.com/things/l8rssTgrY1t-gas-leak-detector-system-ec25i2022/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=cT1ZjITnBRn0W4BHDkCC5Egac6FW45axsprAVoytotU)

Working Principle:

This project is a gas leak detection system that uses a gas sensor to monitor the level of gas in the surroundings. The sensor continuously sends analog signals to the Arduino based on gas concentration. The Arduino compares this value with a preset threshold, and if the gas level exceeds the limit, it activates an LED and a buzzer to alert the user. If the gas level is normal, the system remains inactive.

Code explanation:

Initially, a threshold value for the gas level is defined. Communication between the Arduino and the computer is established using Serial.begin(). The gas sensor value is then continuously read using analogRead(). If the measured value exceeds the threshold, both the LED and buzzer are set to HIGH, providing visual and audio alerts. Otherwise, they remain LOW. The sensor readings are also displayed on the Serial Monitor for real-time monitoring.
Circuit explanation:

The circuit consists of an Arduino Uno connected to a gas sensor (simulated using a potentiometer), an LED with a current-limiting resistor, and a buzzer. The gas sensor’s output is connected to the analog pin A0, while its power pins are connected to 5V and GND. The LED is connected to digital pin 7 through a resistor, and the buzzer is connected to digital pin 8. All components share common power rails via the breadboard. The setup allows the Arduino to read gas levels and trigger the LED and buzzer when the gas concentration exceeds a safe limit

# Task 2-Counting the moving objects through an IR sensor and displaying on a lcd screen
## Circuit explanation

Connecting IR sensor one side to VCC and another to ground and the signal to digital pin. Then interfacing LCD with I2C and shorting its power supply. Making all connections through Breadboard.

##Code explanation

Importing wire.h module and LiquidCrystal_I2C.h module. Setting initial state of IR as HIGH denoting no object is present then reading the state of IR whenever it detects an object its state becomes LOW. When the previous state is HIGH and current state is LOW then count should increase. Else in initial state should go back to HIGH.
