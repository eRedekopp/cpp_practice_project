// Header file for patient class, and some related structs and macros

#ifndef PATIENT_H
#define PATIENT_H

#include <vector>
#include <string>

#include "ward.hpp"
#include "doctor.hpp"

using namespace std;

// A structure to describe a patient's symptoms and other information
// about their health's current state.
struct symptoms {

    // The patient's symptoms
    vector<string> symptoms;

    // The patient's temperature from the most recent time it was
    // checked
    float temp;

    // The patient's heart rate from the most recent time it was
    // checked
    float heart_rate;
};

// A structure representing a single patient in the hospital
class Patient {

private:

    // The patient's name
    string name;

    // The patient's integer ID number
    const int id;

    // The ID of the ward in which this patient is staying
    int ward;

    // The patient's bed number
    int bed_id;

    // The patient's symptoms
    struct symptoms symptoms;

    // The IDs of the doctors responsible for this patient's treatment
    vector<int> doctors;
    
    
public:

    // Getters for private fields
    string get_name();
    int get_id();
    int get_ward();
    int get_bed();
    struct symptoms get_symptoms();

    // Getters for symptoms
    vector<string> get_symptom_descrs();
    float get_temp();
    float get_hr();

    // Setters for private fields
    void set_name(string name);
    void set_ward(Ward ward);
    void set_bed(int bed);
    
    // Setters for symptoms
    void set_temp(float temp);
    void set_hr(float hr);

    // Add a string description of a symptom to this patient's list
    // or do nothing if the symptom is already in the list
    //
    // Returns true if it was added, or false if it was already in the list
    bool add_symptom(string symptom);

    // Remove the given string symptom description from the list, or do
    // nothing if the symptom was not in the list
    //
    // Returns true if it was successfully removed, or false if it was
    // not in the list
    bool rem_symptom(string symptom);

    // Add a doctor by ID to the patient's list, or do nothing if the
    // doctor was already in the list
    //
    // Returns true if the doctor was successfully added or false if
    // it was already in the list
    bool add_doctor(int doc_id);

    // Remove a doctor from the patient's list by ID.
    //
    // Returns true if the doctor was successfully removed or false if
    // the ID was not in the list
    bool rem_doctor(int doc_id);
};

#endif // PATIENT_H
