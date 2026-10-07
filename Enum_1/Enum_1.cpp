
#include <iostream>
using namespace std;

enum spec {P8104, P8105, P3600};

int main()
{
    spec UgPipe0;
    spec UgPipe1;
    spec UgPipe11;
    UgPipe0 = P8104;
    UgPipe1 = P8105;
    UgPipe11 = P3600;

    cout << "P8104 est une spec dont le numero est " << UgPipe0 << "\n" << endl;
    cout << "P8105 est une spec dont le numero est " << UgPipe1 << "\n" << endl;
    cout << "P3600 est une spec dont le numero est " << UgPipe11 << "\n" << endl;
   
    if (UgPipe11 == P3600)
    {
        cout << "le pipe "<<UgPipe11<<" est en acier " << endl;

    }
    else
        cout << "le pipe "<< UgPipe11 <<" est en grp " << endl;

        return 0;

}
