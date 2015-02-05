/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */
#ifndef Week4Lab_Merino_Benefits_h
#define Week4Lab_Merino_Benefits_h
#include "Benefits.h"
#include "Employee.h"
#include <iostream>
#include <string>
#endif

using namespace std;

int main(int argc, char *argv[]) {
    Benefits benefit1("North West Mutual", 50000000, 14);
    Employee e1, e2("Mary", "Noia", 'F', 5, 24000.0, benefit1);
    
    cout << "Welcome to your first Object-Oriented Program\nEmployee Class 247C, Week 5 Lab\n";
    cout << "Name: Kim Merino\n";
    
    // Employee #1 User Input
    
    e1.setFirstName(" ");
    e1.setLastName(" ");
    e1.setGender(0);
    e1.setDependents(" ");
    e1.setAnnualSalary(" ");
    e1.benefit.setHealthInsurance(" ");
    e1.benefit.setLifeInsurance(0);
    e1.benefit.setVacation(0);
    e1.displayEmployee();
    
    // Employee #2
    e2.displayEmployee();

    Employee::getNumEmployees();
    cout << "The end of the CIS 247C Week 5 iLab\n";
    
} // end of main

