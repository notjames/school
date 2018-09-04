#include <cstddef>
#include <iostream>
#include <string.h>

#include "includes/softwareStudent.h"
#include "includes/networkStudent.h"
#include "includes/securityStudent.h"
#include "includes/roster.h"

using namespace std;

/*
  F.  Demonstrate the program’s required functionality by adding a void main() function to roster.cpp,
      which will contain the required function calls to achieve the following results:
✅    1.  Print out to the screen, via your application, the course title, the programming language used,
          your student ID, and your name.
✅    2.  Create an instance of the Roster class called classRoster.
✅    3.  Add each student to classRoster.
      4.  Convert the following pseudo code to complete the rest of the main() function:
✅        classRoster.printAll();
          classRoster.printInvalidEmails();
          // loop through classRosterArray and for each element:
          classRoster.printAverageDaysInCourse(//current_object's student id//);
          classRoster.printByDegreeProgram(SOFTWARE);
          classRoster.remove("A3");
          classRoster.remove("A3");
          //expected: the above line should print a message saying such a student with this ID was not found.
✅    5.  Call the destructor to release the Roster memory.
 */

const string class_title = "Scripting and Programming - Applications – C867";
const string language    = "C++11x";
const string student_id  = "TBA";
const string author      = "Jim Conner";

// default constructor
Roster::Roster()
{
  this->create_students();
}

Roster::~Roster() { }

int Roster::create_students()
{
  for ( int i = 0; i < MAX; i++ )
  {
    string first_name, last_name, student_id, email_address, degree_name, line;
    int    age, d1, d2, d3;
    char   *token;

    line               = studentData[i];
    char   delimiter[] = ",";
    int    i_word      = 0;
    string a_student[9];

    token = strtok(&line[0], delimiter);

    while (token != NULL && i_word < 9)
    {
      a_student[i_word] = token;
      i_word++;
      token = strtok(NULL,delimiter);
    }

    d1                 = atoi(a_student[5].c_str());
    d2                 = atoi(a_student[6].c_str());
    d3                 = atoi(a_student[7].c_str());
    int num_days[3]    = {d1, d2, d3};

    student_id         = a_student[0];
    first_name         = a_student[1];
    last_name          = a_student[2];
    email_address      = a_student[3];
    age                = atoi(a_student[4].c_str());
    degree_name        = a_student[8];

    Student *s         = new Student(first_name, last_name, email_address, age,
                                     num_days, student_id, degree_name);

    if ( strcmp(a_student[8].c_str(), "SOFTWARE") )
    {
      SoftwareStudent sw(first_name, last_name, email_address, age,
                         num_days, student_id, degree_name);
      s = &sw;
    }

    if ( strcmp(a_student[8].c_str(), "SECURITY") )
    {
      SecurityStudent ss(first_name, last_name, email_address, age,
                         num_days, student_id, degree_name);
      s = &ss;
    }

    if ( strcmp(a_student[8].c_str(), "NETWORKING") )
    {
      NetworkStudent  ns(first_name, last_name, email_address, age,
                         num_days, student_id, degree_name);
      s = &ns;
    }

    classRosterArray[i] = new Student(*s);
  }

  return 0;
}

/* create the other functions here */
void Roster::add(string studentID, string firstName, string lastName,
                 string emailAddress, int age, int daysInCourse1, int daysInCourse2,
                 int daysInCourse3, string degree_name)
{

}

void Roster::printInvalidEmails()
{
}

void Roster::printAverageDaysInCourse(string student_id)
{
}

// print should do:
// [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20
// [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
void Roster::printAll()
{
  for ( int c = 0 ; c < MAX ; c++ )
  {
    this->classRosterArray[c]->print();
  }
}

void Roster::printDaysInCourse(string) { }

void Roster::printByDegreeProgram(Degree) { }

// main -- entrance to the whole app.
int main(void)
{
  cout << "Class title:          " << class_title << endl;
  cout << "Programming language: " << language    << endl;
  cout << "Student ID:           " << student_id  << endl;
  cout << "Author:               " << author      << endl;
  cout << "\n";

  Roster classRoster;

  classRoster.printAll();
  /*
  classRoster.printInvalidEmails();
  // loop through classRosterArray and for each element:
    classRoster.printAverageDaysInCourse(//current_object's student id//);
  classRoster.printByDegreeProgram(SOFTWARE);
  classRoster.remove("A3");
  classRoster.remove("A3");
  */

  //delete[] &classRoster;

  return 0;
}
