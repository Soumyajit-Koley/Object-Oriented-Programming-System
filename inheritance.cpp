#include <iostream>
using namespace std;


//base / parent / original / main class
class Tea {
    protected:
        int servings;
        string teaName;
    public:
        Tea(string name, int serve): servings(serve),teaName(name){
            cout << "Tea constructor called" << endl;
        }
        virtual void brew() const {
            cout << "Brewing " << teaName << "with generic method" << endl;
        }
        virtual void serve() const {
            cout << "Serving " << servings << "cup of tea" << endl;
        }
        virtual ~Tea(){
            cout << "virtual tea desturctor called" << endl;
        }
};

//child class

class GreenTea : public Tea{
    public:
        GreenTea(int serve):Tea("Green Tea", serve){
            cout << "Green tea constructor called" << endl;
        }
        void brew() const override{
            cout << "Brewing " << teaName << endl;
        }
        int getServings(){
            return servings;
        }
        ~GreenTea(){
            cout << "Green tea destructor called " << endl;
        }
};



int main(){
    GreenTea order_one(2);
    cout << "No of servings is " << order_one.getServings() << endl; 
    return 0;
}