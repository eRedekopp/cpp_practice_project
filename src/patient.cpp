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

int get_id() {
    return id;
}

Ward get_ward() {
    return ward;
}

int get_bed() {
    return bed_id;
}

struct symptoms get_symptoms() {
	
}

