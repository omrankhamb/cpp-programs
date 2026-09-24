#include<iostream>
using namespace std;

// Builder Pattern starting

enum vehicleType
{
    BIKE,
    CAR,
    TRUCK
};

// Inheritance an pure virtual function 

class Vehicle
{
    private :
    string number;

    public :
    Vehicle(string number)
    {
        this->number  = number;
    }

    string getNumber()
    {
        return this->number;
    }

    virtual void display() = 0;

};

class Bike : public Vehicle
{
    public : 
        Bike(string number) : Vehicle(number)
        {
            cout  << "Bike is created"<<endl;
        }

        // @override // pure vitual function
        // virtual table
        void display()
        {
            cout<< "BIKE : "<<this->getNumber()<<endl;
        }
};

class Car : public Vehicle
{
    public :
        Car (string number) : Vehicle (number)
        {
            cout << "CAR is created"<<endl;
        }

        void display()
        {
            cout<<"CAR : "<<this->getNumber()<<endl;
        }
};

class Truck : public Vehicle
{
    public : 
        Truck (string number): Vehicle(number )
        {
            cout<<"Truck is created"<<endl;
        }

        void display()
        {
            cout<<"Truck : "<<this->getNumber()<<endl;
        }
};



int main()
{
    Vehicle *vehicle = new Truck("121");
    vehicle->display();
    
    
    return 0;
}