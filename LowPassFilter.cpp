#include "LowPassFilter.h"

LowPassFilter::LowPassFilter(double alpha) : alpha(alpha), prevOutput(0), firstRun(true) {}

double LowPassFilter::filter(double input) {
    if (firstRun) {
        prevOutput = input;
        firstRun = false;
    }
    else {
        prevOutput = alpha * input + (1 - alpha) * prevOutput;
    }
    return prevOutput;
}
