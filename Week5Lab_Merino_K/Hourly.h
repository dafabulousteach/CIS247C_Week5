/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#ifndef __Week5Lab_Merino_K__Hourly__
#define __Week5Lab_Merino_K__Hourly__
#include "Employee.h"
#include "Benefits.h"
#include <string>
#include <iostream>
#include <stdio.h>


using namespace std;

class Hourly : public Employee{
    
private:
    const double MIN_WAGE;
    const double MAX_WAGE;
    const double MIN_HOURS;
    const double MAX_HOURS;
    double wage;
    double hours;
    string category;
    
public:
    Hourly();
    Hourly(double wage, double hours, string category);
    Hourly(string fname, string lname, char gen, int dep, double _wage, double _hours, Benefits ben, string _category);
    ~Hourly();
    
    double calculatePay();
    void displayEmployee();
    
};


#endif /* defined(__Week5Lab_Merino_K__Hourly__) */
