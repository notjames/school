#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

class SecurityStudent : private Student
{
  public:
    SecurityStudent();
    SecurityStudent(string first_name, string last_name,
                    string email_addr, int age, int *num_days,
                    string student_id);
    ~SecurityStudent();
    //SecurityStudent(const SecurityStudent& klass);

    string getDegreeProgram();
    void   print();

  private:
    Degree degreeType;
};

#endif
