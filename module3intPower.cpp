/* 
 * File:   module3.cpp
 * Author: wandaboyer
 * Email: wbkboyer@gmail.com
 * The scenario is that you have been asked to create a library of utility 
 * functions that support mathematical functions. You will add this code to 
 * functions in the next module but for now, write code to complete the following:
 * Using a for loop, write code that will compute the result of an int raised 
 * to the power of another int. For example, your for loop should use two 
 * variables, one for the base and one for the exponent. It should then 
 * calculate the base raised to the exponent. 2 raised to the power of 2 should 
 * output 4, 2 raised to 8 should output 256, etc. Ensure your code meets these 
 * requirements and then paste it in the response section below:
 * Contains a variable for the base
 * Contains a variable for the exponent
 * Uses a for loop to perform the power function
 * Outputs the result to the console window
 * 
 * Created on October 13, 2015, 12:59 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

int intPower(int base, int exponent) {
    // base^0
    int result = 1;
    
    // base^i = base^(i-1) * base
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    
    return result;
}

void printOutput(int base, int exponent) {
    printf("Result of taking %d^%d: %d.", base, exponent, intPower(base, exponent));
}

