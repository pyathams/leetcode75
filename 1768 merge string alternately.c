/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1768 merge string alternately.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:25:12 by pyathams          #+#    #+#             */
/*   Updated: 2024/05/04 15:39:30 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2)
{
    int		i;
	int		j;
	int		k;
	char	*str;

	str = malloc(sizeof (char) * (strlen(word1) + strlen(word2) + 1));
	i = 0;
	j = 0;
	k = 0;
	while (word1[i] || word2[j])
	{
		if (word1[i])
			str[k++] = word1[i++];
		if (word2[j])
			str[k++] = word2[j++];
	}
	str[k++] = '\0';
	return (str);
}

#include <stdio.h>

int main (void)
{
	char *str = mergeAlternately("abcd", "pq");

	printf("%s", str);
}

// 1768. Merge Strings Alternately
// Easy
// Topics
// Companies
// Hint
// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.

 

// Example 1:

// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r
// Example 2:

// Input: word1 = "ab", word2 = "pqrs"
// Output: "apbqrs"
// Explanation: Notice that as word2 is longer, "rs" is appended to the end.
// word1:  a   b 
// word2:    p   q   r   s
// merged: a p b q   r   s
// Example 3:

// Input: word1 = "abcd", word2 = "pq"
// Output: "apbqcd"
// Explanation: Notice that as word1 is longer, "cd" is appended to the end.
// word1:  a   b   c   d
// word2:    p   q 
// merged: a p b q c   d