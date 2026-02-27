#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);   // Space before %c to avoid newline issue

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("It is a Vowel.\n");
            break;

        default:
            printf("It is a Consonant.\n");
    }

    return 0;
}
