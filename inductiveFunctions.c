#include <stdio.h>

void inductiveCount() {  //inductiveCount
    printf("Inductive count is ON! \nEnter the numbers: ");
    int x;
    scanf("%d", &x);

    int n = 0;
    while (x) {
        int digit = x%10;
        n++;
        x /= 10;
    }
    printf("result = %d \n", n);

    return 0;
}

void inductiveSum() {
    printf("Inductive sum is ON! \nEnter the numbers: ");
    int x;
    scanf("%d", &x);

    int sum = 0;
    while(x) {
        int digit = x%10;
        sum += digit;
        x /= 10;
    }
    printf("result = %d \n", sum);

    return 0;
}

void inductiveProduction () {
    printf("Inductive production is ON! \nEnter the numbers: ");
    int x;
    scanf("%d", &x);

    int production = 1;
    while (x) {
        int digit = x%10;
        production += digit;
        x /= 10;
    }
    printf("result = %d \n", production);
}


int main(int argc, char* argv[])
{
    inductiveCount();
    inductiveSum();
    inductiveProduction();

    return 0;
}
