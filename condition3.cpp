#include <iostream>

int main() {
    int age;
    std::cout << "Menu : " << std::endl;
    std::cout << "1. Vérifier si l'utilisateur est majeur" << std::endl;
    std::cout << "2. Vérifier si l'utilisateur est mineur" << std::endl;
    std::cout << "Entrez votre choix : ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "vous êtes majeur" << std::endl;
    } else {
        std::cout << "vous êtes mineur" << std::endl;
    }

    return 0;
}
