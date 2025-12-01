#ifndef PHYSICSSTUDENT_H
#define PHYSICSSTUDENT_H

#include "Student.h"
#include <string>

class Physics_Student : public Student {
private:
    std::string concentration;

public:
    Physics_Student();
    ~Physics_Student();

    void setConcentration(const std::string& conc);
    std::string getConcentration() const;

    void writeInfo(std::ofstream& out) const override;
};

#endif

