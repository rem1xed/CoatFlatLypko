


#include <iostream>
#include <string>

using namespace std;

//COAT: 
//
//class Overcoat {
//private:
//    string type;
//    double price;
//
//public:
//    Overcoat(string t, double p) : type(t), price(p) {}
//
//    bool operator==(const Overcoat& other) const {
//        return type == other.type;
//    }
//
//    Overcoat& operator=(const Overcoat& other) {
//        if (this != &other) {
//            type = other.type;
//            price = other.price;
//        }
//        return *this;
//    }
//
//    bool operator>(const Overcoat& other) const {
//        return price > other.price;
//    }
//
//    void display() const {
//        cout << "Type: " << type << ", Price: " << price << endl;
//    }
//};
//
//void main() {
//    Overcoat coat1("Winter", 100.0);
//    Overcoat coat2("Winter", 120.0);
//    Overcoat coat3("Spring", 80.0);
//
//    cout << "Coat 1: ";
//    coat1.display();
//    cout << "Coat 2: ";
//    coat2.display();
//    cout << "Coat 3: ";
//    coat3.display();
//
//    if (coat1 == coat2) {
//        cout << "Coat 1 and Coat 2 are of the same type." << endl;
//    }
//    else {
//        cout << "Coat 1 and Coat 2 are of different types." << endl;
//    }
//
//    if (coat1 > coat3) {
//        cout << "Coat 1 is more expensive than Coat 3." << endl;
//    }
//    else {
//        cout << "Coat 1 is not more expensive than Coat 3." << endl;
//    }
//
//    coat1 = coat3;
//    cout << "After assignment:" << endl;
//    cout << "Coat 1: ";
//    coat1.display();
//
//
//}

//FLAT: 

//class Flat {
//private:
//    string address;
//    double area;
//    double price;
//
//public:
//    
//    Flat(string addr, double a, double p) : address(addr), area(a), price(p) {}
//
//    bool operator==(const Flat& other) const {
//        return area == other.area;
//    }
//
//    Flat& operator=(const Flat& other) {
//        if (this != &other) {
//            address = other.address;
//            area = other.area;
//            price = other.price;
//        }
//        return *this;
//    }
//
//
//    bool operator>(const Flat& other) const {
//        return price > other.price;
//    }
//
//    void display() const {
//        cout << "Address: " << address << ", Area: " << area << " sq.m., Price: " << price << endl;
//    }
//};
//
//void main() {
//    
//    Flat flat1("123 Main St", 80.0, 100000.0);
//    Flat flat2("456 Elm St", 90.0, 120000.0);
//    Flat flat3("789 Oak St", 80.0, 110000.0);
//
//    cout << "Flat 1: ";
//    flat1.display();
//    cout << "Flat 2: ";
//    flat2.display();
//    cout << "Flat 3: ";
//    flat3.display();
//
//    if (flat1 == flat3) {
//        cout << "Flat 1 and Flat 3 have the same area." << endl;
//    }
//    else {
//        cout << "Flat 1 and Flat 3 have different areas." << endl;
//    }
//
//
//    if (flat2 > flat3) {
//        cout << "Flat 2 is more expensive than Flat 3." << endl;
//    }
//    else {
//        cout << "Flat 2 is not more expensive than Flat 3." << endl;
//    }
//
//    flat1 = flat2;
//    cout << "After assignment:" << endl;
//    cout << "Flat 1: ";
//    flat1.display();
//
//    
//} 
