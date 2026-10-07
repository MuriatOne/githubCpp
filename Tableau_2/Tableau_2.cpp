

#include <iostream>
#include<array>

using namespace std;

int main()
{
    //exemple un tableau de pression de service dans un intallation
    //int pression[12] = { 2,5,8,9,12,80,5,6,78,19,45,90 };
    array<int,12> pression = { 2,5,8,9,12,80,5,6,78,19,45,90 };
    int NbPipHp = 0;

    for (int i = 0; i < pression.size(); i++)
    {
        if (pression[i] >= 11)
        {
            NbPipHp++;
        }

    }
    cout << "Dans cet installation il y a " << NbPipHp << " pipes de haute pression - Pression > 11" << endl;
    cout << "il y a " << pression.size() << " donnes de pression\n" << endl;
    return 0;

}
