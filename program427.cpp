#include<iostream>
using namespace std;

// Builder Pattern starting

enum vehicleType
{
    BIKE,
    CAR,
    TRUCK
};




int main()
{
    vehicleType type = CAR;
    cout<<type;

    vehicleType obj = TRUCK;
    cout<<obj;
    
    return 0;
}