#include<iostream>
using namespace std;

// Input  : 7 
// Output : A       *       B       *       C       *       D

void display(int iNo)
{
    char ch = '\0';
    int iCnt = 0;
    for(iCnt = 1,ch = 'A' ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            cout<<"*\t";
        }
        else
        {
            cout<<ch<<"\t";
            ch++;
        }
        
    }

}

int main()
{
    int iValue = 0;

    cout<<"Entet The Number Of Elements : ";
    cin>>iValue;

    display(iValue);

    return 0;
}