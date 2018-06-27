#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

class NetworkStudent : private Student
{
  public:
    NetworkStudent();
    NetworkStudent(string first_name, string last_name,
                   string email_addr, int age, int *num_days,
                   string student_id, Degree degree_type);
    ~NetworkStudent();
    //NetworkStudent(const NetworkStudent& klass);

    string getDegreeProgram();
    void   print();

  private:
    Degree degreeType;
};

#endif
