#include "HighPassFilter.h"
#include <cmath>

// Constructor: Calculates the alpha value based on the cutoff frequency and sampling rate
HighPassFilter::HighPassFilter(double cutoffFrequency, double samplingRate)
    : prevInput(0.0), prevOutput(0.0) {
    double dt = 1.0 / samplingRate;
    double rc = 1.0 / (TWO_PI * cutoffFrequency);
    alpha = rc / (rc + dt);
}

// Process the input sample through the high-pass filter
double HighPassFilter::process(double inputSample) {
    double outputSample = alpha * (prevOutput + inputSample - prevInput);
    prevInput = inputSample;
    prevOutput = outputSample;
    return outputSample;
}

// Reset the filter state
void HighPassFilter::reset() {
    prevInput = 0.0;
    prevOutput = 0.0;
}
