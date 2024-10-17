#ifndef LOWPASSFILTER_H
#define LOWPASSFILTER_H

#include <stdexcept>  // For exception handling

class LowPassFilter {
private:
    double alpha;      // Filter coefficient
    double prevOutput; // Previous output value

public:
    // Constructor with validation for alpha (must be between 0 and 1)
    LowPassFilter(double alpha);

    // Method to apply the low-pass filter on an input sample
    double filter(double input);

    // Reset the filter state (useful when processing a new signal)
    void reset();
};

#endif // LOWPASSFILTER_H
