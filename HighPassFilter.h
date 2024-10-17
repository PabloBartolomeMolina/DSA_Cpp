#ifndef HIGHPASSFILTER_H
#define HIGHPASSFILTER_H

#include "Constants.h"

class HighPassFilter {
private:
    double alpha;    // Filter coefficient
    double prevInput;   // Previous input value (x[n-1])
    double prevOutput;  // Previous output value (y[n-1])

public:
    // Constructor that initializes the filter with a given cutoff frequency and sampling rate
    HighPassFilter(double cutoffFrequency, double samplingRate);

    // Method to apply the filter to an input signal sample
    double process(double inputSample);

    // Reset the filter states (useful if you are processing a new signal)
    void reset();
};

#endif // HIGHPASSFILTER_H
