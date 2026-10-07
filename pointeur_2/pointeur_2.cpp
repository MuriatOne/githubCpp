
#include <iostream>
using namespace std;


int main()
{   //étape indispensable avent d'affecter une valeur dans un pointeur

    //1 affecteur une valeur à une variable
    //2 allouer une mémoire 
    //3 affecter le pointeur de la variable à la mémoire allouée

    int nombre = 206;
    int* p_nombre = 0;//une valeur quelconque pour initialiser ce pointeur - c'est obligatoire
    p_nombre = &nombre;


    cout << "la valeur est " << nombre << endl;
    cout << "son adresse memoire est " << p_nombre<< endl; //& donne l'adresse de mémoire de la variable
    cout << "la valeur obtenue par son pointeur est " << *p_nombre<< endl; //& donne l'adresse de mémoire de la variable

    return 0;

}
