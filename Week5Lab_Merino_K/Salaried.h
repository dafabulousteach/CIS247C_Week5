/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#ifndef __Week5Lab_Merino_K__Salaried__
#define __Week5Lab_Merino_K__Salaried__
#include "Employee.h"
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class Salaried : public Employee {
    
private:
    int MIN_MANAGEMENT_LEVEL;
    int MAX_MANAGEMENT_LEVEL;
    double BONUS_PERCENT;
    int managementLevel;
    
public:
    Salaried();
    ~Salaried();
};




#endif /* defined(__Week5Lab_Merino_K__Salaried__) */
