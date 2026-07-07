#include<iostream>
using namespace std;

class book
{

    public :
        book()
        {
            cout<<"Inside Constructor\n";
        }

        void get_details()
        {
            cout<<"Hello World\n";
        }
};

int main()
{
    book *bobj = new book[4];    
    return 0;
}