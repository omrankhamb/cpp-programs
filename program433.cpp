#include<iostream>
using namespace std;

class ParkingTicket
{
    private : 
        int ticketNumber;
        string vehicleNumber;
        int floorNumber;
        int spotNumber;
        string entryTime;

        public :
            ParkingTicket(int a , string b , int c , int d , string time)
            {
                this->ticketNumber = a;
                this->vehicleNumber = b;
                this->floorNumber = c;
                this->spotNumber = d;
                this->entryTime = time;
            }

            void display()
            {
                cout << "Ticket Numer : "<<this->ticketNumber<<endl;
                cout << "Vehicle Number : "<<this->vehicleNumber<<endl;
                cout << "Floor Number :"<<this->floorNumber<<endl;
                cout << "Spot Number : "<<this->spotNumber<<endl;
                cout << "Entry Time of Bus is :"<<this->entryTime<<endl;
            }
};

int main()
{
    ParkingTicket *obj = new ParkingTicket(59 , "MH2639" , 3 , 24 , "9:30");
    ParkingTicket *obj2 = new ParkingTicket(59 , "MH2639" , 3 , 24 , "9:30");

    obj->display();
    obj2->display();
    

    return 0;
}