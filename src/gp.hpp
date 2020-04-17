// GP subclass for Doctor

#ifndef GP_H
#define GP_H

#include "doctor.hpp"

using namespace std;

class GP: public Doctor {

public:

    string get_specialty();
    
};

#endif // GP_H
