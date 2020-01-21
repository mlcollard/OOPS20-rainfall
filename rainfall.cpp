/*
    rainfall.cpp

    Rainfall report
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>

int main() {
    // input hourly rainfall data
    std::vector<double> rainfall{std::istream_iterator<double>(std::cin), std::istream_iterator<double>()};

    //calculate heaviest rainfall
    auto max = *std::max_element(rainfall.begin(), rainfall.end());

    // calculate average rainfall
    auto average = std::accumulate(rainfall.begin(), rainfall.end(), 0.0) / rainfall.size();

    // output rainfall report
    std::cout << "Average Hourly Rainfall: " << average << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << max << " hundreds of inches" << '\n';
}
