// File for the Ward class

#ifndef WARD_H
#define WARD_H

#include <vector>
#include <string>

using namespace std;

class Ward {
    
private:

    // The name of this ward
    string name;

    // The ID number of this ward. This never changes after the ward is created
    int id;

public:

    int get_id();
};

#endif // WARD_H
