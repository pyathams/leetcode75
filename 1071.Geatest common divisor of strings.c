/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1071.Geatest common divisor of strings.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:45:21 by pyathams          #+#    #+#             */
/*   Updated: 2024/05/04 17:06:16 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char* remove_patter(char* stringsmall, int s, int m)
{
    int i;
    int temp;
    while(m != 0)
    {
        temp = m;
        m = s % m;
        s = temp;
    }
    i = 0;
    char *str = malloc((s + 1) * sizeof(char));
    while (i < s)
    {
        str[i] = stringsmall[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char* checker(char* str1, char* str2)
{
    int i = 0;
    int j = 0;
        while (str1[i])
        {
            if(str2[j] == str1[i])
            {
                j++;
                i++;
                if (str2[j] == '\0')
                    j = 0;
            }
            else
                return ("");
        }
        if(str2[j] == str2[0])
        {
            return(remove_patter(str2, strlen(str1), strlen(str2)));
        }
        return ("");
}

char* gcdOfStrings(char* str1, char* str2)
{
    int i;
    int j;

    i = strlen (str1);
    j = strlen (str2);
    if (i > j)
        return(checker(str1, str2));    
    else
        return(checker(str2, str1));
}

int	main(void)
{
	printf("%s", gcdOfStrings("ABABAB", "AB"));
}