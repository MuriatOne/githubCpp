#include <iostream>

int main() {
   printf("\n");
    printf("---1\n");
    std::cout << std::boolalpha;
    int age = 20;
    std::cout << (age>= 18) << std::endl;
    printf("\n");
    
    printf("---2\n");
    age = 25;
    std::cout << (age>= 18) << std::endl;
    std::cout << (age>= 30) << std::endl;
    printf("\n");
    printf("---3\n");
    age = 18;
    int salaire = 2000;
    std::cout << (age>= 18 && age<= 30) << std::endl;
    std::cout << (age < 18 || salaire > 2500) << std::endl;
    std::cout << (salaire>= 2000) << std::endl;
    printf("\n");
    printf("---4---c'est un test---\n");
    std::cout << !(age == 15 && salaire > 5000) << std::endl;
    return 0;
}
