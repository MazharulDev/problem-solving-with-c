#include<stdio.h>
#include<string.h>

// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

int main() {
    char str[1001];
    scanf("%s", str);

    int length = strlen(str);
    int isPalindrome = 1; // Assume it's a palindrome until proven otherwise

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}