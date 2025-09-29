/* Online C++ compiler to run C++ program online
Description: A program to illustrate constructors and destructors used to output the brand, model, price and mileage of a car.
Name: Geoffrey Njenga Wanene
Reg no:Bcs-03-0006/2025
*/
#include <iostream>
using namespace std;

class Car{ //the class
    public: //access specifier
    string brand; //attribute
    string model; //attribute
    float price; //attribute
    int mileage; //attribute
    Car(string w, string x, float y, int z) { //constructor with parameters
    brand = w;
    model = x;
    price = y;
    mileage = z;
    }
    
~Car(){
    cout<<"DESTRUCTOR!"<<endl;
}
};
int main() {
    //create car obects and call the constructor with different values
    Car display("TOYOTA", "COROLLA", 20000, 5000);
    /*
    Car display2("BMW", "X5", 30000, 45000);
    Car display3("FORD", "MUSTANG", 40000, 35000);
    */
    
    //print values
    cout<<display.brand<<" "<<display.model<<" "<<display.price<<" "<<display.mileage<<"\n";
    /*
    cout<<display2.brand<<" "<<display2.model<<" "<<display2.price<<" "<<display2.mileage<<"\n";
    cout<<display3.brand<<" "<<display3.model<<" "<<display3.price<<" "<<display3.mileage<<"\n";
    */
    return 0;
}
