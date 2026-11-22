#include<iostream>
#include<exception>
using namespace std;


class InsufficientBalance : public exception
{
    public : 
        int amount;
        InsufficientBalance(int t)
        {
            this->amount = t;
        }

        const char* what() const noexcept override {
            return "The balance is insufficient \n";
        }

        int required() const
        {
            return this->amount;
        }
};

int main()
{
    try
    {
        throw InsufficientBalance(400);
    }
    catch(const InsufficientBalance& e)
    {
        cout<<e.what();
        cout<<"the money required is ; "<<e.required()<<endl;
    }
    
}