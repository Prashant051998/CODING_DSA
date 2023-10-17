FOIL is the standard method for multiplying two binomials together. The word FOIL is an acronym for the four terms of the product:

First: the "first" terms of each binomial are multiplied together.
Outer: the "outside" terms are multiplied—that is, the first term of the first binomial and the second term of the second.
Inner: the "inside" terms are multiplied—that is, the second term of the first binomial and the first term of the second.
Last: the "last" terms of each binomial are multiplied.

In general: (ax + b)(cx + d) = acx² + adx + bcx + bd = acx² + (ad+bc)x + bd.

Your objective is to print the simplified expansion for the given binomial product.
Input
Line 1: The Coefficient of the left binomial, the Constant of the left binomial, the Coefficient of the right binomial, the Constant of the right binomial.

Example:
1 3 1 2

This refers to the product
(x + 3)(x + 2)
Output
A line containing the expansion of a product in the form ax^2 ± bx ± c where a and b are Coefficients, and c is a Constant.


#######################################

code:-

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int coefficient_left;
    int constant_left;
    int coefficient_right;
    int constant_right;
    cin >> coefficient_left >> constant_left >> coefficient_right >> constant_right; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    

    int a = coefficient_left * coefficient_right; 
    int b = coefficient_left * constant_right + constant_left * coefficient_right; 
    int c = constant_left * constant_right; 

    
    std::string result;

   
    if (a == 1) {
        result += "x^2";
    } else if (a == -1) {
        result += "-x^2";
    } else {
        result += std::to_string(a) + "x^2";
    }

    if (b > 0) {
        if (b == 1) {
            result += " + x";
        } else {
            result += " + " + std::to_string(b) + "x";
        }
    } else if (b < 0) {
        if (b == -1) {
            result += " - x";
        } else {
         
            result += " - " + std::to_string(-b) + "x";
        }
    }
    
    if (c > 0) {
        result += " + " + std::to_string(c);
    } else if (c < 0) {
      
        result += " - " + std::to_string(-c);
    }
  
    std::cout << result << std::endl;

    return 0;

    
  
}