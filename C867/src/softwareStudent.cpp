#include <roster.h>

using namespace std;

// constructor
SoftwareStudent::SoftwareStudent()
{
  degreeType = Degree::SOFTWARE;
  return;
}

// destructor
SoftwareStudent::~SoftwareStudent()
{
}

// getter
string SoftwareStudent::getDegreeProgram()
{
  return("Software");
}

