

#include <iostream>
#include <string>
using namespace std;

void afficher(char c[]);
void afficher(string s);
void encrypt(char*);
void decrypt(char*);
void afficher(char*);

int main()
{
    char chaine_caractere[10];
    string phrase;//une variable qui contient une chaîne de caractère de longueur quelconque

    cout << "donne moi un mot\n" << endl;
    cin.get(chaine_caractere, 10);
    afficher(chaine_caractere);

    cin.ignore(); //ça permet de initialiser la mémoire


    cout << "donne moi une phrase " << phrase << endl;
    getline(cin, phrase);//line comme ligne ou chaîne, mettre le contenu dans une chaîne de caractère
    //cin.getline(phrase);
    afficher(phrase);

    cout << "chiffrage\n" << endl;
    encrypt(chaine_caractere);
    decrypt(chaine_caractere);


    return 0;

}
//le fonctionnement en surcharge entre ces deux prochaines fonctions
void afficher(char c[])
{
    //c'est un tableau
    cout << "le mot saisi est " << c << endl;

}


void afficher(string s)
{
    //ce n'est pas un tableau, une variable unique
    cout << "la phrase saisie est " << s << endl;

}

void encrypt(char c[])
{
    for (int  i = 0; i < 5; i++)
    {
        c[i] += 10;
    }
    cout << c << endl;

}

void decrypt(char c[])
{
    for (int i = 0; i < 5; i++)
    {
        c[i] -= 10;
    }
    cout << c << endl;

}