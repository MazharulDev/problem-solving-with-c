#include<stdio.h>
#include<string.h>

int main() {
    char A[11], B[11];
    scanf("%s", A);
    scanf("%s", B);

    // 1. Print the sizes of A and B
    printf("%lu %lu\n", strlen(A), strlen(B));

    // 2. Print the concatenation of A and B
    printf("%s%s\n", A, B);

    // 3. Swap the first characters of A and B and print them
    char tempA = A[0];
    char tempB = B[0];
    
    A[0] = tempB;
    B[0] = tempA;

    printf("%s %s\n", A, B);

    return 0;
}