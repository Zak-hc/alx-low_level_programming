#include "stdio.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int main() {
int largest;
int a= 1;
int b= 0;
int c= -1;
if (a > b && a > c)  
largest = a;

if  (b > a && b > c)
largest = b ; 

if (c > a && c > b)
largest = c;

if  ( a > c && c > b)
largest = a ;

if (c > a && b > c)
largest = b ;


if (b > a && c > b )
largest = c;

if (a > b && b > c)
largest = a ;

if  (c > a && a > b)
largest = c ;

if (a > c && b > a) 
largest = b ;

printf("%i", largest);
}
