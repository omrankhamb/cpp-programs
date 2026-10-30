#include<iostream>
#include<vector>
using namespace std;


template<class T>
void display(T Arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{

    int Arr[] = {9 , 8 , 1 , 2 , 3 , 5};
    int n = sizeof(Arr)/ sizeof(Arr[0]);

 
    display(Arr , n);
    char cArr[] = { 'l' , 'c' , 'a' , 'b' , 'j' , 'k'};
    n = sizeof(cArr)/ sizeof(cArr[0]);

    display(cArr , n);
    

    
    
    return 0;
}