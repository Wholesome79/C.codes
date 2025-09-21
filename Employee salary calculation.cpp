/*
Description:A program code to calculate about an employee's salary to output their gross pay, the taxes they pay as well as their net pay.
Name: Geoffrey Njenga Wanene
Reg_no: Bcs-03-0006/2025
*/

#include <iostream>
using namespace std;

// salary calculation function prototype
int weekly_hours,hourly_wage,weekly_salary,gross_pay,weekly_bonus,tax_paid,net_pay;

int main()
{
    cout << "Enter the hours worked this week = " << endl;
    cin >> weekly_hours;
    cout << "Enter the hourly wage = " << endl;
    cin>> hourly_wage;

    weekly_salary = weekly_hours * hourly_wage;

    // bonus for overwork
    if (weekly_hours < 40 && weekly_hours == 40) {
        weekly_bonus = 0;
    }
    else if (weekly_hours > 40){
        weekly_bonus = weekly_hours * 1.5;
    }
    
    //gross pay
    gross_pay = weekly_bonus + weekly_salary;
    cout << "The employee's gross_pay = " << gross_pay << endl;
    
    //taxation
    tax_paid = (0.15 * 600) + ((gross_pay - 600) * 0.2);
    cout<<"Employee's total tax = "<<tax_paid<<endl;
    
    //net pay
    net_pay = gross_pay - tax_paid;
    cout<<"Employee's net pay = "<<net_pay<<endl;
}
