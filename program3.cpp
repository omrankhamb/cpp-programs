#include<iostream>
using namespace std;

int main()
{
    int iNo = 11;
    int iNo2 = 21;

    cout<<&iNo<<endl;
    cout<<&iNo2<<endl;

    printf("%d\n",iNo2 == iNo);
    printf("%d",iNo2=iNo);
    printf("%d",iNo2=iNo);
    return 0;
}