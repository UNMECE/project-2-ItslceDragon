#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>

class Student {
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int grad_year;
    std::string grad_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string degree_level;

public:
    Student();
    virtual ~Student();

    void setName(const std::string& first, const std::string& last);
    void setGPA(double g);
    void setGradYear(int year);
    void setGradSemester(const std::string& semester);
    void setEnrolledYear(int year);
    void setEnrolledSemester(const std::string& semester);
    void setDegreeLevel(const std::string& level);

    std::string getName() const;
    double getGPA() const;
    int getGradYear() const;
    std::string getGradSemester() const;
    int getEnrolledYear() const;
    std::string getEnrolledSemester() const;
    std::string getDegreeLevel() const;

    virtual void writeInfo(std::ofstream& out) const;
};

#endif

