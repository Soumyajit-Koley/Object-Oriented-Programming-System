#include <bits/stdc++.h>
using namespace std;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingridents;

    void displayChai();

    //default constructor
    

    // Chai(){
    //     teaName = "Unknown Tea";
    //     servings = 1;
    //     ingridents = {"Water", "Tea", "Sugar"};
    //     cout << "constructor called" << endl;
    // }

    //parameter constructor
    Chai(string teaN, int serve, vector<string> ingri){
        teaName = teaN;
        servings = serve;
        ingridents = ingri;
        cout << "param constructor called" << endl;
    }
};

void Chai::displayChai(){
    cout << "Tea Name is:" << teaName << endl;
    cout << "No. of Chai is:" <<servings << endl;
    cout << "Ingridents: " ;
    for(auto ingri : ingridents){
        cout<< ingri << ", ";
    }
    cout << endl;
}

int main()
{
    Chai chai("Masala Tea", 2, {"Water", "Tea", "Sugar","Salt", "Masala"});
    // chai.teaName = "Lemon Tea";
    // chai.servings = 2;
    // chai.ingridents= {"Water", "Tea", "Sugar", "Lemon", "Salt"};


    chai.displayChai();
    return 0;
}