#include <iostream>
#include <vector>
#include "LowPassFilter.h"

int main() {
    // Example usage
    std::vector<double> signal = { 1.0, 2.0, 1.5, 2.5, 3.0, 2.8, 2.2, 1.8, 2.0 }; // Example signal
    double alpha = 0.1; // Smoothing factor, between 0 and 1. Lower values for smoother signals.

    LowPassFilter lpf(alpha);

    std::vector<double> filteredSignal;
    for (double sample : signal) {
        filteredSignal.push_back(lpf.filter(sample));
    }

    // Output the filtered signal.
    for (double sample : filteredSignal) {
        std::cout << sample << " ";
    }
    std::cout << std::endl;

    return 0;
}
