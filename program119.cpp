#include<iostream>
using namespace std;

// Input  : 5
// Output :A       B       C       D       E

void display(int iNo)
{
    char ch = '\0';
    int iCnt = 0;
    for(iCnt = 1,ch = 'A' ; iCnt <= iNo ; iCnt++,ch++)
    {
        cout<<ch<<"\t";
        
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