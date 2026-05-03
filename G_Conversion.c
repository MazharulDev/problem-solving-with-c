#include<stdio.h>
#include<string.h>

int main() {
    char str[100001];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ',') {
            printf(" ");
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - ('a' - 'A')); // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + ('a' - 'A')); // Convert to lowercase
        } else {
            printf("%c", str[i]); // Print other characters as is
        }
    }
    printf("\n");

    return 0;
}
