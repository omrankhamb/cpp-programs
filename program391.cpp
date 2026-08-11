#include <iostream>
#include <stack>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    if (op == '*' || op == '/')
    {
        return 2;
    }

    return 0;
}

void help(string ans)
{
    stack<char> s;
    for (char t : ans)
    {

        if (t >= 'A' && t <= 'Z')
        {
            cout << t;
        }
        else if (t == '(')
        {
            s.push(t);
        }
        else if (t == ')')
        {
            while (s.top() != '(')
            {
                cout << s.top();
                s.pop();
            }

            if (!s.empty())
            {
                s.pop();
            }
        }
        else
        {
            while (!s.empty() && precedence(s.top()) >= precedence(t))
            {
                cout << s.top();
                s.pop();
            }
            s.push(t);
        }
    }   

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    string ans;

    cout << "Enter A String : " << endl;
    cin >> ans;

    help(ans);
    return 0;
}