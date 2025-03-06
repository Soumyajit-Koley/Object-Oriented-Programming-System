#include <iostream>
#include <vector>
using namespace std;
namespace atom{
    class Chai{
        private:
            string teaName;
            int servings;
        public:
            Chai(){
                teaName = "Unknow";
                servings = 0;
            }
            Chai(string name, int serve): teaName(name), servings(serve){};
            void const display();

            //getter for compare chai servings
            int getServings(){
                return servings;
            }

            //compare function using friend function

            friend bool compareChai(const Chai& _object, Chai& __object);
        };
        bool compareChai(const Chai& _object, Chai& __object){
            return _object.servings > __object.servings;
        }
        void const Chai::display(){
            cout << "Tea name is: " << teaName << endl;
            cout << "No of servings is: " << servings << endl;
        }
};


int main(){
    atom::Chai lemonChai("Lemon Tea", 2);
    atom::Chai gingerChai("Ginger Tea", 1);
    lemonChai.display();
    gingerChai.display();

    //compare chai servings using getter method 
    // if(lemonChai.getServings() > gingerChai.getServings()){
    //     cout << "Serving of lemon chai is greater" << endl;
    // }else{
    //     cout << "Serving of lemon chai is lesser" << endl;
    // }

    //using friend function
    if( atom::compareChai(lemonChai, gingerChai)){
        cout << "Serving of lemon chai is greater" << endl;
    }else{
        cout << "Serving of lemon chai is lesser" << endl;
    }
    return 0;
}