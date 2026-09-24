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

class vehicleFactory
{
    public :
        static Vehicle* newVehicle(vehicleType type , string number)
        {
            switch (type) 
            {
                case BIKE :
                    return new Bike(number);
                    break;

                case CAR :
                    return new Car(number);
                    break;

                case TRUCK :
                    return new Truck(number);
                    break;
            }
        }

};



int main()
{
    // creting Factory Pattern

    Vehicle *obj = vehicleFactory :: newVehicle(CAR , "MH2341");
    Vehicle *obj2 = vehicleFactory :: newVehicle(BIKE ,"MH2731");
    Vehicle *obj3 = vehicleFactory :: newVehicle (TRUCK , "MH2639");

    obj->display();
    obj2->display();
    obj3->display();


    
    
    return 0;
}