
#include <iostream>
#include <string>

using namespace std;


int main()
{   

    string repA;
    string repB;
    string repC;
    char rep;

    repA = "vous etes un homme";
    repB = "vous etes une femme";
    repC = "vous etes un animal de companie";

    cout << "qui etes-vous, choisissez parmi les reponse suivantes ? " << endl;
    cout << "tapez A si " << repA << endl;
    cout << "tapez B si " << repB << endl;
    cout << "tapez C si " << repC << endl;

    cin >> rep;

        //Séquence à respecter pour allcation de mémoire
    string *p_rep(0); // allocation d'une mémoire


    //Séquence où le pointeur du repA est désormais p_rep
    //Séquence où le pointeur du repB est désormais p_rep
    //Séquence où le pointeur du repC est désormais p_rep
    switch (rep)
    {
    case 'A':
        p_rep = &repA;
        break;
    case 'B':
        p_rep = &repB;
        break;
    case 'C':
        p_rep = &repC;
        break;

    }

    cout << "vous avez choisi la reponse : " << *p_rep << endl;
    return 0;

}
