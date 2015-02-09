/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Salaried Header File
 * Program Description: This program accepts input from an employee and displays the information entered.
 */

#ifndef __Week5Lab_Merino_K__Salaried__
#define __Week5Lab_Merino_K__Salaried__
#include "Employee.h"
#include "Benefits.h"
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class Salaried : public Employee {
private:
    int managementLevel;
    const int MIN_MANAGEMENT_LEVEL;
    const int MAX_MANAGEMENT_LEVEL;
    const int BONUS_PERCENT;
    
public:
    Salaried();
    Salaried(string fname, string lname, char gen, int dep, double sal, Benefits benefit1, int manLevel);
    Salaried(double sal, int manLevel);
    ~Salaried();
    
    double calculatePay();
    void setManagementLevel(int manLevel);
    void displayEmployee();
};
#endif /* defined(__Week5Lab_Merino_K__Salaried__) */
