#ifndef FILTERCONSTANTS_H
#define FILTERCONSTANTS_H

// Mathematical constants
#ifndef M_PI
#define M_PI 3.14159265358979323846  // Pi value
#endif

#ifndef TWO_PI
#define TWO_PI (2.0 * M_PI)  // Two times Pi
#endif

#ifndef HALF_PI
#define HALF_PI (M_PI / 2.0)  // Half of Pi
#endif

#ifndef DEG_TO_RAD
#define DEG_TO_RAD (M_PI / 180.0)  // Degrees to Radians conversion factor
#endif

#ifndef RAD_TO_DEG
#define RAD_TO_DEG (180.0 / M_PI)  // Radians to Degrees conversion factor
#endif

// Filter-related constants
constexpr double DEFAULT_SAMPLING_RATE = 44100.0;  // Standard audio sampling rate (44.1 kHz)
constexpr double DEFAULT_CUTOFF_FREQUENCY = 1000.0;  // Default cutoff frequency for filters (1 kHz)

// Frequency range limits (useful for setting limits in GUI sliders, etc.)
constexpr double MIN_CUTOFF_FREQUENCY = 20.0;  // Minimum audible frequency (20 Hz)
constexpr double MAX_CUTOFF_FREQUENCY = 20000.0;  // Maximum audible frequency (20 kHz)

// Nyquist frequency: half of the sampling rate (used for preventing aliasing)
inline double nyquistFrequency(double samplingRate) {
    return samplingRate / 2.0;
}

// Miscellaneous constants
constexpr double EPSILON = 1e-9;  // Small value for floating-point comparisons to avoid rounding errors

#endif // FILTERCONSTANTS_H
