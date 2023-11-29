#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    string color;

public:
    Animal(const string& animalname, const string& animalcolor)
        : name(animalname), color(animalcolor) {}

    virtual ~Animal() {
        cout << "Destructor called\n";
    }

    virtual void display() = 0;   // pure virtual function
};

class Deer : public Animal {
private:
    bool hasAntlers;

public:
    Deer(const string& deerN, const string& deerC, bool antlers)
        : Animal(deerN, deerC), hasAntlers(antlers) {}

    void display(){
        cout << "Deer Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Has Antlers: " << (hasAntlers ? "yes" : "No") << endl;
    }
};

class Zebra : public Animal {
private:
    string stripePattern;

public:
    Zebra(const string& zebraN, const string& zebraC, const string& p)
        : Animal(zebraN, zebraC), stripePattern(p) {}

    void display() {
        cout << "Zebra Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Stripe Pattern: " << stripePattern << endl;
    }
};

void displayAll(Animal* a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i]->display();
        cout << "----------------------------------------" << endl;
    }
}

int main() {
    const int Size = 3;
    Animal* animalArray[Size];

    animalArray[0] = new Deer("deer", "Brown", true);
    animalArray[1] = new Zebra("khota", "Black White mixture", "horizantal");
    animalArray[2] = new Deer("deer1", "dark brown", false);

    displayAll(animalArray,Size);

//delete child class object
    for (int i = 0; i < Size; i++) {
        delete animalArray[i];
    }

    return 0;
}
