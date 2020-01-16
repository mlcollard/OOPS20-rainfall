/*
 * rainfall.cpp
 *
 * Generates a report from rainfall data in ./rainfall.csv
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<float> rainfall;
    float t;
    float m;
    float n;

    // Get rainfall data from stdin
    while (std::cin >> n) {
        rainfall.push_back(n);
    }

    // Calculate average and heaviest rainfall
    t = rainfall[0];
    m = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        t += rainfall[i];
        if (rainfall[i] > m)
            m = rainfall[i];
    }

    // Generate the report and send to stdout
    std::cout << "Average Hourly Rainfall: " << (t / rainfall.size()) << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << m << " hundreds of inches" << '\n';
}
