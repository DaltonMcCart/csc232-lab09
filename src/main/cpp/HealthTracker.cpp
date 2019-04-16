/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      HealthTrack.cpp
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 *            Dalton McCart <mccart42@live.missouristate.du>
 */

#include "HealthTracker.h"

HealthTracker::HealthTracker (double theWeight, double theFatPercent):weight{theWeight}, fatPercent{theFatPercent}{}

double HealthTracker::getWeight() const{
    return 0;

}

void HealthTracker::setWeight (double theWeight){


}

double HealthTracker::getFatPercent () const{
    return 0;

}

void HealthTracker::setFatPercent (double theFatPercent){


}

std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker) {
    // Weight: 219.5, Fat Percent: 25.9%
    os << "Weight: " << healthTracker.weight << ", Fat Percent: " << healthTracker.fatPercent << "%" <<std::endl;
    return os;
}