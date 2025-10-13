/*
Description: A C++ program that creates a simple library management system and outputs the given library member details.

Name:Geoffrey Njenga Wanene

Reg_no:BCS-03-0006/2025
*/

#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived class Library Member
class Library_member : public Person {
private:
    int Member_id, Books_borrowed;

public:
    Library_member(string n, int M_id, int B_borrowed) {
        setName(n);
		Member_id = M_id;
        Books_borrowed = B_borrowed;
    }

    int getMemberID() {
        return Member_id;
    }

    double getBooksBorrowed() {
        return Books_borrowed;
    }
};

// Further derived class Premium Member
class Premium_member : public Library_member {
private:
    double Membership_fee;

public:
    Premium_member(string n, int M_id, int B_borrowed, double fee)
        : Library_member(n, M_id, B_borrowed) {
        Membership_fee = fee;
    }

    double getMembershipFee() {
        return Membership_fee;
    }
};

int main() {
    // Creating an object of Premium_member
    Premium_member Lib_member("John  McConaughey", 930525006, 8, 100.0);

    // Displaying account details
    cout << "Library Member: " << Lib_member.getName() << endl;
    cout << "Member ID: " << Lib_member.getMemberID() << endl;
    cout << "Books Borrowed: " << Lib_member.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << Lib_member.getMembershipFee() <<" "<< "Pounds" << endl;

    return 0;
}
