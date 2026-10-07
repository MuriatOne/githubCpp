#include <iostream>

int main() {
    int note = 17;

    if (note >= 10) {
        std::cout << "vous êtes admis" << std::endl;
    } else if (note >= 8) {
        std::cout << "vous êtes recalé mais vous pouvez repasser l'examen" << std::endl;
    } else {
        std::cout << "vous êtes recalé" << std::endl;
    }

    return 0;
}
