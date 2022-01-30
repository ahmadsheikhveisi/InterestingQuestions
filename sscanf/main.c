/* COPYRIGHT NONE
 * what does the following program print on the command line?
 * a : compiler error
 * b : 36
 * c : 26
 * d : -2147483648
 * e : 48
 * f : 72
*/

#include <stdio.h>
#include <limits.h>

int AddTwoInputs(char const * opt_a) {
    if (opt_a == NULL) {
        return INT_MIN;
    }
    int num1;
    int num2;
    if (2 != sscanf(opt_a, "%d + %i", &num1, &num2)) {
        return INT_MIN;
    }

    return num1 + num2;
}

int main(void) {
    printf("result: %d \n", AddTwoInputs("12 + 024") +
        AddTwoInputs("-24 + 0x12"));

    // bonus
    printf("%d\n", AddTwoInputs("1 + 068"));
    return 0;
}
