#include <iostream>
#include <string>

using namespace std;

class BankDetails{
    private:
        string accountHolder;
        long accountNum;
        double accountBalance;
    public:
        BankDetails(): accountHolder("Unknown"), accountNum(0),accountBalance(0.00){}
        BankDetails(string name, long accNum, double accBal):accountHolder(name), accountNum(accNum), accountBalance(accBal){}

        double getAccountBalance() const{
            return accountBalance;
        }

        void displayBalance() const{
            cout << "Account balance is: " << getAccountBalance() << endl;
        }

        void deposit(double _amount){
            if(_amount > 0)
                accountBalance+=_amount;
            else
                cout <<"Please enter valid amount" << endl;
        }

        void withdraw(double _amount){
            if(_amount <= accountBalance)
                accountBalance-=_amount;
            else
                cout <<"Please enter valid amount" << endl;
        }
};

int main(){
    BankDetails user("Soumyajit Koley", 12334505, 500);

    user.displayBalance();
    user.deposit(105);
    user.displayBalance();

    return 0;
}