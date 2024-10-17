#include "LowPassFilter.h"
#include <cmath> // For isnan()

// Constructor: Initializes the filter and validates the alpha value
LowPassFilter::LowPassFilter(double alpha) : prevOutput(NAN) {
    if (alpha < 0.0 || alpha > 1.0) {
        throw std::invalid_argument("Alpha must be between 0 and 1.");
    }
    this->alpha = alpha;
}

// Method to process the input sample through the low-pass filter
double LowPassFilter::filter(double input) {
    if (std::isnan(prevOutput)) {  // First run
        prevOutput = input;
    }
    else {
        prevOutput = alpha * input + (1 - alpha) * prevOutput;
    }
    return prevOutput;
}

// Reset the filter state (clears previous output)
void LowPassFilter::reset() {
    prevOutput = NAN;
}
