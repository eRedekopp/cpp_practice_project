# Design

## About

The purpose of this project is to learn the basics of c++, and to use good practices while writing it.
This project will be thoroughly designed before writing any code.
Features will be added in git branches and only merged into master when complete.
Time will be tracked as accurately as reasonably possible.
Unit tests will be implemented for all applicable functions, and run automatically in the Makefile for each file after each 
time the file is recompiled.

This project implements a fake hospital management software system, with basic features for storing information about doctors
and patients.

## Features

The hospital system can manage multiple wards, each of which having a number of beds 
which may or may not be occupied by a patient. Each patient may have one or more doctors.
See the menu descriptions below to see the information stored for doctors, patients, and wards

## Menu

The UI will be implemented as a simple text-based main menu with 10 options, described below. 

#### Main Menu

1. Query doctor information
2. Query patient information
3. View bed assignments
4. Patient data analysis
5. Add/Remove Patient
6. Add/Remove doctor
7. Add ward
8. Change ward
9. Save
10. Load

#### Query Doctor Information

Enter a doctor's ID number, or 'list' to list all doctors in this ward, or 'exit' to go back to the main menu

Upon entering doctor's ID number:

- Name
- ID #
- Wards
- Specialization
- Patients

#### Query patient information

Enter a patient's ID number, or 'list' to list all patients in this ward, or 'exit' to go back to the main menu

Upon entering a patient's ID number:

- Name
- ID #
- Ward
- Bed #
- Symptoms
- Heart rate
- Diagnosis
- Doctors

'list' does the same as 'view bed assignments'

#### View Bed Assignments

Bed N | <ID #> : Firstname Lastname

#### Patient data analysis

For each ward: 
  - % capacity remaining
  - symptoms, sorted by frequency
  - average resting heart rate
  - busiest doctors
  
Compare wards by heart rate, capacity remaining, and patients per doctor

#### Add/Remove Patient

1. Add a patient
2. Remove a patient

- 1: enter the patient's information (see query patient information)
- 2: enter the patient's ID number

add way to cancel

#### Add/Remove Doctor

Same as patient, but with way to add existing doctor from another ward

#### Add Ward

Enter ward name and capacity. Ask to switch to new ward or stay on current. Add way to cancel

#### Change ward

Enter the ward name. Add a way to cancel or list all wards

#### Save

Save the data to a file in some predefined save location

#### Load

Load data from a file

Enter the filename, relative to the predefined save folder

## Classes

#### Doctor

Abstract class for all doctors. Contains an abstract class to determine the type of doctor that must be implemented by all
subclasses. Doctor ID numbers are issued with no overlap between wards.

See the menu description for the information stored about doctors

#### Surgeon

Subclass of Doctor

#### GP

Subclass of Doctor

#### Patient

See the menu description for the information stored about patients.
Patient ID numbers are issued with no overlap between wards.

#### Ward 

Information about the patients and doctors in a ward, and which beds are populated

#### Control

Contains information about the state of the program and ways to modify it. The main driver code for actually doing
everything lives here. This program doesn't merit an MVC but you can think of this as the model, view, and controller
