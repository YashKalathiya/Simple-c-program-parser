#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char last_chr(char *c) {
char *endchr;
char result;
int pos = strlen(c)-1;
endchr = c[pos];
putchar(endchr);
return result;
}
int main(){

int dividend, divisor, quotient, remainder;

printf("Enter dividend: ");
scanf("%d", &dividend);

printf("Enter divisor: ");
scanf("%d", &divisor);

// Computes quotient
quotient = dividend / divisor;

// Computes remainder
remainder = dividend % divisor;

printf("Quotient = %d\n", quotient);
printf("Remainder = %d", remainder);

return 0;
}
