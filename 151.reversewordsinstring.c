#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* reverseWords(char* s)
{
    int i = strlen(s) - 1;
	if (!s)
		return(NULL);
    while (s[i] == ' ')
        i--;
    int j = 0;
    while (s[j] == ' ')
	{
        j++;
	}
    char *str = malloc (sizeof(char) * (i - j + 2));
    if (str == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(1);
    }
    int k = 0;
    while (i >= j)
    {
        if (s[i] == ' ')
        {
            while (s[i] == ' ')
                i--;
            str[k] = ' ';
            k++;
        }
        else
        {
            while (s[i] != ' ' && i >= j)
                i--;
            int m = 1;
            while (s[i + m] != ' ' && s[i + m] != '\0')
            {
                str[k] = s[i + m];
                k++;
                m++;
            }
            m = 1;
        }
    }
    str[k] = '\0';
    strcpy(s,str);
    free (str);
    return(s);
}

int main()
{
    char str[] = "  the string is long   ";
    printf("Original string: %s\n", str);
    reverseWords(str);
    printf("Reversed string: %s.\n", str);
    return 0;
}