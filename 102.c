#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    int c_count = 0, w_count = 1, l_count = 1;
    char c;
    // reading the sample text
    file = fopen("sample.txt", "r");
    //foef return 0 if a valid char is present and -1 if NULL
    while (c != EOF)
    {
        c = getc(file);
        if (c == ' ')
        {
            w_count++;
        }
        if (c == '\n')
        {
            w_count++;
            l_count++;
        }
        if (isalpha(c))
        {
            c_count++;
        }
    }

    printf("number of alphabets: %d\n", c_count);
    printf("number of words: %d\n", w_count);
    printf("number of lines: %d\n", l_count);
    fclose(file);
    return 0;
}
