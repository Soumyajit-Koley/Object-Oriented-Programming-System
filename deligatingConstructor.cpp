#include <iostream>
#include <vector>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string>ingredients;
    public:
        Chai(string name, int serve, vector<string>ingri){
            teaName = name;
            servings = serve;
            ingredients = ingri;
        }

        //deligating constructor

        Chai(string msg):Chai("Normal Tea", 1, {"Water","Tea","Sugar"}){}

        void display(){
            cout << "Tea Name is: " << teaName << endl;
            cout << "No. of Chai is: " <<servings << endl;
            cout << "Ingredients: " ;
            for(auto ingri : ingredients){
                cout<< ingri << ", ";
            }
            cout << endl;
        }
};

int main(){
    Chai chai("Quick Chai");
    chai.display();
    return 0;
}