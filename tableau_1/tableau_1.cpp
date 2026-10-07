//il s'agit de mettre des chaînes  de caractère, qui forment un nom prenom et nom
//c'est un programme de concaténation en utilisant +=. le prénom et nom formant un tableau

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string prenom("Remy");
	string nom("Muriat");
	string nomcomplet("");

	nomcomplet += prenom;
	nomcomplet += " ";
	nomcomplet += nom;

	cout << "ton nom est " << nomcomplet << endl;

	return 0;



}
