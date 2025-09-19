
/*
Description:A program code to calculate simple interest and discount
Name: Geoffrey Njenga Wanene
Reg_no: Bcs-03-0006/2025
*/

#include <iostream>
using namespace std;

// simple_interest and discount function prototype
float simple_interest(float rate, int time, int principal);
int final_price(int purchase_price, float discount);

int main() {
    // Simple Interest function call
    float s_interest, rate, discount;
    int time, principal;

    cout << "Enter the rate, time and principal: " << endl;
    cin >> rate >> time >> principal;

    s_interest = simple_interest(rate, time, principal);
    cout << "The simple interest = " << s_interest << endl;

    // Discount function call
    int purchase_price, f_price;
    cout << "Enter the product purchase price = "<< endl;
    cin >> purchase_price;

    if (purchase_price < 1000) {
        discount = 0;
    }
    else if (purchase_price >= 1000 && purchase_price < 5000) {
        discount = purchase_price * 0.05;
    }
    else if (purchase_price >= 5000) {
        discount = purchase_price * 0.1;
    }

    f_price = final_price(purchase_price, discount);
    cout << "The discount = " << discount << endl;
    cout << "The final price = " << f_price << endl;
}

// simple interest function definition
float simple_interest(float rate, int time, int principal) {
    float interest;
    interest = principal * rate / 100 * time;
    return interest;
}

// discount function definition
int final_price(int purchase_price, float discount) {
    int final_price;
    final_price = purchase_price - discount;
    return final_price;
}
