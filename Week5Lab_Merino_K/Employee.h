/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Employee Header File
 * Program Description: This program accepts input from an employee and displays the information entered.
 */

#include<string>
#include<iostream>

using namespace std;
#include "Benefits.h"

class IEmployee {
    virtual double calculatePay() = 0;
};

class Employee
{
public:
    
    Employee();
    Employee(string first, string last, char gen, int dep, double salary, Benefits benefit1);
    ~Employee();
    
    // public access methods
    double calculatePay();
    void displayEmployee();
    string getFirstName();
    void setFirstName(string first);
    string getLastName();
    void setLastName(string last);
    char getGender();
    void setGender(const char gen);
    int getDependents();
    void setDependents(int dep);
    void setDependents(string);
    void setAnnualSalary(string);
    double getAnnualSalary();
    void setAnnualSalary(double salary);
    static int getNumEmployees();
    Benefits benefit;
    Benefits benefit1(string health, double life, int vac);
    
    // private members
private:
    string firstName;
    string lastName;
    char gender;
    int dependents;
    double annualSalary;
    static int numEmployees;
}; // End of Employee class

