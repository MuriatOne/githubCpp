

#include <iostream>
#include <string>
using namespace std;

int main()
{
   
    string phrase;//une variable qui contient une chaîne de caractère de longueur quelconque
    cout << "donne moi un mot\n" << endl;

    //cin.ignore(); ça permet de initialiser la mémoire
    getline(cin,phrase);//line comme ligne ou chaîne, mettre le contenu dans une chaîne de caractère

    cout << "le mot saisi est " << phrase << endl;


    return 0;

}
