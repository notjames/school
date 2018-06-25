#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

class SecurityStudent : private Student
{
  public:
    SecurityStudent();
    ~SecurityStudent();
    SecurityStudent(const SecurityStudent& klass);

    string getDegreeProgram();

  private:
    Degree degreeType;
};

#endif
