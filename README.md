# Arduino_2_Raspi
This repository aims to aid those who would like to connect an Arduino uno and a Raspberry pi 3 via serial communication the harder way ;).

## Concept 
The purpose of the project is to be able use the GPIO pins of raspi (3.3V tolerant)to perform serial communication with an Arduino uno which runs at a higher voltage (5V). The most widely advised solution is to use a logic level shifter but this is not a cheap way. The method used for the project was to make a Voltage divider circuit with simpl and chep resistors to bring down the votage from the Arduino Tx line.

### Serial Comm
A short note on Serial Communication. In this type of comm there exists a total of 3 ports the transimmision (Tx) , the recieving(rx) and ground. Its is important to know the baurate of the serial comm so that it can be monitored in the serial monitor of Arduino. This rate can be set.

### Physical circuitry
The solution I had come up with was inspired link [from Oscar Liang](https://oscarliang.com/raspberry-pi-and-arduino-connected-serial-gpio/). This article discusses other techniques too and I strongly recommend reading it.

![](images/live.jpg?raw=true)

For a more clear understanding the fritzing diagram form the link mentioned earlier.

![](images/ardu2raspi.png?raw=true)

Once you run the programs on the arduino and raspi after correctly connecting the ports, one can monitor it via the serial monitpr provided by arduino through another computer, example of how it will look.

![](images/sample_function.png?raw=true)

## Installation and Usage

- First clone the repo in both your system and Raspberry pi
- Compile upload the arduino code into the arduino uno.
- ensure the connections are done properly
- open the serial monitor.
- run the python code from the Raspberry Pi

P.S : ensure in Raspi config the serial communication is enabled.
