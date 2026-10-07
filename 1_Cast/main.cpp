
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    double val;
    cout << "donner une valeur" << endl;
    cin >> val;
    string p1 = typeid(val).name();
    cout << " la valeur avant cast est " << val <<"\n" << endl;

    cout << " le type de cette valeur avant est " << p1<< "\n" << endl;

    int num;
    num = static_cast<int>(val);

    cout << " la valeur apres cast est " << num << "\n" << endl;
    cout << " le type de cette valeur apres est " << typeid(num).name() << "\n" << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
