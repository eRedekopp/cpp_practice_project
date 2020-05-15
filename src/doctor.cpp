#include "doctor.hpp"

bool remove(vector<int>*, int);

Doctor::Doctor(string the_name, int the_id)
    : id(the_id)
{
    name = the_name;
}

string Doctor::get_name()
{
    return name;
}

int Doctor::get_id()
{
    return id;
}

vector <int> Doctor::get_wards()
{
    // This is safe because vectors are passed by value in c++
    return wards;
}

vector <int> Doctor::get_patients()
{
    return patients;
}

void Doctor::set_name(string the_name)
{
    name = the_name;
}

bool Doctor::add_ward(int ward_id)
{
    wards.push_back(ward_id);
    return true;
}

bool Doctor::rem_ward(int ward_id)
{
    return remove(&wards, ward_id);
}

bool Doctor::add_patient(int patient_id)
{
    wards.push_back(patient_id);
    return true;
}

bool Doctor::rem_patient(int patient_id)
{
    return remove(&patients, patient_id);
}

bool remove(vector<int> *v, int e)
{
    vector<int>::iterator iter = v->begin();
    while (*iter != e)
	if (iter == v->end())
	    return false;
	else
	    advance(iter, 1);
    
    v->erase(iter);
    return true;
}
