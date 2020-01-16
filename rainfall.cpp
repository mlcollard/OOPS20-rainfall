/*
    rainfall.cpp

    Rainfall report
*/

#include <iostream>
#include <vector>

int main() {

    // input hourly rainfall data
    std::vector<float> rainfall;
    float t;
    float m;
    float n;
    while (std::cin >> n) {
        rainfall.push_back(n);
    }

    // calculate average and heaviest rainfall
    t = rainfall[0];
    m = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        t += rainfall[i];
        if (rainfall[i] > m)
            m = rainfall[i];
    }

    // output rainfall report
    std::cout << "Average Hourly Rainfall: " << (t / rainfall.size()) << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << m << " hundreds of inches" << '\n';

    return 0;
}
