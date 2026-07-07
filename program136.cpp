#include<iostream>
using namespace std;

/*
    iRow = 4
    iCol = 4

    4   4   4   4
    3   3   3   3
    2   2   2   2
    1   1   1   1
    
*/

void display(int iRow,int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0';
    
    for(int i = iRow ; i >= 1 ; i--)
    {
        for(j = iCol;j >= 1 ; j--)
        {
            cout<<i<<"      ";
        }
        cout<<"\n";
    }

}

int main()
{
    int iValue = 0;
    int iValue2 = 0;

    cout<<"Entet The Number of Rows and column :";
    cin>>iValue;
    cin>>iValue2;

    display(iValue,iValue2);

    return 0;
}