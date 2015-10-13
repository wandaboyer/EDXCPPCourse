/* 
 * File:   module3.cpp
 * Author: wandaboyer
 * Email: wbkboyer@gmail.com
 * For this second response, you will create a switch statement. The switch statement should include the following:
 * A variable of type char for the comparison
 * The switch statement should check for the value of 'y' (lowercase) or 'Y' (uppercase) and output the response "You chose y or Y" to the console window
 * The switch statement should check for the value 'n' or 'N' and output the response, "You chose n or N" to the console window
 * The switch statement should include the correct component that will output "You didn't choose a valid option" if neither of these two previous conditions are true
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

void charComp (char choice) {
    switch (choice) {
        case 'y':
        case 'Y':
            printf("You chose y or Y.");
            break;
        case 'n':
        case 'N':
            printf("You chose n or N.");
            break;
        default:
            printf("You didn't choose a valid option.");
            break;
    }  
}

int main (int argc, char** argv) {
    if (argc == 1) {
        char choice;
        
        printf("Please enter your choice of character: ");
        cin >> choice;
        
        charComp(choice);
    }
    else if (argc > 2) {
        printf("Please type only one character to compare.");
        return -1;
    }
    else {
        if (sizeof(argv[1]) > 1) {
            printf("Please enter a single character.");
            return -1;
        }
        else {
            charComp(argv[1][0]);
        }
    }
    return 0;
}