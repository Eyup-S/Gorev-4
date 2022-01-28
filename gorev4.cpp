#include <iostream>
#include <string>


typedef struct Country;
typedef struct Province;
struct Country{
    std::string name;
    Province* Capital;

};
struct Province {
    std::string name;
    Country* domain;
};


int main(){

    Country tr;
    tr.name= {"Turkey"};
    Province a = {"Istanbul"};
    a.domain = &tr;
    Province b= {"Ankara"};
    b.domain = &tr;
    tr.Capital = &b;
    std::cout << a.domain -> Capital -> name << std::endl;

    return 0;
}


