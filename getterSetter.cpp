#include <iostream>
#include <vector>
// using namespace std;

class Chai{
    private:
        std::string teaName;
        int servings;
        std::vector<std::string>ingridients;
    public:
        Chai(){
            teaName = "Unknown";
            servings = 1;
            ingridients = {"Water", "Tea Leaves"};
        }

        Chai(std::string name, int serve, std::vector<std::string>ingri){
            teaName = name;
            servings = serve;
            ingridients = ingri;
        }

        //getter
        std::string getTeaName(){
            return teaName;
        }

        int getServings(){
            return servings;
        }

        std::vector<std::string> getIngridients(){
            return ingridients;
        }

        //setter

        void setTeaName(std::string name){
            //here we can write logic
            teaName = name;
        }
        void setServings(int serve){
            //here we can write logic
            servings = serve;
        }
        void setIngridients(std::vector<std::string>ingri){
            //here we can write logic
            ingridients = ingri;
        }

        void display();
};

void Chai::display(){
    std::cout << "Tea name is: " << teaName << std::endl;
    std::cout << "Servings:  " << servings << std::endl;
    std::cout << "Ingridients: ";
    for(auto i:ingridients){
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}

int main(){
    Chai chai;
    chai.setTeaName("Malai Tea");
    chai.setServings(4);
    chai.setIngridients({"Water","Tea","Malai","Sugar"});

    std::cout << chai.getTeaName() << std::endl;
    std::cout << chai.getServings() << std::endl;
    chai.getIngridients() ;

    chai.display();

    return 0;
}
