#include <degree.h>
#include <student.h>
#include <roster.h>

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
  return;
}

int Roster::create_students()
{
  int num_elements          = sizeof(studentData)/sizeof(string);
  Student *classRosterArray = new Student[num_elements];

  for ( int i = 0; i < num_elements; i++ )
  {
    create_student(studentData[i], classRosterArray[i]);
  }

  delete[] classRosterArray;
  return 0;
}

void create_student(string student_data, Student& student)
{
  student.print();
}

// main -- entrance to the whole app.
int main(void)
{
  cout << "Class title:          " << class_title << endl;
  cout << "Programming language: " << language    << endl;
  cout << "Student ID:           " << student_id  << endl;
  cout << "Author:               " << author      << endl;
  cout << "\n";

  Roster classRoster;

  //delete classRoster;
  return 0;
}

