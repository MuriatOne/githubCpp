#include <iostream>
//si valeur entrée est 19 la première condition est vraie donc il affiche le message correspondant et sort du if et ne continue pas à exécuter les autres conditions

//règle générale : commencer par la condition la plus restrictive et finir par la condition la moins restrictive
int main() {
    double note;
    std::cout << "Entrez votre note : ";
    std::cin >> note;
    std::cout<<std::endl;

    if (note >= 16) {
        std::cout << "vous avez la mention très bien" << std::endl;
    } else if (note >= 14) {
        std::cout << "vous avez la mention bien" << std::endl;
    } else if (note >= 12) {
        std::cout << "vous avez la mention assez bien" << std::endl;
    } else if (note >= 10) {
     std::cout << "vous êtes admis" << std::endl;
    }
    else
    {
        std::cout << "vous êtes recalé" << std::endl;
    }

    return 0;
}
