#include "PhysicsStudent.h"

Physics_Student::Physics_Student() : Student(), concentration("Biophysics") {}
Physics_Student::~Physics_Student() {}

void Physics_Student::setConcentration(const std::string& conc) {
    concentration = conc;
}

std::string Physics_Student::getConcentration() const {
    return concentration;
}

void Physics_Student::writeInfo(std::ofstream& out) const {
    Student::writeInfo(out);
    out << "Concentration: " << concentration << "\n";
    out << "-----------------------------\n";
}

