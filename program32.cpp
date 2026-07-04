#include<iostream>
using namespace std;

void CountEven(int iNo1,int iNo2)
{
    int iCnt = 0;

    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            cout<<iCnt<<"\t";
        }
    }

}

int main()
{
    int iNo1 = 0,iNo2 = 0;    
    cout<<"Enter Start Interval : \n";

    cin>>iNo1;
    cout<<"Enter End Interval : \n";
    cin>>iNo2;
    CountEven(iNo1,iNo2);
    return 0;
}