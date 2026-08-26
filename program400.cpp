#include<iostream>
#include<list>
using namespace std;

class HashTable
{
    private :
        static const int SIZE = 10;
        list<pair<string,int>>table[SIZE];    // creating the list

        // actual logic behind the hashfuncion
        int hashfunction(string key)
        {
            int sum  = 0 ;

            for( char c : key)
            {
                sum += c;
            }

            return sum % SIZE;
        }

        void Insert(string key , int value)
        {
            int index = hashfunction(key);  // getting the hash function 
            table[index].push_back({key,value});
            cout<<"Inserted \""<<key<<"\"at bucket"<<index<<endl;
        }

        int Search(string key)
        {
            int index = hashfunction(key);
            if(auto pair : table[index])
            {   
                return pair.second;
            }
            return -1;
        }

        void Remove(string key)
        {
            int index= hashfunction(key);
            table[index].remove_if
        }
};

int main()
{
    return 0;
}