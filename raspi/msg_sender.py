import serial

# defining the port to be opened
ser = serial.Serial(port="/dev/serial0",baudrate=9600)

# Closing for safety
ser.close()

# The core logic to send a msg.
ser.open()
if ser.isOpen():
    print("Serial port opened")
    ser.write("Hello arduino from raspi\n".encode('utf-8'))
ser.close()

