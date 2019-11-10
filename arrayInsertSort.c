#include <stdio.h>
#include <stdbool.h>
#define ALLOCATE_SIZE 1000

int inputArray(int Array1[], int maxSize) {     //safe reading function
    int top = 0;                                //array fill indicator
    while (true) {
        int x;
        scanf("%d", &x);
        if (x == 0 || top == maxSize)
            break;                              //"0" is "exit command"
        Array1[top] = x;
        top++;
    }
    return top;
}

void printArray(int Array1[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%3d", Array1[i]);
    }
    printf("\n");
}

void insertSort(int Array1[], int N) {
    for (int i = 1; i < N; i++) {
        int k = i;                              //save initial position
        while (k > 0 && Array1[k-1] > Array1[k]) {
            int tmp = Array1[k-1];              //buffer for exchange
            Array1[k-1] = Array1[k];
            Array1[k] = tmp;
            k--;
        }
    }
}

int main(int argc, char* argv[]) {
    printf("Enter numbers: ");
    int Array1[ALLOCATE_SIZE];
    int N;

    N = inputArray(Array1, ALLOCATE_SIZE);
    insertSort(Array1, N);
    printArray(Array1, N);

    return 0;
}
