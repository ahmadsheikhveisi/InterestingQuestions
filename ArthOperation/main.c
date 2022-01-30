/* COPYRIGHT NONE
 * what does the following program print on the command line?
 * a : 3
 * b : 1
 * c : 11
 * d : 6
 * e : 15
 * f : compiler error
*/

#include <stdio.h>

const double PI_Estimate = 24 / 7;

int main(void ) {
    printf("%d\n", 1 + 2 % 4 * 5);

    // bonus
    printf("%f\n", PI_Estimate);
    return 0;
}
