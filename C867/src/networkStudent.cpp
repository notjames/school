#include <roster.h>
#include <student.h>

// may need to include degree.h
using namespace std;

// constructor
NetworkStudent::NetworkStudent(string first_name, string last_name,
                               string email_addr, int age, int *num_days,
                               string student_id, Degree degree_type)
  : Student ( first_name, last_name, email_addr, age, num_days, student_id, degree_type )
{
  degreeType = Degree::NETWORKING;
}

// destructor
NetworkStudent::~NetworkStudent() { }

// getters
string NetworkStudent::getDegreeProgram()
{
  return "Networking";
}

void NetworkStudent::print()
{
  cout << "ID: "     << this->get_student_id()    << "\t";
  cout << "Name: "   << this->get_first_name()    << " " << this->get_last_name() << "\t";
  cout << "Age:  "   << this->get_age()           << "\t";
  cout << "Email:  " << this->get_email_address() << "\t";
  cout << "Degree: " << this->getDegreeProgram()  << endl;
}
