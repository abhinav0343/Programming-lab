#include <stdio.h>

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print the ASCII code of the character
    printf("The ASCII code of '%c' is %d\n", ch, ch);

    return 0;
}
