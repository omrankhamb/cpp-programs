#include <iostream>
#include <vector>
using namespace std;

// Generic function
template <typename T>
int countElements(const vector<T>& arr, bool (*property)(T))
{
    int count = 0;

    for (T element : arr)
    {
        if (property(element))
            count++;
    }

    return count;
}

bool isEven(int n)
{
    return n % 2 == 0;
}

bool isOdd(int n)
{
    return n % 2 != 0;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool isPalindrome(int n)
{
    int original = n;
    int reverse = 0;

    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return original == reverse;
}

int main()
{
    vector<int> numbers = {11, 22, 33, 44, 131, 17, 121, 50};

    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Count Even Numbers\n";
        cout << "2. Count Odd Numbers\n";
        cout << "3. Count Prime Numbers\n";
        cout << "4. Count Palindrome Numbers\n";
        cout << "5. Display Elements\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Even Numbers Count = "
                     << countElements(numbers, isEven)
                     << endl;
                break;

            case 2:
                cout << "Odd Numbers Count = "
                     << countElements(numbers, isOdd)
                     << endl;
                break;

            case 3:
                cout << "Prime Numbers Count = "
                     << countElements(numbers, isPrime)
                     << endl;
                break;

            case 4:
                cout << "Palindrome Numbers Count = "
                     << countElements(numbers, isPalindrome)
                     << endl;
                break;

            case 5:
                cout << "Elements: ";
                for(int x : numbers)
                    cout << x << " ";
                cout << endl;
                break;

            case 0:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 0);

    return 0;
}