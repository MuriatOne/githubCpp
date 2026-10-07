#include <iostream>
#include <vector>

using namespace std;

int main()

{

    vector <double> temperature = {10.3, 17.7, -3.2, 10.0};
    cout<<"La valeur de la température à l'index 1 est " << temperature.at(1)<<endl;
    cout<<"La taille de la liste de Temperatures avant : " <<temperature.size()<<endl;
    //ajouter une valeur à la fin de la liste

    temperature.push_back(16.5);
    cout<<"La taille de la liste de Temperatures apres : " <<temperature.size()<<endl;
  

}