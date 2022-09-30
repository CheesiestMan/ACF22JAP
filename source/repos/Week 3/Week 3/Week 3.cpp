// Week 3.cpp : Defines the entry point for the application.
//

#include<iostream>
#include "Week 3.h" 

using namespace std;

namespace CST8219 {


    class Vehicle {
    private:
        int numWheels;
        int numDoors;

    public:
        Vehicle(int w, int d)
        {
            numWheels = w;
            numDoors = d;
            cout << "in constructor with 2 parameters" << endl;


        }
        Vehicle(int w) : Vehicle(w, 2)
        {

            cout << "in constructor with 1 parameters, wheels" << w << endl;
        }


        Vehicle() : Vehicle(4)
        {
            cout << "in constructor with 0 parameters" << endl;

        }

        ~Vehicle()
        {
            cout << "In destructor" << endl;

        }

    };
};


int main(int argc, char** argv)
{
    CST8219::Vehicle veh1;
    CST8219::Vehicle veh2(4);
    CST8219::Vehicle veh3(4, 2);

    cout << "Vehicle 1 takes" << sizeof(veh1) << endl;
    cout << "Vehicle 2 takes" << sizeof(veh2) << endl;
    cout << "Vehicle 3 takes" << sizeof(veh3) << endl;

    CST8219::Vehicle myVehicle;
    cout << "I made a vehicle!" << endl;

    char quit = 0;
    bool repeat = true;

    while (repeat = true) {
        do
        {

            CST8219::Vehicle* pVehicle{};

            int d, w;
            cout << "enter number of doors" << endl;
            cin >> d;

            if (d <= 0) {

                while (d <= 0) {
                    cout << "Error Please type a number larger than 0!" << endl;
                    cout << "enter number of doors again" << endl;
                    cin >> d;
                }
            }

            else {

            }

            cout << "enter number of wheels" << endl;
            cin >> w;


            if (w <= 0) {

                while (w <= 0) {
                    cout << "Error Please type a number larger than 0!" << endl;
                    cout << "enter number of wheels again" << endl;
                    cin >> w;
                }
            }
            else

                pVehicle = new CST8219::Vehicle(d, w);
            cout << "do you want to quit ? ";
            cin >> quit;




            pVehicle->~Vehicle();
            delete pVehicle;

        } while (quit != 'q');

        return 0;
    }
};
