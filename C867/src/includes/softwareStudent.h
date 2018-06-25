
class softwareStudent : private Student
{
  public:
    softwareStudent();

    void getDegreeProgram() const;

  private:
    Degree degreeType;
}

