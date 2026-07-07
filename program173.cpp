#include<iostream>
using namespace std;

class book
{

    public :
        int i;
        int y;
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
    
    for(int i = 0 ; i< 4 ; i++)
    {
        cout<<&bobj[i].i<<"\n";
    }
    return 0;
}