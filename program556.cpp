#include<iostream>
#include<fstream>


using namespace std;

void customHandler()
{
    cout<<"My custome hancler"<<endl;
    exit(0);
}


int main()
{


    set_terminate(customHandler);

    try
    {
        throw 10;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
 
    
    return 0;
}