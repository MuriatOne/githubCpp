#include<iostream>
// il exécute tant que la condtion après while est vrai, si elle est fausse il sort de la boucle
//boucle while, quand on ne connait pas le nombre d'itérations à effectuer, on utilise la boucle while
int main() {
int increm = 1;
while (increm <= 10) {
    std::cout << "Compteur : " << increm << std::endl;
    increm++; 
    }
    return 0;
}
