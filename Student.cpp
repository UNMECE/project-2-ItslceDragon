#include "Student.h"

Student::Student()
    : first_name(""), last_name(""), gpa(0.0), grad_year(0), grad_semester(""),
      enrolled_year(0), enrolled_semester(""), degree_level("undergrad") {}

Student::~Student() {}

void Student::setName(const std::string& first, const std::string& last) {
    first_name = first;
    last_name = last;
}

void Student::setGPA(double g) { gpa = g; }
void Student::setGradYear(int year) { grad_year = year; }
void Student::setGradSemester(const std::string& semester) { grad_semester = semester; }
void Student::setEnrolledYear(int year) { enrolled_year = year; }
void Student::setEnrolledSemester(const std::string& semester) { enrolled_semester = semester; }
void Student::setDegreeLevel(const std::string& level) { degree_level = level; }

std::string Student::getName() const { return first_name + " " + last_name; }
double Student::getGPA() const { return gpa; }
int Student::getGradYear() const { return grad_year; }
std::string Student::getGradSemester() const { return grad_semester; }
int Student::getEnrolledYear() const { return enrolled_year; }
std::string Student::getEnrolledSemester() const { return enrolled_semester; }
std::string Student::getDegreeLevel() const { return degree_level; }

void Student::writeInfo(std::ofstream& out) const {
    out << "Name: " << getName() << "\n";
    out << "GPA: " << gpa << "\n";
    out << "Graduation: " << grad_semester << " " << grad_year << "\n";
    out << "Enrolled: " << enrolled_semester << " " << enrolled_year << "\n";
    out << "Degree Level: " << degree_level << "\n";
}

