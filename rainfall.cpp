/*
 * rainfall.cpp
 *
 * Generates a report from rainfall data in ./rainfall.csv
 */

#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

/**
 * Finds the maximum value from a list of numbers.
 * @param data Container of data to find the maximum of
 */
double maximum(const std::vector<double>& data) {
    return *std::max_element(data.begin(), data.end());
}

/**
 * Calcuates the arithmetic mean of some data.
 * @param data Container of data to calculate the mean of
 */
double mean(const std::vector<double>& data) {
    return std::accumulate(data.begin(), data.end(), 0.0) / data.size();
}

int main() {

    // Get rainfall data from stdin
    std::vector<double> rainfall {std::istream_iterator<double>(std::cin), std::istream_iterator<double>()};

    // Generate the report and send to stdout
    std::cout << "Average Hourly Rainfall: " << mean(rainfall) << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << maximum(rainfall) << " hundreds of inches" << '\n';
}
