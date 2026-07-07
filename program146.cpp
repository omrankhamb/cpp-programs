#include<iostream>
using namespace std;

/*
    iRow = 6 
    iCol = 6

    *
    *       *       *
    *       *       *       *
    *       *       *       *       *
    *       *       *       *       *       *
    
*/

void display(int iRow,int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0';
    
    if(iRow != iCol)
    {
        cout<<"Invalid input : \n";
        return;
    }
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(i>=j)
            {
                cout<<"*    ";
            }
            else{
                cout<<"     ";
            }
            
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