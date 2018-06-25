#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

class SoftwareStudent : private Student
{
  public:
    SoftwareStudent();
    ~SoftwareStudent();
    SoftwareStudent(const SoftwareStudent& klass);

    string getDegreeProgram() const;

  private:
    Degree degreeType;
}

#endif
