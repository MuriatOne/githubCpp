
//structure est une sorte de tableau. Ça permet de créer d'un objet ayant plusieurs caractéristiques. Ici c'est un restangle avec la longueur des  deux cotés

struct Rectangle
{
    int largeur;
    int longueur;

};

#include <iostream>
//#include <tuple>

using namespace std;

int main()
{
    struct Rectangle x = {11,29}; // le variable x 
    struct Rectangle* p_x = &x; // le pointeur  correspondant qui loge le tableau x 

    //x.largeur = 4; //affectation par le variable 

    cout << "( par variable ) la largeur par défaut est " << x.largeur << endl;
    cout << "( par variable ) la longueur par défaut est " << x.longueur << endl;
   
    
    (*p_x).longueur = 79; //affectation par pointeur - première façon
    cout << "( par pointeur )la longueur affectee est " << (*p_x).longueur << endl;

    p_x -> largeur = 1200 ; //affectation par pointeur  - deuxième façon
    cout << "( par pointeur ) la largeur affectee est " << (*p_x).largeur << endl;

    return 0;

}
