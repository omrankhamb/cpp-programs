#include<iostream>
using namespace std;

class Builder;

class ParkingTicket
{
    private  : 
        int ticketNumber;
        string vehicleNumber;
        int floorNumber;
        int spotNumber;
        string entryTime;

    public :

        ParkingTicket (Builder *builder);
        
        public :
            // ParkingTicket(int a , string b , int c , int d , string time)
            // {
            //     this->ticketNumber = a;
            //     this->vehicleNumber = b;
            //     this->floorNumber = c;
            //     this->spotNumber = d;
            //     this->entryTime = time;
            // }

        

            void display()
            {
                cout << "Ticket Numer : "<<this->ticketNumber<<endl;
                cout << "Vehicle Number : "<<this->vehicleNumber<<endl;
                cout << "Floor Number :"<<this->floorNumber<<endl;
                cout << "Spot Number : "<<this->spotNumber<<endl;
                cout << "Entry Time of Bus is :"<<this->entryTime<<endl;
            }
};

class Builder
{
    public : 
        int ticketNumber;
        string vehicleNumber;
        int floorNumber;
        int spotNumber;
        string entryTime;   

    public :
    Builder& setTicketNumber(int ticketNumber)
    {
        this->ticketNumber = ticketNumber;
        return *this;
    }

    Builder& setVehicleNumber(string vehilceNumber)
    {
        this->vehicleNumber = vehilceNumber;
        return *this;
    }

    Builder& setFloorNumber(int floorNumber)
    {
        this->floorNumber = floorNumber;
        return *this;
    }

    Builder& setspotNumber(int spotNumber)
    {
        this->spotNumber = spotNumber;
        return *this;
    }

    Builder& setentryTime(string entryTime)
    {
        this->entryTime = entryTime;
        return *this;
    }

    ParkingTicket* build()
    {
        return new ParkingTicket(this);
    }
};

ParkingTicket :: ParkingTicket(Builder *builder)
{
            this->ticketNumber = builder->ticketNumber;
            this->vehicleNumber = builder->vehicleNumber;
            this->floorNumber = builder->floorNumber;
            this->spotNumber = builder->spotNumber;
            this->entryTime = builder->entryTime;

}

int main()
{
   
    Builder b;
    ParkingTicket *obj = NULL;

    obj = b.setTicketNumber(11)
    .setVehicleNumber("MH1234")
    .setFloorNumber(3)
    .setspotNumber(2)
    .setentryTime("9:30")
    .build();


    obj->display();

    delete obj;
    return 0;
}