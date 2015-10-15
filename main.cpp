/* 
 * File:   main.cpp
 * Author: wanda
 *
 * Created on October 14, 2015, 5:27 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "Module3.h"

using namespace std;

int main(int argc, char** argv) {
    string operationChoice;
       
    bool invalidInput = true;
    do {
        cout << "Do you wish to perform the integer power operation, or the character";
        cout << " comparison operation? \"int\" for the former, \"comp\" for the latter,";
        cout << " and the command line arguments, if they exist, will be treated accordingly." << endl;
        
        cin >> operationChoice;
        
        if (operationChoice == "int") {
            if (argc == 1) {
                int base, exponent;
                printf("Please enter your base: ");
                cin >> base;
                printf("Please enter your exponent: ");
                cin >> exponent;
                printOutput(base, exponent);
            }
            else if ((argc > 3) || (argc == 2)) {
                printf("Invalid number of arguments; requires exactly the base and exponent.");
                return -1;
            }
            else {
                printOutput(atoi(argv[1]), atoi(argv[2]));
            }
            
            invalidInput = false;
        }
        else if (operationChoice == "comp") {
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
            
            invalidInput = false;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (invalidInput);
    return 0;
}

