#include<iostream>
using namespace std;

// Input  : 7 
// Output :*     *     *     #     #     #     *     *     *     #     #

void display(int iNo)
{
    int icnt = 0;
        
        while (icnt != iNo) 
        {
            for(int i = 1 ; i <= 3 ; i++){
               cout<<"*     ";
                icnt++;
                if(icnt >= iNo)
                {
                    
                    break;
                }
            }

            if(icnt >= iNo)
                {
                    
                    break;
                }

            
            for(int i = 1 ; i <= 3 ; i++){
                cout<<"#     ";
                icnt++;
                if(icnt >= iNo)
                {
                    break;
                }
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