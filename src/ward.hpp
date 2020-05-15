// File for the Ward class

#ifndef WARD_H
#define WARD_H

#include <vector>
#include <string>

#include "patient.hpp"

using namespace std;

class Ward
{
    
private:

    // The name of this ward
    string name;

    // The ID number of this ward
    const int id;

    // The number of beds in this ward
    const int num_beds;

    // A pointer to the head of an array containing either a pointer
    // to a Patient or nullptr if none is there
    Patient **patients;

    // The doctors that work in this ward
    vector<Doctor*> doctors;

public:

    Ward(string name, int id, int num_beds);

    // Getters
    string get_name();
    int get_id();
    int get_num_beds();
    vector<Patient*> get_patients();
    int get_num_patients();
    vector<Doctor*> get_doctors();
    int get_num_doctors();

    // Add the patient to the bed. Returns true if successful or False
    // if the arguments were improper or the bed was already full.
    bool add_patient(Patient *patient, int bed);

    // Remove the patient from the given bed. Returns true if the
    // patient was successfully removed, or false if the bed number
    // was invalid or the bed was empty
    bool rem_patient(int bed);

    // Add the doctor to this ward's list. Returns true if
    // successfully added, or false if the argument was null or was
    // already in the list
    bool add_doctor(Doctor *doctor);

    // Remove the given doctor from the ward's list. Returns true if
    // successfully removed, or false if the doctor was null or not in
    // the list
    bool rem_doctor(Doctor *doctor);

};

#endif // WARD_H
