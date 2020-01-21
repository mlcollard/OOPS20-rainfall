/*
 * rainfall.cpp
 *
 * Generates a report from rainfall data in ./rainfall.csv
 */

#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

int main() {

    // Get rainfall data from stdin
    std::vector<double> rainfall {std::istream_iterator<double>(std::cin), std::istream_iterator<double>()};

    // Calculate necessary statistics
    double mean = std::accumulate(rainfall.begin(), rainfall.end(), 0.0) / rainfall.size();
    double maximum = *std::max_element(rainfall.begin(), rainfall.end());

    // Generate the report and send to stdout
    std::cout << "Average Hourly Rainfall: " << mean << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << maximum << " hundreds of inches" << '\n';
}
