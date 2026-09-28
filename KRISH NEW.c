// 2+5+8+11+14.. UPTO N TERM . W.C.P TO CALCULATE THE SUM OF GIVEN SERIES

#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int term = 2; 
    int count = 1; 
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);
    
    while (count <= n) {
        sum += term;     
        term += 3;       
        count++;        
    }
    printf("The sum of the series up to %d terms is: %d\n", n, sum);
    return 0;
}

