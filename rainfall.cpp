/*
 * rainfall.cpp
 *
 * Generates a report from rainfall data in ./rainfall.csv
 */

#include <iostream>
#include <vector>

int main() {

    // Get rainfall data from stdin
    std::vector<double> rainfall;
    double n;
    while (std::cin >> n) {
        rainfall.push_back(n);
    }

    // Calculate average rainfall
    double sum = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        sum += rainfall[i];
    }
    double average = sum / rainfall.size();

    // Calculate max rainfall
    double max = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        if (rainfall[i] > max)
            max = rainfall[i];
    }

    // Generate the report and send to stdout
    std::cout << "Average Hourly Rainfall: " << average << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << max << " hundreds of inches" << '\n';
}
