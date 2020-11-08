#include "stdio.h"
#include "math.h"

int main() {
    int n;
    int counter = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    
    if (n > 0) {
        double sumMult = 1;
        for (int i = 1; i <= n; i++) {
            double sumAdd = 0;
            for (int j = 1; j <= i; j++) {
                sumAdd += sin(j) + 1;
                counter += 3; // Sine and addition
            }
            sumMult *= sumAdd/i*(i+1);
            counter += 4; // 2xMultiplication, addition and division
        }

        printf("Result: %f\n", sumMult);
        printf("Number of operations: %d\n", counter);
    }

    return 0;
}