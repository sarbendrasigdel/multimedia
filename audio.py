import struct
import wave
import math

# Set up the audio parameters
num_channels = 1
sample_width = 2
sample_rate = 44100
duration = 1  # in seconds
frequency = 440  # in Hz

# Calculate the number of samples
num_samples = int(duration * sample_rate)

# Create a wave object
wave_obj = wave.open('sound.wav', 'w')
wave_obj.setnchannels(num_channels)
wave_obj.setsampwidth(sample_width)
wave_obj.setframerate(sample_rate)

# Generate a sine wave
for i in range(num_samples):
    value = int(32767.0 * math.sin(frequency * math.pi * float(i) / float(sample_rate)))
    data = struct.pack('<h', value)
    wave_obj.writeframesraw(data)

# Close the wave object
wave_obj.close()
