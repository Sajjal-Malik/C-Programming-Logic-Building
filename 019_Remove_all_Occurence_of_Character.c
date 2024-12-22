#include <stdio.h>

void remove_char(char *string, char r)
{
    int pos = 0;
    while (string[pos] != '\0')
    {
        if (string[pos] == r)
        {
            int newPos = pos;
            while (string[newPos] != '\0')
            {
                string[newPos] = string[newPos + 1];
                newPos++;
            }
        }
        else pos++;
    }
}

int main()
{
    
    char s1[] = "aaaaAAAAbbbbAAAAcccccAAAAAddddd";
    printf("%s\n", s1);
    remove_char(s1, 'A');
    printf("%s\n", s1);

    return 0;
}