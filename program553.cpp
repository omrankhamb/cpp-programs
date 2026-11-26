#include<iostream>
#include<fstream>

using namespace std;

class InsufficientBalance : public exception
{
    public :   
    
    double amount;

    InsufficientBalance(double amount)
    {
        this->amount = amount;
    }

    const char *what() const noexcept{
        return "Insufficient balance exception";
    }

    const double getBalance() const
    {
        return this->amount;
    }

};

int main()
{

    int balance = 10;

    try
    {
        if(balance < 20)
        {
            throw InsufficientBalance(balance);
        }
    }
    catch(InsufficientBalance &e)
    {
        std::cerr << e.what() << '\n';
        cout<<e.getBalance()<<endl;
    }
    
    return 0;
}