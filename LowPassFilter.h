#ifndef LOW_PASS_FILTER_H
#define LOW_PASS_FILTER_H

class LowPassFilter {
public:
    LowPassFilter(double alpha);

    double filter(double input);

private:
    double alpha;       // Determines the weight of the current input signal relative to the previous output.
    double prevOutput;  // Stores the previous output.
    bool firstRun;      // Flag to determine when it is the first run of the filter or not.
};

#endif // LOW_PASS_FILTER_H
