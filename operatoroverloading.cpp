#include <iostream>
using namespace std;

class Complex
{
    private:
        int a, b;

    public:
        Complex() : a(0), b(0) {}
        Complex(int _value, int _value_) : a(_value), b(_value_) {}

        int getA(){
            return a;
        }

        int getB(){
            return b;
        }

        Complex operator +(Complex _operand){
            Complex temp;
            temp.a = a + _operand.a;
            temp.b = b + _operand.b;
            return temp;
        }

        ~Complex(){}
};

class Integer{
    private:
        int a;
    public:
        Integer():a(0){}
        Integer(int _value):a(_value){}

        int getA(){
            return a;
        }

        Integer operator ++(){
            Integer temp;
            temp.a = a + 1;
            return temp;
        }

        ~ Integer(){}
};

int main(){
    Complex number_0(1,1), number_1(2,5), number_2(4,5), number_3;
    number_3 = number_0 + number_1 + number_2;

    cout << number_3.getA() << number_3.getB() << endl;


    Integer num_1(10);
    ++num_1;

    cout << num_1.getA();
    return 0;
}