/*
    rainfall.cpp

    Rainfall report
*/

#include <iostream>
#include <vector>

// maximum data in the vector
double heaviest(const std::vector<double>& data) {

    auto max = data[0];
    for (int i = 1; i < data.size(); ++i) {
        if (data[i] > max)
            max = data[i];
    }

    return max;
}

int main() {

    // input hourly rainfall data
    std::vector<double> rainfall;
    double n;
    while (std::cin >> n) {
        rainfall.push_back(n);
    }

    // calculate heaviest rainfall
    auto max = heaviest(rainfall);

    // calculate average rainfall
    auto total = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        total += rainfall[i];
    }
    auto average = total / rainfall.size();

    // output rainfall report
    std::cout << "Average Hourly Rainfall: " << average << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << max << " hundreds of inches" << '\n';

    return 0;
}
