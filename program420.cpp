#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {1,2,3,4,5,6,7};
    int Brr[] = {1,2,3,4,5,6,7};

    int *ptr[] = {Arr ,Brr};

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 7 ; j++)
        {
            printf("%d ",*(*(ptr+i) + j));
        }
        cout<<endl;
    }

    return 0;
}