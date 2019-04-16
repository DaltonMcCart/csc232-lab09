/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      Demo.cpp
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "HealthTracker.h"


int main(int argc, char* argv[]) {
    std::ifstream data{"input.dat"};
    if (!data) {
        std::cerr << "Error opening input.dat..." << std::endl;
        return EXIT_FAILURE;
    }

    double weight;
    double fatPercent;
    std::vector<HealthTracker> ht;

    while (data >> weight >> fatPercent) {
        ht.push_back(HealthTracker(weight, fatPercent));
    }

    data.close();
    for (int i = 0; i < ht.size(); i++) {
    std::cout << ht[i];
    }
    return EXIT_SUCCESS;
}
