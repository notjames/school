#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include <string>
#include "student.h"

class SecurityStudent : public Student
{
  public:
    SecurityStudent();
    SecurityStudent(string first_name, string last_name,
                    string email_addr, int age, int *num_days,
                    string student_id, string degree_name);
    ~SecurityStudent();
    //SecurityStudent(const SecurityStudent& klass);

    void getDegreeProgram();
    void print();

  private:
    string degree_name;
};

#endif
