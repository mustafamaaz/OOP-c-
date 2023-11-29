#include <iostream>
#include <string>

using namespace std;

class Brain {
private:
    string state;
public:
    Brain() {
        state = "awake";
    }
    string getState() {
        return state;
    }
    void setState(string newState) {
        state = newState;
    }
};

class Heart {
private:
    int rate;
public:
    Heart() {
        rate = 88;
    }
    int getRate() {
        return rate;
    }
    void setRate(int rate) {
       this->rate = rate;
    }
};

class Legs {
private:
    int steps;
public:
    Legs() {
        steps = 19;
    }
    int getSteps() {
        return steps;
    }
    void setSteps(int steps) {
       this-> steps = steps;
    }
    void walk() {
        steps++;
    }
};

class Person {
private:
    string name;
    int age;
    Brain brain;
    Heart heart;
    Legs legs;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getBrainState() {
        return brain.getState();
    }
    void setBrainState(string newState) {
        brain.setState(newState);
    }
    int getHeartRate() {
        return heart.getRate();
    }
    void setHeartRate(int newRate) {
        heart.setRate(newRate);
    }
    int getSteps() {
        return legs.getSteps();
    }
    void setSteps(int newSteps) {
        legs.setSteps(newSteps);
    }
    void walk() {
        legs.walk();
    }
};

int main() {
    Person maaz("mustafa", 20);

    cout << "Name: " << maaz.getName() << endl;
    cout << "Age: " << maaz.getAge() << endl;

    cout << "Brain state: " << maaz.getBrainState() << endl;
    maaz.setBrainState("asleep");
    cout << "Brain state: " << maaz.getBrainState() << endl;

    cout << "Heart rate: " << maaz.getHeartRate() << endl;
    maaz.setHeartRate(90);
    cout << "Heart rate: " << maaz.getHeartRate() << endl;

    cout << "Steps: " << maaz.getSteps() << endl;
    maaz.walk();
    maaz.walk();
    cout << "Steps: " << maaz.getSteps() << endl;

    return 0;
}
