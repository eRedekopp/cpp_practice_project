// Doctor header file

#ifndef DOCTOR_H
#define DOCTOR_H

#include <vector>
#include <string>
#include "patient.hpp"

using namespace std;


class Doctor
{
    
private:

    // The doctor's name
    string name;

    // The doctor's ID number
    const int id;

    // The IDs of the ward that this doctor works in
    vector<int> wards;

    // The IDs of this doctor's patients
    vector<int> patients;

public:

    Doctor(string name, int id);

    // Getters for private fields
    string get_name();
    int get_id();
    vector<int> get_wards();
    vector<int> get_patients();

    // Setters for private fields
    void set_name(string name);

    // Add a ward to this doctor's list by ID, or do nothing if it is
    // already in the list
    //
    // Returns true if the ward was successfully added, or false if it
    // was already in the list
    bool add_ward(int ward_id);

    // Remove a ward from this doctor's list by ID, or do nothing if
    // it is not in the list
    //
    // Returns true if the ward was successfully removed, or false if
    // it was not in the list
    bool rem_ward(int ward_id);

    // Add a patient to this doctor's list by ID, or do nothing if the
    // patient is already in the list
    //
    // Returns true if the patient was successfully added, or false if
    // they were already in the list
    bool add_patient(int patient_id);

    // Remove a patient from this doctor's list by ID, or do nothing
    // if they are not in the list
    //
    // Returns true if the patient was successfully removed, or false
    // if they were not found in the list.
    bool rem_patient(int patient_id);

    // Get this doctor's specialty. This must be implemented by subclasses
    virtual string get_specialty();

};

#endif // DOCTOR_H
