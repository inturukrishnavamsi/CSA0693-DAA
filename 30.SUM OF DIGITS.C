#include <stdio.h>
 
/* Function to get sum of digits */
int getSum(int n)
{
    int sum;
 
    /* Single line that calculates sum */
    for (sum = 0; n > 0; sum += n % 10, n /= 10)
        ;
 
    return sum;
}
 
// Driver code
int main()
{
    int n = 687;
 
    // Function call
    printf(" %d ", getSum(n));
    return 0;
}
