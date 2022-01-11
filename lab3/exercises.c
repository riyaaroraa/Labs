/* SYSC 2006 Lab 3. 

 * Incomplete implementations of the functions that will be coded during the lab.
 */

// Riya Arora 101190033
// Completed on September 24th, 2021

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "exercises.h"

/* Exercise 1. */

/* Return the average magnitude of the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], double n)
{
    double sum = 0, avg;
    for(int i = 0; i < n; i++) {
        sum += fabs(x[i]);
    }
    avg = sum/n;
    return avg;
}

/* Exercise 2. */

/* Return the average power of the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], double n)
{
    double sum = 0, avg; // set sum as 0
    for(int i = 0; i < n; i++) {
        sum += pow(x[i],2); // sum sqaure of elements
    }
    avg = sum/n;
    
    return avg;
    
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double max(double arr[], int n)
{
    double max = arr[0]; // first number is max
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) { // checks to see if number is greater than the max
            max = arr[i];
        }
    }
    return max;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n)
{
    double min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
    double Min = min(x,n), Max = max(x,n);
    for (int i = 0; i < n; i++) {
        x[i] = (x[i] - Min) / (Max-Min);
    }
}
