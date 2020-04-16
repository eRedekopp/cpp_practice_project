// Class for a patient

#include <vector>
#include <string>
#include "doctor.hpp"
#include "patient.hpp"
#include "ward.hpp"

using namespace std;


string Patient::get_name() {
    return name;
}

int Patient::get_id() {
    return id;
}

int Patient::get_ward() {
    return ward;
}

int Patient::get_bed() {
    return bed_id;
}

struct symptoms Patient::get_symptoms() {
    return {};
}

