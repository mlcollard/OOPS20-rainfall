/*
    rainfall.cpp

    Rainfall report
*/

#include <iostream>
#include <vector>

int main() {

    // input hourly rainfall data
    std::vector<double> rainfall;
    double n;
    while (std::cin >> n) {
        rainfall.push_back(n);
    }

    // calculate average and heaviest rainfall
    double total = rainfall[0];
    double max = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        total += rainfall[i];
        if (rainfall[i] > max)
            max = rainfall[i];
    }
    double average = total / rainfall.size();

    // output rainfall report
    std::cout << "Average Hourly Rainfall: " << average << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << max << " hundreds of inches" << '\n';

    return 0;
}
