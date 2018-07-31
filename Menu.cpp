#include "Menu.hpp"
/************************************************************
 * Author: Tyler Freitas
 * Date: 07/01/2018
 * Description: This file describes a menu that is used
 * to perform functions on a linked list. The menu
 * allows the user to add a new value, print the value at the
 * front of the list, remove the value at the front, and 
 * display the list.
************************************************************/


/************************************************************
 * Description:
 * Preconditions:
 *      Call function.
 * Postconditions:
 *      A menu is printed to the console.
 *      The user's choice is read into a variale and returned.
************************************************************/
int getMenu()
{
    std::cout << "**************************************************" << 
        std::endl;
    std::cout << "Choose an option: " << std::endl;
    std::cout << "1. Enter value to be added to front of queue\n";
    std::cout << "2. Display front of queue \n";
    std::cout << "3. Remove the back of the queue\n";
    std::cout << "4. Display queue\n";
    std::cout << "5. Quit\n";
    std::cout << "**************************************************" << 
        std::endl;


    int userChoice = intInputValidation(1, 5);

    return userChoice;
}


/************************************************************
 * Description: Gets user input via getMenu and executes
 * appropriate function.
************************************************************/
void runMenu()
{
    int userChoice;
    int newVal(0);
    Queue queue;
    while((userChoice = getMenu()) && (userChoice != 5))
    {

        
        switch(userChoice)
        {
            case 1:
                std::cout << "\nEnter a value to add to the queue: ";
                newVal = intInputValidation(-3000,3000);
                queue.addBack(newVal);
                std::cout << "\n\n";
                break;

            case 2:
                std::cout << "\nThe head of the queue is: " << queue.getFront() <<
                    "\n\n";
                break;

            case 3: 
                std::cout << "\nRemoved the front of the queue.\n\n";
                queue.removeFront();
                break;

            case 4: 
                std::cout << "\nContents of the queue:\n";
                queue.printQueue();
                std::cout << "\n";
                    
        }

    }

    return;
}


