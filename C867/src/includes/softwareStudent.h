#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include <string>
#include "student.h"

class SoftwareStudent : private Student
{
  public:
    SoftwareStudent();
    SoftwareStudent(string first_name, string last_name,
                    string email_addr, int age, int *num_days,
                    string student_id, string degree_name);
    ~SoftwareStudent();
    //SoftwareStudent(const SoftwareStudent& klass);

    void getDegreeProgram();
    void print();

  private:
    string degree_name;
};

#endif
