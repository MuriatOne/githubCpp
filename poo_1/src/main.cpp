
#include <iostream>
using namespace std;

class Perso
{
public:
    int xp;
    int gold;
    int power;


    void increaseGold(int po)
    {

        gold+=po;//   gold = golf + po; ici la fonction ne fait que calculer

    }
};


int main()
{
    Perso Wagimin;
    Perso Seger;

    Wagimin.xp = 0;
    Seger.gold = 11;
    
     
    cout << "gold de Seger est " << Seger.gold <<"\n"<< endl;

    Seger.increaseGold(30);

    cout << "gold de Seger apres etre augmente est " << Seger.gold << "\n" << endl;

    return 0;

}
