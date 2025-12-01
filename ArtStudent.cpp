#include "ArtStudent.h"

Art_Student::Art_Student() : Student(), art_emphasis("Art Studio") {}
Art_Student::~Art_Student() {}

void Art_Student::setArtEmphasis(const std::string& emphasis) {
    art_emphasis = emphasis;
}

std::string Art_Student::getArtEmphasis() const {
    return art_emphasis;
}

void Art_Student::writeInfo(std::ofstream& out) const {
    Student::writeInfo(out);
    out << "Art Emphasis: " << art_emphasis << "\n";
    out << "-----------------------------\n";
}

