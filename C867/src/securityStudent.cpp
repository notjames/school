#include <roster.h>

using namespace std;

// constructor
SecurityStudent::SecurityStudent()
{
  degreeType = Degree::SECURITY;
  return;
}

// destructor
SecurityStudent::~SecurityStudent()
{
}

// getter
string SecurityStudent::getDegreeProgram()
{
  string str = "Nothing for now.";
  return str;
}
