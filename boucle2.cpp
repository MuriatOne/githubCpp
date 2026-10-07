#include<iostream>


//For loop, quand on connait le nombre d'itérations à effectuer, on utilise la boucle for
//avec continue, il saute l'itération selon la condition en cours et passe à la suivante
int main()
{
    for (int i = 1; i <= 10; i++) {
        if ((i == 5) || (i == 7) || (i >= 9)) {
            continue; // Skip the iteration when i is 5
        }


        std::cout << "Compteur : " << i << std::endl;
    }

return 0;


}
