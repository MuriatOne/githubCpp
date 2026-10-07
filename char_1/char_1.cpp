

#include <iostream>
using namespace std;

int main()
{
    char chaine_caractere[10];
    //ici on alloue 10 caractères dans la mémoire - donc le nombre maxi de caractère est 10
   
    cout << "donne moi un mot\n"<<endl;

    cin.get(chaine_caractere, 10);//ici le programme prend en charge les 10 premiers caractère saisis
    
    cout << "le mot saisi est " << chaine_caractere << endl;


    return 0;

}
