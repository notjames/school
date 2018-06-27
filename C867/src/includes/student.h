#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <degree.h>

using namespace std;

/*
✅A.  Modify the studentData table to include your personal information as the last item
✅B.  Create a C++ project in your integrated development environment (IDE) with the following files:
      •   degree.h
      •   student.h and student.cpp
      •   networkStudent.h and networkStudent.cpp
      •   securityStudent.h and securityStudent.cpp
      •   softwareStudent.h and softwareStudent.cpp
      •   roster.h and roster.cpp

✅    Note: There must be a total of 11 source code files.

✅C.  Define an enumerated data type Degree for the degree programs containing the following
      data elements SECURITY, NETWORKING and SOFTWARE.

✅    Note: This information should be included in the degree.h file.

  D.  For the Student class, do the following:
✅    1.  Create the base class Student in the files student.h and student.cpp, which includes
          each the following variables:
✅        •   student ID
✅        •   first name
✅        •   last name
✅        •   email address
✅        •   age
✅        •   array of number of days to complete each course
✅        •   degree types

              Note: Degree type should be populated in subclasses only.

      2.  Create each of the following functions in the Student class:
          a.  an accessor (i.e., getter) for each instance variable from part D1
          b.  a mutator (i.e., setter) for each instance variable from part D1

              Note: All access and changes to the instance variables of the Student class
                    should be done through the accessor and mutator functions.

          c.  constructor using all of the input parameters provided in the table
          d.  virtual print() to print specific student data
          e.  destructor
          f.  virtual getDegreeProgram()

              Note: Leave the implementation of the getDegreeProgram() function empty.

      3.  Create the three following classes as subclasses of Student, using the files created
          in part B:
          •   SecurityStudent
          •   NetworkStudent
          •   SoftwareStudent
          Each subclass should override the getDegreeProgram() function. Each subclass should
          have a data member to hold the enumerated type for the degree program using the types
          defined in part C.

 */

class Student
{
  public:
    Student();
    ~Student();
    Student(string first_name, string last_name,
            string email_addr, int age, int *num_days,
            string student_id, Degree degree_type);
    // copy constructor not needed, but usually recommended
    // So, just placing commented out for personal-use sake.
    //Student(const Student& klass);

    string   get_student_id()         ;
    string   get_first_name()         ;
    string   get_last_name()          ;
    string   get_email_address()      ;
    int      get_age()                ;
    int*     get_num_days()           ;
    string   get_degree_name()        ; // gets degree_name

    void     set_student_id(string)   ;
    void     set_first_name(string)   ;
    void     set_last_name(string)    ;
    void     set_email_address(string *);
    void     set_age(int)             ;
    void     set_num_days(int*)       ;
    void     set_degreetostr()        ; // sets degree_name
    void     set_degree_type(string)  ; // sets degree_name and Degree enum
    virtual void print();

  private:
    string   student_id;
    string   first_name;
    string   last_name;
    string   email_address;
    string   *shadow;
    int      age;
    int      num_days[3]; // array of number of days to complete each course
    string   degree_name;
    Degree   degree_type;
};

#endif
