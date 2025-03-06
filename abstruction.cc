#include <iostream>
#include <string>
using namespace std;

//abstructed class
class Tea{
    public:
        virtual void prepareIngredients() = 0; //pure virtual function
        virtual void brew() = 0; //pure virtual function
        virtual void serve() = 0; //pure virtual function
    
        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

//derived class
class GreenTea:public Tea{
    public:
        void prepareIngredients() override{
            cout << "Green Tea leaves and water prepared" << endl;
        }
        void brew() override{
            cout << "Green Tea brewed" << endl;
        }
        void serve() override{
            cout << "Green Tea served" << endl;
        }
};

class MasalaTea : public Tea{
    public:
        void prepareIngredients() override{
            cout << "Masala Tea prepared"  << endl;
        }
        void brew() override{
            cout << "Masala Tea brewed" << endl;
        }
        void serve() override {
            cout << "Masala Tea served" << endl;
        }
};

int main(){
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}