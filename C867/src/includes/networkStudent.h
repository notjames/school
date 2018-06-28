#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

class NetworkStudent : private Student
{
  public:
    NetworkStudent();
    NetworkStudent(string first_name, string last_name,
                   string email_addr, int age, int *num_days,
                   string student_id, string degree_name);
    ~NetworkStudent();
    //NetworkStudent(const NetworkStudent& klass);

    void getDegreeProgram();
    void print();

  private:
    string degree_name;
};

#endif
