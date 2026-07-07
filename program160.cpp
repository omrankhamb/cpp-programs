#include<iostream>
using namespace std;

/*
    iRow = 5 
    iCol = 5

                    *
                  * *
                * * *
              * * * *
            * * * * *
                            

*/

void display(int iRow,int iCol)
{
    int i = 0,k = 0;
    int j = 0;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= (iRow - i) ; j++)
        {
            cout<<"  ";
        }

        for(k = 1 ; k <= i ; k++)
        {
            cout<<"* ";
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