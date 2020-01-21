/*
    rainfall.cpp

    Rainfall report
*/
#include <iostream>
#include <vector>

int main() {
    // input hourly rainfall data
    vector<double> rainfall;
    double n;
    while (std::cin >> n) {
        rainfall.push_back(n);
    }

    //calculate average and heaviest rainfall
    double max = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        if (rainfall[i] > max)
            max = rainfall[i];
    }
    
    double total = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        total += rainfall[i];
    }
    double average = total / rainfall.size();

    // output rainfall report
    cout << "Average Hourly Rainfall: " << average << " hundreds of inches" << '\n';
    cout << "Heaviest Hourly Rainfall: " << max << " hundreds of inches" << '\n';
}
