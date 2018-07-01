#ifndef ROSTER_H
#define ROSTER_H

#include <list>
#include <string>
#include "student.h"

using namespace std;

/*
  E.  Create a Roster class (roster.cpp) by doing the following:
✅    1.  Create an array of pointers, classRosterArray, to hold the data provided in the
          studentData table.
      2.  Create a student object for each student in the data table by using the subclasses
          NetworkStudent, SecurityStudent, and SoftwareStudent, and populate classRosterArray.

          a.  Apply pointer operations when parsing each set of data identified in the
              studentData table.
          b.  Add each student object to classRosterArray.

      3.  Define the following functions:

✅        a.  public void add(string studentID, string firstName, string lastName,
              string emailAddress, int age, int daysInCourse1, int daysInCourse2,
              int daysInCourse3, <degree program>) that
              sets the instance variables from part D1 and updates the roster

✅        b.  public void remove(string studentID) that removes students from the roster
              by student ID.
              If the student ID does not exist, the function prints an error message
              indicating that the student was not found.

✅        c.  public void printAll() that prints a complete tab-separated list of
              student data using accessor functions with the provided format:

              1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20
                [tab]daysInCourse: {35, 40, 55} Degree Program: Security.

✅            The printAll() function should loop through all the students in
              classRosterArray and call the print() function for each student.

✅        d.  public void printDaysInCourse(string studentID) that correctly prints a
              student’s average number of days in the three courses. The student is
              identified by the studentID parameter.

✅        e.  public void printInvalidEmails() that verifies student email addresses
              and displays all invalid email addresses to the user

              Note: A valid email should include an at sign ('@') and period ('.') and
              should not include a space (' ').

✅        f.  public void printByDegreeProgram(Degree degreeProgram) that prints out student
              information for a degree program specified by an enumerated type


                               0    1   2     3                   4   5  6  7   8
                               SID, FN, LN,   email,              age,d1,d2,d3, degree
 */
const string studentData[] = {
                               "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
                               "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
                               "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
                               "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
                               "A5,Jim,Conner,jconn59@wgu.edu,45,13,10,12,SOFTWARE",
                             };
const int MAX = 5;

class Roster
{
  public:
    Roster();
    ~Roster();
    //Roster(const Roster& klass);

    void add(string studentID, string firstName,
             string lastName,  string emailAddress,
             int age, int daysInCourse1, int daysInCourse2,
             int daysInCourse3, string degree_name);
    int  create_students();
    void remove(string);
    void printAll();
    void printDaysInCourse(string);
    void printAverageDaysInCourse(string);
    void printInvalidEmails();
    void printByDegreeProgram(Degree);

  private:
    string   student_id;
    string   first_name;
    string   last_name;
    string   email_address;
    int      age;
    int      num_days[3]; // array of number of days to complete each course
    Student *classRosterArray[MAX];
};

#endif
