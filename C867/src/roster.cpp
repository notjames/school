#include <cstddef>
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
}

Roster::~Roster() { }

int Roster::create_students()
{
  for ( int i = 0; i < MAX; i++ )
  {
    int d1, d2, d3;

    string line      = studentData[i];
    string delimiter = ",";
    size_t pos       = 0;
    int    i_word    = 0;
    string token, a_student[8];

    while ((pos = line.find(delimiter)) != std::string::npos)
    {
        token = line.substr(0, pos);
        a_student[i_word] = token;
        i_word++;

        line.erase(0, pos + delimiter.length());
    }

    d1          = atoi(a_student[4].c_str());
    d2          = atoi(a_student[5].c_str());
    d3          = atoi(a_student[6].c_str());
    int num_days[3] = {d1, d2, d3};
    Student *s;

    s = new Student();

    for ( int i = 0; i <= i_word; i++ )
    {
      s->set_student_id(a_student[0]);
      s->set_first_name(a_student[1]);
      s->set_last_name(a_student[2]);
      s->set_email_address(a_student[3]);
      s->set_num_days(num_days);
      s->set_age(atoi(a_student[7].c_str()));
    }

    classRosterArray[i] = s;

    //create_student(studentData[i], classRosterArray[i]);
  }

  return 0;
}

/* create the other functions here */

// main -- entrance to the whole app.
int main(void)
{
  cout << "Class title:          " << class_title << endl;
  cout << "Programming language: " << language    << endl;
  cout << "Student ID:           " << student_id  << endl;
  cout << "Author:               " << author      << endl;
  cout << "\n";

  Roster classRoster;

  /*
  classRoster.printAll();
  classRoster.printInvalidEmails();
  // loop through classRosterArray and for each element:
    classRoster.printAverageDaysInCourse(//current_object's student id//);
  classRoster.printByDegreeProgram(SOFTWARE);
  classRoster.remove("A3");
  classRoster.remove("A3");
  */
  //delete classRoster;

  return 0;
}
