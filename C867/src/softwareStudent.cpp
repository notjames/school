#include <roster.h>

using namespace std;

// constructor
SoftwareStudent::SoftwareStudent()
{
  degreeType = SOFTWARE;
  return;
}

// destructor
SoftwareStudent::~SoftwareStudent()
{
  delete degreeType;
}

// getter
string SoftwareStudent::getDegreeProgram
{
  return("Software");
}

