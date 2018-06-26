#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

class SoftwareStudent : private Student
{
  public:
    SoftwareStudent();
    SoftwareStudent(string first_name, string last_name,
                    string email_addr, int age, int *num_days,
                    string student_id);
    ~SoftwareStudent();
    //SoftwareStudent(const SoftwareStudent& klass);

    string getDegreeProgram();
    void   print();

  private:
    Degree degreeType;
};

#endif
