#include<iostream>
using namespace std;

class Circle;

class Rect {
private:
    float l, b;
    static int Rcount;

public:
    float a; // Make 'a' public to access it in compareArea function

    Rect(float length, float breath) {
        l = length;
        b = breath;
        a = l * b; // Calculate area
        Rcount++;
    }

    friend void compareArea(Rect& r, Circle& c);

    void showDetails() {
        cout << l << "\n" << b << "\n" << a << "\n" << endl;
    }

    static void printRcount() {
        cout << Rcount << endl;
    }
};

int Rect::Rcount = 0; // Initialize static member

class Circle {
private:
    float r, c;
    static int Ccount;

public:
    float a; // Make 'a' public to access it in compareArea function

    Circle(float radius) {
        r = radius;
        c = 6.28 * r;
        a = 3.14 * r * r; // Calculate area
        Ccount++;
    }

    friend void compareArea(Rect& r, Circle& c);

    void showDetails() {
        cout << r << "\n" << c << "\n" << a << "\n" << endl;
    }

    static void printCcount() {
        cout << Ccount << endl;
    }
};

int Circle::Ccount = 0; // Initialize static member

void compareArea(Rect& r, Circle& c) {
    if (r.a > c.a) {
        cout << "Rectangle is bigger than Circle" << endl;
    } else {
        cout << "Circle is bigger than Rectangle" << endl;
    }
}

int main() {
    Rect r(10, 20);
    Circle c(5);
    r.showDetails();
    c.showDetails();
    Rect::printRcount();
    Circle::printCcount();
    compareArea(r, c);
}