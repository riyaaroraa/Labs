/* SYSC 2006 Lab 2, Part 2. RIYA ARORA - 101190033
 *
 * Incomplete implementations of the functions that will be coded during the lab.
 
 RIYA ARORA - 101190033
 SEPT 18th, 2021
 */

#include <stdlib.h>
#include <math.h>

#include "exercises.h"

/* Returns n! for n >= 0. (0! is defined to be 1.)
   Note that the return type is int, and n! grows rapidly as n increases,
   so this function should only be used for fairly small values of n; 
   i.e., if ints are implemented as 32-bit values, n must be <= 15.
*/
int factorial(int n)
// calculates and outputs factorial of integer value

{
    if (n==0) {
        return 1;
    }
    for(int i = (n-1); i > 1; i--) {
        n *= i;
        
    }
    return n;
    
}

/* Returns the number of different ordered subsets of k objects picked
   from a set of n objects, for n > 0, k > 0, n >= k.
 */
int ordered_subsets(int n, int k)
{
// calculates and outputs all permutations
    int p;
    p = factorial(n) / (factorial(n - k));
return p;

}

/* Returns the binomial coefficient (n k); that is, the number of 
   combinations of k objects that can be chosen from a set of n objects, 
   for n > 0, k > 0, n >= k.
 */
int binomial(int n, int k)
{
    // calculates and outputs all combinations
        int numCombinations = ordered_subsets(n,k)/factorial(k);
    return numCombinations;
}

/* Returns the cosine of x (measured in radians) by calculating
 * the first n terms of the infinite series expansion of cosine.
 */
double cosine(double x, int n)
{
    double cos = 1;
    // calculates and outputs cosine of x
    for(int i = 1; i <= n*2; i++) { // change signs
        i++;
        if ((i / 2) % 2 == 0) { // values of factor of 4
            cos += (pow(x,i) / factorial (i));
        } else {
            cos -= (pow(x,i) / factorial(i));
        }
       
    }
    return cos;
}

