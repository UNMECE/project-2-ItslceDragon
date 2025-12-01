#include <iostream>
#include <vector>
#include <fstream>
#include "ArtStudent.h"
#include "PhysicsStudent.h"

int main() {
    std::vector<Art_Student*> art_students;
    std::vector<Physics_Student*> physics_students;

    for (int i = 0; i < 5; i++) {
        Art_Student* a = new Art_Student;
        a->setName("ArtFirst" + std::to_string(i+1), "ArtLast" + std::to_string(i+1));
        a->setGPA(3.5 + 0.1 * i);
        a->setGradYear(2025 + i);
        a->setGradSemester("Spring");
        a->setEnrolledYear(2021);
        a->setEnrolledSemester("Fall");
        if (i % 3 == 0) a->setArtEmphasis("Art Studio");
        else if (i % 3 == 1) a->setArtEmphasis("Art History");
        else a->setArtEmphasis("Art Education");
        art_students.push_back(a);
    }

    for (int i = 0; i < 5; i++) {
        Physics_Student* p = new Physics_Student;
        p->setName("PhysFirst" + std::to_string(i+1), "PhysLast" + std::to_string(i+1));
        p->setGPA(3.2 + 0.1 * i);
        p->setGradYear(2025 + i);
        p->setGradSemester("Fall");
        p->setEnrolledYear(2021);
        p->setEnrolledSemester("Spring");
        if (i % 2 == 0) p->setConcentration("Biophysics");
        else p->setConcentration("Earth and Planetary Sciences");
        physics_students.push_back(p);
    }

    std::ofstream outfile("student_info.dat");
    if (outfile.is_open()) {
        for (auto s : art_students) s->writeInfo(outfile);
        for (auto s : physics_students) s->writeInfo(outfile);
        outfile.close();
    } else {
        std::cerr << "Error opening file for writing.\n";
    }

    for (auto s : art_students) delete s;
    for (auto s : physics_students) delete s;

    return 0;
}

