/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Employee Header File
 * Program Description: This program accepts input from an employee and displays the information entered.
 */

#ifndef __Week4Lab_Merino__Benefits__
#define __Week4Lab_Merino__Benefits__
#include<string>
#include<iostream>
#include<stdio.h>

using namespace std;

class Benefits
{
public:
    Benefits();
    Benefits(string health, double life, int vac);
    ~Benefits();
    
    // public access methods
    void displayBenefits();
    string getHealthInsurance();
    void setHealthInsurance(string hins);
    double getLifeInsurance();
    void setLifeInsurance(double lifeIns);
    int getVacation();
    void setVacation(int vaca);
    
    // private members
private:
    string healthinsurance;
    double lifeinsurance;
    int vacation;
};

#endif
