#include <iostream>

#include "includes/degree.h"
#include "includes/roster.h"

using namespace std;

// default constructor
// this is not necessary for the project -- just the one with parameters
Student::Student()
{
  student_id    = "student_id";
  first_name    = "first_name";
  last_name     = "last_name";
  email_address = "email_address";
  age           = 0;
  degree_name   = new string();
  degree_type   = NOT_ASSIGNED;

  // the only way I could set num_days inside the constructor
  for ( int i = 0; i <= 3; i++ ) num_days[i] = 0;
}

// constructor
Student::Student(string first_name, string last_name,
                 string email_addr, int age, int *num_days,
                 string student_id, string degree_name)
{
  this->student_id    = student_id;
  this->first_name    = first_name;
  this->last_name     = last_name;
  this->age           = age;
  this->email_address = email_addr;
  this->set_num_days(num_days);
}

// destructor
Student::~Student() {}

// define copy constructor or remove/comment it

// setters
void Student::set_student_id(string student_id)
{
  this->student_id = student_id;
}

void Student::set_first_name(string first_name)
{
  this->first_name = first_name;
}

void Student::set_last_name(string last_name)
{
  this->last_name = last_name;
}

// so to use this function, caller will set this->degree_name
// and then use this setter. The setter will mutate degree_type
// by looking at this->degree_name
void Student::set_degree_type(string degree_name)
{
  this->degree_name = &degree_name;

  if ( degree_name == "SOFTWARE" )
  {
    this->degree_type = SOFTWARE;
  }

  if ( degree_name == "NETWORKING" )
  {
    this->degree_type = NETWORKING;
    cout << "degree name is: " << this->degree_type << endl;
  }

  if ( degree_name == "SECURITY" )
  {
    this->degree_type = SECURITY;
  }
}

// for some reason during runtime, I keep getting memory
// allocation errors:
// roster: malloc.c:2427: sysmalloc: Assertion `(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) && ((unsigned long) old_end & (pagesize - 1)) == 0)' failed.
// no idea how to fix that and everything else I've tried
// while following the instructions throws that error.
void Student::set_email_address(string *email_address)
{
  this->email_address = *email_address;
}

void Student::set_age(int age)
{
  this->age = age;
}

void Student::set_num_days(int *num_days)
{
  for ( int i = 0; i <= 3; i++ ) this->num_days[i] = num_days[i];
}

void Student::set_degreetostr()
{
  switch(this->degree_type)
  {
    case SOFTWARE   : *(this->degree_name) = "Software";     break;
    case NETWORKING : *(this->degree_name) = "Networking";   break;
    case SECURITY   : *(this->degree_name) = "Security";     break;
    // technically shouldn't happen
    default         : *(this->degree_name) = "Not Assigned"; break;
  }
}

// getters
string Student::get_student_id()
{
  return this->student_id;
}

string Student::get_first_name()
{
  return this->first_name;
}

string Student::get_last_name()
{
  return this->last_name;
}

string Student::get_email_address()
{
  return this->email_address;
  //return this->email_address;
}

int Student::get_age()
{
  return this->age;
}

int *Student::get_num_days()
{
  return this->num_days;
}

string Student::get_degree_name()
{
  return *(this->degree_name);
}

void Student::print() 
{
  cout << left << "First Name:      " << setw(8) << this->get_first_name();
  cout << left << " Last Name:      " << setw(8) << this->get_last_name();
  cout << left << " Age:            " << this->get_age();

  if ( this->get_age() < 10 )
  {
    cout << left << setw(16) << "\tdaysInCourse:  {";
  }
  else
  {
    cout << left << setw(16) << "\tdaysInCourse: {";
  }

  for ( int z = 0 ; z < 3 ; z++ )
  {
    cout << this->get_num_days()[z];
    if ( z != 2 ) { cout << ", "; }
  }
  cout << setw(6) << left << "}" << endl;
}

void Student::getDegreeProgram() 
{
  this->get_degree_name();
}
