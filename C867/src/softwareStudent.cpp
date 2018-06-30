#include "includes/roster.h"

using namespace std;

// constructor
SoftwareStudent::SoftwareStudent(string first_name, string last_name,
                               string email_addr, int age, int *num_days,
                               string student_id, string degree_name)
  : Student ( first_name, last_name, email_addr, age, num_days, student_id, degree_name )
{
  this->set_degree_type(degree_name);
}

// destructor
SoftwareStudent::~SoftwareStudent() { }

// getter
void SoftwareStudent::getDegreeProgram() { }

void SoftwareStudent::print()
{
  cout << setw(15) << " Degree Program: " << this->get_degree_name() << endl;
}