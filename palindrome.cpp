#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a word is a palindrome
int isPalindrome(const char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - 1 - i])) {
            return 0; // Not a palindrome
        }
    }
    return 1; // It's a palindrome
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char word[501]; // 500 characters + null terminator
        scanf("%s", word);

        if (isPalindrome(word)) {
            printf("Case #%d: Yay, its a palindrome\n", t);
        } else {
            printf("Case #%d: Nah, its not a palindrome\n", t);
        }
    }

    return 0;
}

