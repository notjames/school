#include <iostream>
#include <roster.h>

using namespace std;

// default constructor
// this is not necessary -- just the one with parameters
Student::Student()
{
  student_id    = student_id;
  first_name    = first_name;
  last_name     = last_name;
  email_address = email_address;
  age           = age;

  // the only way I could set num_days inside the constructor
  for ( int i = 0; i <= 3; i++ ) num_days[i] = 0;
}

// constructor
Student::Student(string first_name, string last_name,
                 string email_addr, int age, int *num_days,
                 string student_id)
{
  student_id    = student_id;
  first_name    = first_name;
  last_name     = last_name;
  email_address = email_addr;
  age           = age;
  num_days      = num_days;
}

// destructor
Student::~Student()
{
}

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

void Student::set_email_address(string email_address)
{
  this->email_address = email_address;
}

void Student::set_age(int age)
{
  this->age = age;
}

void Student::set_num_days(int *num_days)
{
  for ( int i = 0; i <= 3; i++ ) this->num_days[i] = num_days[i];
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
}

int Student::get_age()
{
  return this->age;
}

int *Student::get_num_days()
{
  return this->num_days;
}

// TODO and then fix this too to accept student_id and print just one student.
void Student::print() { }

