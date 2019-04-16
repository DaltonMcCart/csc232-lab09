/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      HealthTrack.h
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 *            Dalton McCart <mccart42@live.missouristate.edu>
 */

#ifndef LAB09_HEALTHTRACKER_H
#define LAB09_HEALTHTRACKER_H

#include <iostream>

class HealthTracker {
private:
    double weight;
    double fatPercent;

public:
      /**
     * Initializing constructor.
     * @param theWeight
     * @param theFatPercent
     */
    HealthTracker(double theWeight, double theFatPercent);

    /**
     * Accessor for weight,
     * @return double, reads weight provided.
     */
    double getWeight() const;

    /**
     * Mutator for weight,
     * @param theWeight
     */
    void setWeight (double theWeight);


    /**
     * Accessor for fatPercent,
     * @return double, reads fatPercent provided.
     */
    double getFatPercent () const;

    /**
     * Mutator for fatPercent.
     * @param theFatPercent
     */
    void setFatPercent (double theFatPercent);


    friend std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker);
};


#endif //LAB09_HEALTHTRACKER_H
