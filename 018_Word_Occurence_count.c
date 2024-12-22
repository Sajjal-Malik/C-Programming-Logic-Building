#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count(char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen + 1;
    int count = 0;

    for (int i = 0; i < end; i++)
    {

        bool word_found = true;
        int j = 0;
        for (int j = 0; j < wlen; j++)
        {

            if (word[i] != string[i + j])
            {
                word_found = false;
                break;
            }
        }
        if (word_found)
            count++;
    }
    return count;
}

int main()
{

    char s[] = "It is in this string once";
    char w[] = "It";

    int result = word_count(s, w);
    printf("%d\n", result);

    return 0;
}