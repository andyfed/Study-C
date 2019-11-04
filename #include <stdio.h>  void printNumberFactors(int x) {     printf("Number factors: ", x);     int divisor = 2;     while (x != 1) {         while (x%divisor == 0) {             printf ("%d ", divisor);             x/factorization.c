#include <stdio.h>

void printNumberFactors(int x) {
    printf("Number factors: ", x);
    int divisor = 2;
    while (x != 1) {
        while (x%divisor == 0) {
            printf ("%d ", divisor);
            x /= divisor;
        }
        divisor += 1;
    }
    printf("\n");
}

int main(int argc, char* argv[]){
    int x;
    printf("Enter number to factorize:");
    scanf("%d", &x);
    printNumberFactors(x);

    return 0;
}
