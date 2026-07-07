#include<iostream>
using namespace std;

/*
    iRow = 4
    iCol = 4

    1   2   3   4 
    1   2   3   4 
    1   2   3   4 
    1   2   3   4
    
*/

void display(int iRow,int iCol)
{
    int i = 0 , j = 0;
    
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = 1 ; j <= iCol ; j++)
        {
           cout<<j<<"     ";
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