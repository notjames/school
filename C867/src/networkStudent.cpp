#include "includes/roster.h"
#include "includes/student.h"

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

// destructor
NetworkStudent::~NetworkStudent() { }

// getters
void NetworkStudent::getDegreeProgram() { }

void NetworkStudent::print()
{
  cout << "ID: "     << this->get_student_id()    << "\t";
  cout << "Name: "   << this->get_first_name()    << " " << this->get_last_name() << "\t";
  cout << "Age:  "   << this->get_age()           << "\t";
  cout << "Email:  " << this->get_email_address() << "\t";
  cout << "Degree: " << this->get_degree_name()   << endl;
}
