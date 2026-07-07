#include<iostream>
using namespace std;

// Input  : 5 
// Output : *1*     *2*     *3*     *4*     *5*

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        cout<<"*"<<iCnt<<"*\t";
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