#include <roster.h>
#include <student.h>


using namespace std;

// constructor
SoftwareStudent::SoftwareStudent(string first_name, string last_name,
                               string email_addr, int age, int *num_days,
                               string student_id)
  : Student ( first_name, last_name, email_addr, age, num_days, student_id )
{
  degreeType = Degree::SOFTWARE;
}

// destructor
SoftwareStudent::~SoftwareStudent()
{
}

// getter
string SoftwareStudent::getDegreeProgram()
{
  return "Software";
}

void SoftwareStudent::print()
{
  cout << "ID: "     << this->get_student_id()    << "\t";
  cout << "Name: "   << this->get_first_name()    << " " << this->get_last_name() << "\t";
  cout << "Age:  "   << this->get_age()           << "\t";
  cout << "Email:  " << this->get_email_address() << "\t";
  cout << "Degree: " << this->getDegreeProgram()  << endl;
}
