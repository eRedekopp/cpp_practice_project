// The surgeon subclass of Doctor

#ifndef SURGEON_H
#define SURGEON_H

#include "doctor.hpp"

using namespace std;

class Surgeon: public Doctor {

public:

    string get_specialty();
    
};

#endif // SURGEON_H
