// to integrate for task 3

// DOWNSAMPLING
// every second sample kept
if(sampleIndex % 2 == 0)
{
// 10-bit becomes 8-bit with divide by 4
    transmitSample(sample >> 2);
}

// OUTLIER REJECTION - removes the spikes, noise
if(abs(sample - mean) > threshold)
{
    sample = mean;
}
