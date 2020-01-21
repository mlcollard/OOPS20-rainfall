/*
    rainfall.cpp

    Rainfall report
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>

// maximum data in the vector
double heaviest(const std::vector<double>& data) {

    return *std::max_element(data.begin(), data.end());
}

// average of the vector
double avg(const std::vector<double>& data) {

    return std::accumulate(data.begin(), data.end(), 0.0) / data.size();
} 

int main() {
    // input hourly rainfall data
    std::vector<double> rainfall{std::istream_iterator<double>(std::cin), std::istream_iterator<double>()};

    //calculate heaviest rainfall
    auto max = heaviest(rainfall);

    // calculate average rainfall
    auto average = avg(rainfall);

    // output rainfall report
    std::cout << "Average Hourly Rainfall: " << average << " hundreds of inches" << '\n';
    std::cout << "Heaviest Hourly Rainfall: " << max << " hundreds of inches" << '\n';
}
