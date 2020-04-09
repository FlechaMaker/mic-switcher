import serial
import sys
import subprocess



if __name__ == "__main__":
    print(sys.argv[1])
    ser = serial.Serial(sys.argv[1], 115200)
    prev = int(ser.read()[0])
    subprocess.call(['osascript', '-e', 'set volume output volume 0'])
    while True:
        sw = int(ser.read()[0])
        if sw != prev:
            if sw == 0:
                subprocess.call(['osascript', '-e', 'set volume input volume 100'])
                print(100)
            else:
                subprocess.call(['osascript', '-e', 'set volume input volume 0'])
                print(0)
        prev = sw

