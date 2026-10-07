

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char chaine_caractere[10];
    string phrase;//une variable qui contient une chaîne de caractère de longueur quelconque
    
    cout << "donne moi un mot\n" << endl;
    cin.get(chaine_caractere, 10);
    cout << "le mot saisi est " << chaine_caractere << endl;

    cin.ignore(); //ça permet de initialiser la mémoire
    
        
    cout << "donne moi une phrase " << phrase << endl;
    getline(cin, phrase);//line comme ligne ou chaîne, mettre le contenu dans une chaîne de caractère
    //cin.getline(phrase);
    cout << "la phare saisie est " << phrase << endl;

    return 0;

}
