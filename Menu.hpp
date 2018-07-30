/************************************************************
 * Author: Tyler Freitas
 * Date: 07/01/2018
 * Description: ***********************************************************/

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
 * Postconditions:
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
