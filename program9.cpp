#include<iostream>
using namespace std;
// Array in c++

int main()
{
    int iLength = 0;
    cout<<"Enter Size Of array : ";

    cin>>iLength;   

    int *Arr = new int[iLength];
  //int *Arr  = (int*)malloc(sizeof(int)* iLength);

    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }



    return 0;
}