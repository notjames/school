#include <roster.h>

using namespace std;

// constructor
SecurityStudent::SecurityStudent()
{
  degreeType = SECURITY;
  return;
}

// destructor
SecurityStudent::~SecurityStudent()
{
  delete degreeType;
}

// getter
string SecurityStudent::getDegreeProgram const
{
  return "nothing for now";
}
