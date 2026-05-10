import serial
import wave
import numpy as np

SAMPLE_RATE = 8000
RECORD_SECONDS = 5

ser = serial.Serial('COM3', 115200)
num_samples = SAMPLE_RATE * RECORD_SECONDS
data = np.zeros(num_samples, dtype=np.uint8)

for i in range(num_samples):
    audio = ser.read(1)
    data[i] = audio[0]

with wave.open("audio.wav", 'wb') as wf:
    wf.setnchannels(1)
    wf.setsampwidth(1)
    wf.setframerate(SAMPLE_RATE)
    wf.writeframes(data.tobytes())

print("Finished recording")
