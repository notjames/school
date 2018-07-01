#include "includes/networkStudent.h"
#include "includes/roster.h"

// may need to include degree.h
using namespace std;

// constructor
NetworkStudent::NetworkStudent(string first_name, string last_name,
                               string email_addr, int age, int *num_days,
                               string student_id, string degree_name)
  : Student ( first_name, last_name, email_addr, age, num_days, student_id, degree_name )
{
  this->set_degree_type(degree_name);
}

NetworkStudent::NetworkStudent() { }

// destructor
NetworkStudent::~NetworkStudent() { }

// getters
void NetworkStudent::getDegreeProgram() { }

void NetworkStudent::print()
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
  cout << setw(6) << left << "}";
  cout << setw(15) << " Degree Program: " << this->get_degree_name() << endl;
}
