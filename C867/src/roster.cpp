#include <cstddef>
#include <iostream>
#include <string>
#include <iomanip>
#include <roster.h>

using namespace std;
using std::cout;
using std::endl;
using std::setw;

/*
  F.  Demonstrate the program’s required functionality by adding a void main() function to roster.cpp,
      which will contain the required function calls to achieve the following results:
      1.  Print out to the screen, via your application, the course title, the programming language used,
          your student ID, and your name.
      2.  Create an instance of the Roster class called classRoster.
      3.  Add each student to classRoster.
      4.  Convert the following pseudo code to complete the rest of the main() function:
          classRoster.printAll();
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
    int d1, d2, d3;

    Student *s;
    s                  = new Student();
    string line        = studentData[i];
    char   delimiter[] = ",";
    int    i_word      = 0;
    char   *token;
    string a_student[9];

    token = strtok(&line[0], delimiter);

    while (token != NULL && i_word < 9)
    {
      a_student[i_word] = token;
      i_word++;
      token = strtok(NULL,delimiter);
    }

    d1          = atoi(a_student[4].c_str());
    d2          = atoi(a_student[5].c_str());
    d3          = atoi(a_student[6].c_str());
    int num_days[3] = {d1, d2, d3};

    for ( int i = 0; i <= i_word; i++ )
    {
      s->set_student_id(a_student[0]);
      s->set_first_name(a_student[1]);
      s->set_last_name(a_student[2]);
      s->set_email_address(&a_student[3]);
      s->set_num_days(num_days);
      s->set_age(atoi(a_student[7].c_str()));
      s->set_degree_type(a_student[8].c_str());
/*
      cout << "student id: " << s->get_student_id() << endl;
      cout << "first name: " << s->get_first_name() << endl;
      cout << "last name : " << s->get_last_name()  << endl;
      cout << "email addr: " << s->get_email_address() << endl;
      cout << "age:        " << s->get_age()        << endl;
      cout << "program:    " << s->get_degree_name()<< endl;
      cout << endl;
 */
    }

    classRosterArray[i] = s;
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
  for ( int i = 0 ; i <= MAX ; i++ )
  {
    cout << left << "First Name:      " << setw(8) << this->classRosterArray[i]->get_first_name();
    cout << left << " Last Name:      " << setw(8) << this->classRosterArray[i]->get_last_name();
    cout << left << " Age:           "  << this->classRosterArray[i]->get_age();

    if ( this->classRosterArray[i]->get_age() < 10 )
    {
      cout << left << setw(16) << "\tdaysInCourse:  {";
    }
    else
    {
      cout << left << setw(16) << "\tdaysInCourse: {";
    }

    for ( int z = 0 ; z < 3 ; z++ )
    {
      cout << this->classRosterArray[i]->get_num_days()[z];
      if ( z != 2 ) { cout << ", "; }
    }
    cout << setw(6) << left << "}";

    cout << setw(15) << " Degree Program: " << this->classRosterArray[i]->get_degree_name();
    cout << endl;
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

  delete[] &classRoster;

  return 0;
}
