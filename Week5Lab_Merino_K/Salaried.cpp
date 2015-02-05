/* CIS 247C
 * Feburary 8, 2015
 * Kim Merino
 * Lab 5 Week 5
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#include "Salaried.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Salaried::Salaried()
{
    this -> MIN_MANAGEMENT_LEVEL = 0;
    this -> MAX_MANAGEMENT_LEVEL = 3;
    this -> BONUS_PERCENT = 10;
}

Salaried::~Salaried(){}

