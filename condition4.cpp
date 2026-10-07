#include<iostream>
//il exécute le nombre choisi et affiche le message correspondant ensuite après le break il sort du switch et ne continue pas à exécuter les autres cases
int main() {
    int choix;

    std::cout << "Menu : " << std::endl;
    std::cout << "1. Nouveau jeux" << std::endl;
    std::cout << "2. Charger une partie" << std::endl;
    std::cout << "3. Quitter" << std::endl;
    std::cout << "Entrez votre choix : ";
    std::cin >> choix;

    switch (choix) {
        case 1:
            std::cout << "Vous avez choisi de commencer un nouveau jeux." << std::endl;
            break;
        case 2:
            std::cout << "Vous avez choisi de charger une partie." << std::endl;
            break;
        case 3:
            std::cout << "Vous avez choisi de quitter le jeux." << std::endl;
            break;
        default:
            std::cout << "Choix invalide. Veuillez réessayer." << std::endl;
    }
  
    return 0;
}