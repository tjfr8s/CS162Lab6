/************************************************************
 * Author: Tyler Freitas
 * Date: 07/01/2018
 * Description: This file describes a menu that is used
 * to perform functions on a linked list. The menu
 * allows the user to add a new value, print the value at the
 * front of the list, remove the value at the front, and 
 * display the list.
************************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include <iostream>
#include <cstdio>
#include <unistd.h>
#include "IntegerValidation.hpp"
#include "Queue.hpp"
#include "Node.hpp"
/************************************************************
 * Description:
 * Preconditions:
 *      Call function.
 * Postconditions:
 *      A menu is printed to the console.
 *      The user's choice is read into a variale and returned.
************************************************************/
int  getMenu();


/************************************************************
 * Description:
 * Preconditions:
 *      Call function.
 * Postcondition:
 *      The menu is contiuously displayed until the user
 *      chooses to quit.
 ************************************************************/
void runMenu();


#endif
