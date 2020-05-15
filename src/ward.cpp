
#include "ward.hpp"

Ward::Ward(string the_name, int the_id, int the_num_beds)
    : id(the_id), num_beds(the_num_beds)
{
    name = the_name;
    patients = new Patient*[num_beds];
}

string Ward::get_name()
{
    return name;
}

int Ward::get_id()
{
    return id;
}

int Ward::get_num_beds()
{
    return num_beds;
}

vector<Patient*> Ward::get_patients()
{
    vector<Patient*> out;
    for (int i = 0; i < num_beds; i++) {
	if (patients[i] != nullptr)
	    out.push_back(patients[i]);
    }
    return out;
}

int Ward::get_num_patients()
{
    int count = 0;
    for (int i = 0; i < num_beds; i++) {
	if (patients[i] != nullptr)
	    count++;
    }
    return count;
}

vector<Doctor*> Ward::get_doctors()
{
    return doctors;
}

int Ward::get_num_doctors()
{
    return doctors.size();
}

bool Ward::add_patient(Patient *patient, int bed)
{
    if (patients[bed] == nullptr) {
	patients[bed] = patient;
	return true;
    } else {
	return false;
    }
}

bool Ward::rem_patient(int bed)
{
    if (patients[bed] != nullptr) {
	patients[bed] = nullptr;
	return true;
    } else {
	return false;
    }
}

bool Ward::add_doctor(Doctor *doctor)
{
    doctors.push_back(doctor);
}

bool Ward::rem_doctor(Doctor *doctor)
{
    vector<Doctor*>::iterator iter = doctors.begin();
    while (*iter != doctor)
	if (iter == doctors.end())
	    return false;
	else
	    advance(iter, 1);
    doctors.erase(iter);
    return true;
}
