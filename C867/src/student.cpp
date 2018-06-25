#include <iostream>
#include <roster.h>

using namespace std;

// default constructor
Student::Student()
{
  student_id    = student_id;
  first_name    = first_name;
  last_name     = last_name;
  email_address = email_addr;
  age           = age;
  num_days      = num_days;

  // the only way I could set num_days inside the constructor
  for ( int i = 0; i <= 3; i++ ) num_days[i] = 0;

  return;
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

  // the only way I could set num_days inside the constructor
  //for ( int i = 0; i <= 3; i++ ) num_days[i] = 0;

  return;
}

// destructor
Student::~Student()
{
  delete Student;
}

// setters
void Student::set_student_id(string first_name, string last_name,
                             string email_addr, string student_id)
{
  student_id = student_id;
  first_name = first_name;
  last_name  = last_name;
  email_addr = email_addr;

  return;
}

// getters
string Student::get_sid_by_fn(string first_name)
{
  return "";
}

// TODO and then fix this too to accept student_id and print just one student.
void Student::print()
{
  cout << "ID: "     << this->student_id    << "\t";
  cout << "Name: "   << this->first_name    << " " << this->last_name << "\t";
  cout << "Age:  "   << this->age           << "\t";
  cout << "Email:  " << this->email_address << "\t";
  cout << "Degree: TBA";
  cout << endl;

}


