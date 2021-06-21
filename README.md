# Robotic-arm-task-I
Welcome to the **Robotic-arm-task-I**, In this repository I'm required to design an electronical model of a **multi-servo motors** and control it so it moves to a certain angle let's say 90 degree for example and return back to its initial angle.

I have used Tinker CAD to simulate the model and you can check for the website link at the end of this text.
Let me explain shortly what I have done through this project. I have connected all the six servo motors with power and ground connection
(red and black wires) coming from Arduino card +5V and GND ports, and each motor has its unique signal connection with Arduino board (from portpin7 to 12)(orange colored wire of each motor). Then, I have coded it such that all the motors move to 90 degrees then wait for a specific amout of time (in milli seconds) and come back repeatedly after running the code. 

Let me introduce all the **attachments** in this repository. There are several files with the following extensions
**rbd** file, which is a simulation file from Tinker CAD simulation website.
**ino** file, which is an Arduino code to control all servo motors.
and there are two **PNG** files to show the simulation before and after running the simulation and the code.

If you are working on this in real life please check for the connection of each element carefully before running for the safety of you and your tools.


[TinkerCAD link](https://www.tinkercad.com/things/c5ImFFamxAI-multi-servo-motors-without-potentiometers/editel?sharecode=1p97PdqWP9d7-7FAVfQ3gKn8-BON8Lze1BickurtIwk)
