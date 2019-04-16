/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      HealthTrack.h
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 *            TODO: Add your name and email address on this line
 */

#ifndef LAB09_HEALTHTRACKER_H
#define LAB09_HEALTHTRACKER_H

#include <iostream>

class HealthTracker {
private:
    // TODO: Add attributes

public:
    // TODO: Add initializing constructor, accessors and mutators

    friend std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker);
};

std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker) {
    // TODO: Insert health tracker data into os so that it prints out the following format:
    // Weight: 219.5, Fat Percent: 25.9%
    return os;
}

#endif //LAB09_HEALTHTRACKER_H
