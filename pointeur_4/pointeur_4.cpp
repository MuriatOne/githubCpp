//l'idée c'est de réserver une place de mémoire avant même de définir une valeur à conserver.
//Étape à suivre 
//1 Réserver une place ou un pointeur dans lequel il y a une valeur par défaut 0
//2 créer une valeur en faisant new (class)

#include <iostream>
#include <string>

using namespace std;


int main()
{
    int* p_valeur = 0; // placer une valeur par défaut 0 dans le pointuer p_valeur
    p_valeur = new int; 
    //new int permet de créer un entier dans une adresse de mémoire quelconque non identifiable, 
    //grâce à " = " maintenant p_valeur est devenu l'adresse pointeur identifiable.


    cout << "entrer une valeur entiere !" << endl;
    cin >> *p_valeur;

    cout << "vous avez chsoisi " << *p_valeur << " comme valeur" << endl;

    delete p_valeur;


    return 0;

}
