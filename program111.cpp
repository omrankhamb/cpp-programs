#include<iostream>
using namespace std;


void display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        cout<<iCnt<<"\t";
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