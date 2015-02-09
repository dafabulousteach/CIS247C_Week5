/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Employee Header File
 * Program Description: This program accepts input from an employee and displays the information entered.
 */

#include "Benefits.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Benefits::Benefits()
{
    this -> healthinsurance="not given";
    this -> lifeinsurance=0;
    this -> vacation=0;
}

Benefits::Benefits(string health, double life, int vac){
    healthinsurance = health;
    lifeinsurance = life;
    vacation = vac;
}

Benefits::~Benefits(){}

void Benefits::setHealthInsurance(string hins){
    cout << "Please enter your Health Insurance: ";
    cin >> healthinsurance;
}

string Benefits::getHealthInsurance(){
    return healthinsurance;
}

void Benefits::setLifeInsurance(double lifeIns){
    cout << "Please enter your Life Insurance: ";
    cin >> lifeinsurance;
}

double Benefits::getLifeInsurance(){
    return lifeinsurance;
}

void Benefits::setVacation(int vaca){
    cout << "Please enter your Vacation Days: ";
    cin >> vacation;
}

int Benefits::getVacation(){
    return vacation;
}

void Benefits::displayBenefits(){
    cout << "Benefits Information\n";
    cout << "-------------------------------------------------\n";
    cout << "Health Insurance:\t" << healthinsurance << "\n";
    cout << "Life Insurance:\t" << lifeinsurance<< "\n";
    cout << "Vacation:\t" << vacation << " days\n";
}
