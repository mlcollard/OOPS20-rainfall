/*
 * rainfall.cpp
 *
 * Generates a report from rainfall data in ./rainfall.csv
 */

#include <iostream>
#include <vector>

/**
 * Finds the maximum value from a list of numbers.
 * @param data Container of data to find the maximum of
 */
double maximum(const std::vector<double>& data) {
    auto max = data[0];
    for (int i = 1; i < data.size(); ++i) {
        if (data[i] > max)
            max = data[i];
    }
    return max;
}

/**
 * Calcuates the arithmetic mean of some data.
 * @param data Container of data to calculate the mean of
 */
double mean(const std::vector<double>& data) {
    auto sum = data[0];
    for (int i = 1; i < data.size(); ++i) {
        sum += data[i];
    }
    return sum / data.size();
}

int main() {

    // Get rainfall data from stdin
    std::vector<double> rainfall;
    double n;
    while (std::cin >> n) {
        rainfall.push_back(n);
    }

    // Generate the report and send to stdout
    std::cout << "Average Hourly Rainfall: " << mean(rainfall) << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << maximum(rainfall) << " hundreds of inches" << '\n';
}
