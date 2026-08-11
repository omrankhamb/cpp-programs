#include<iostream>
#include<stack>
using namespace std;

// COde to Match paranthesis

bool MatchParanthesis(char Arr[])
{
    int i = 0 ;
    stack<char> obj;

    while(Arr[i] != '\0')
    {
        if(Arr[i] == '(' || Arr[i] == '[' || Arr[i] == '{')
        {
            obj.push(Arr[i]);
        }
        else
        {
            if(Arr[i] == ')' || Arr[i] == ']' || Arr[i] == '}')
            {
                if(obj.empty())
                {
                    return false;
                }
                char ch = obj.top();
                obj.pop();

                if((ch == '(' && Arr[i] != ')') || (ch == '[' && Arr[i] != ']') || (ch == '{' && Arr[i] != '}') )
                {
                    return false;
                }
            }
        }  
        i++; 
    }

    return obj.empty();
}

int main()
{

    char Arr[30];

    cout<<"Enter A string : ";
    scanf("%[^'\n']s",Arr);

    if(MatchParanthesis(Arr))
    {
        cout<<"pattern Matched\n";
    }
    else
    {
        cout<<"Pattern NOt matched\n";
    }
    
    return 0;
}