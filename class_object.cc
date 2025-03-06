#include <bits/stdc++.h>
using namespace std;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingridents;

    void displayChai();
};

void Chai::displayChai(){
    cout << "Tea Name is:" << teaName << endl;
    cout << "No. of Chai is:" <<servings << endl;
    cout << "Ingridents: " ;
    for(auto ingri : ingridents){
        cout<< ingri << " ";
    }
    cout << endl;
}

int main()
{
    Chai chai;
    chai.teaName = "Lemon Tea";
    chai.servings = 2;
    chai.ingridents= {"Water,", "Tea,", "Sugar,", "Lemon,", "Salt"};

    chai.displayChai();
    return 0;
}