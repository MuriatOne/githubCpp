#include<iostream>
// il exécute case 10 et case 2 car il n'y a pas de break dans le case 10 = c'est un comportement à éviter sauf si c'est voulu, on appelle ça un "fall through" = il continue à exécuter les cases suivantes jusqu'à rencontrer un break ou la fin du switch
int main() {
    int nombre1, nombre2;

    nombre1 = 10;
    
    switch (nombre1) {
        case 10:
            std::cout << "Vous avez choisi 10" << std::endl;
           
        case 2:
            std::cout << "Vous avez choisi 20" << std::endl;
            break;
        
        
    }
  
    return 0;
}