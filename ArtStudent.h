#ifndef ARTSTUDENT_H
#define ARTSTUDENT_H

#include "Student.h"
#include <string>

class Art_Student : public Student {
private:
    std::string art_emphasis;

public:
    Art_Student();
    ~Art_Student();

    void setArtEmphasis(const std::string& emphasis);
    std::string getArtEmphasis() const;

    void writeInfo(std::ofstream& out) const override;
};

#endif

