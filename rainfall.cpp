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
    double m = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        total += rainfall[i];
        if (rainfall[i] > m)
            m = rainfall[i];
    }

    // output rainfall report
    std::cout << "Average Hourly Rainfall: " << (total / rainfall.size()) << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << m << " hundreds of inches" << '\n';

    return 0;
}
