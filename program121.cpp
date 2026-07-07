#include<iostream>
using namespace std;

// Input  : 7 
// Output : A       2       C       4       E       6       G

void display(int iNo)
{
    char ch = '\0';
    int iCnt = 0;
    for(iCnt = 1,ch = 'A' ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            cout<<iCnt<<"\t";
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