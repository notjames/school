#include <iostream>

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
    Student(string first_name, string last_name,
            string email_addr, int age, int *num_days,
            string student_id);

    string   get_student_id(string first_name, string last_name, string email_addr) const;
    string   get_sid_by_fn(string first_name);
    string   get_first_name(int student_id)     const;
    string   get_last_name(int student_id)      const;
    string   get_email_address(int student_id)  const;
    int      get_age(int student_id)            const;
    int      get_num_days(int student_id)       const;

    void set_student_id(string first_name, string last_name,
                        string email_addr, string student_id);
    void set_first_name(int student_id);
    void set_last_name(int student_id);
    void set_email_address(int student_id);
    void set_age(int student_id);
    void set_num_days(int student_id);

    void print();

  private:
    string   student_id;
    string   first_name;
    string   last_name;
    string   email_address;
    int      age;
    int      num_days[3]; // array of number of days to complete each course
};

