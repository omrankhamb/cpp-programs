#include<iostream>
using namespace std;

// Input  : 7 
// Output : a   b   c   d   e   f   g

void display(int iNo)
{
    char ch = '\0';
    int iCnt = 0;
    for(iCnt = 1,ch = 'a' ; iCnt <= iNo ; iCnt++,ch++)
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