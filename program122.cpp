#include<iostream>
using namespace std;

// Input  : 7 
// Output : A       b       C       d       E       f       G

void display(int iNo)
{
    char ch = '\0';
    char ch2 = '\0';
    int iCnt = 0;
    for(iCnt = 1,ch = 'A',ch2 = 'a' ; iCnt <= iNo ; iCnt++,ch++,ch2++)
    {
        if(iCnt % 2 == 0)
        {
            cout<<ch2<<"\t";
        }
        else
        {
            cout<<ch<<"\t";
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