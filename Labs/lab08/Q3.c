/*programmer:urooj baloch
Description:Question 3 lab 8
Date:24-10-2023
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Maximum size for the input Text:
    const int Text_size = 100;

    char input[Text_size];
    char searchChar;

    // take text input from the user
    printf("Enter a text: ");
    fgets(input, Text_size, stdin);

    // ask the user for character to be searched:
    printf("Enter a character to search for: ");
    scanf(" %c", &searchChar);

    // Use strchr to search for the character:
    char *foundChar = strchr(input, searchChar);

    int count = 0;

    // Count how many times the inputed  character is found:
    while (foundChar != NULL) {
        count++;
        foundChar = strchr(foundChar + 1, searchChar);
    }

    // the result will be:
    printf("The character '%c' appears %d times in the input text.\n", searchChar, count);

    return 0;
}
