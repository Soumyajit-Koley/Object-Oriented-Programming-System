#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string *teaName;
    int servings;
    vector<string> ingridents;

    void display()
    {
        cout << "Tea Name is:" << *teaName << endl;
        cout << "No. of Chai is:" << servings << endl;
        cout << "Ingridents: ";
        for (auto ingri : ingridents)
        {
            cout << ingri << ", ";
        }
        cout << endl<< "Display method called"<< endl << endl << endl;
    }

    // Default constructor
    Chai()
    {
        cout << "Default constructor called" << endl;
    }

    // param constructor
    Chai(string name, int serve, vector<string> ingri)
    {
        teaName = new string(name);
        servings = serve;
        ingridents = ingri;
        cout << "Pram constructor called" << endl;
    }

    // copy constructor
     Chai(const Chai &copyCons){
        teaName = new string(*copyCons.teaName);
        servings = copyCons.servings;
        ingridents = copyCons.ingridents;        
        cout << "copied constructor called" << endl;
    }

    ~Chai(){
        delete teaName;
        cout << "destructor called" << endl;
    }
};

int main()
{
    Chai chai("Masala Tea", 2, {"Water", "Tea", "Sugar", "Salt", "Masala"});
    chai.display();

    cout << "copied chai-------" << endl;

    Chai copiedChai = chai;
    copiedChai.display();

    *chai.teaName = "leamonTea";

    cout << "Modified Chai------" << endl;
    chai.display();

    cout << "Modified copied Chai------" << endl;
    copiedChai.display();

    return 0;
}