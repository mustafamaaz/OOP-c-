#include <iostream>

using namespace std;

class Boat {
protected:
    int boatLength;
public:
    Boat(int length) : boatLength(length) {}
    void swim() {
        cout << "I am swimming" << endl;
    }
};

class Plane {
protected:
    int maxAltitude;
public:
    Plane(int altitude) : maxAltitude(altitude) {}
    void fly() {
        cout << "I am flying" << endl;
    }
};

class Skimmer : protected Boat, protected Plane {
private:
    int numPassengers;
public:
    Skimmer(int length, int altitude, int passengers)
        : Boat(length), Plane(altitude), numPassengers(passengers) {}

    void swimAndFly() {
        swim();
        fly();
    }

    void display() {
        cout << "Boat Length: " << boatLength << endl;
        cout << "Max Altitude: " << maxAltitude << endl;
        cout << "Number of Passengers: " << numPassengers << endl;
    }
};

int main() {

    Skimmer skimmer(10, 5000, 4);
   
    skimmer.display();

    skimmer.swimAndFly();

    return 0;
}