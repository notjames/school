#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

class NetworkStudent : private Student
{
  public:
    NetworkStudent();
    ~NetworkStudent();
    NetworkStudent(const NetworkStudent& klass);

    int getDegreeProgram();

  private:
    Degree degreeType;
}

#endif
