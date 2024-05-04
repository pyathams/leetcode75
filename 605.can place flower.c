/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   605.can place flower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:05:31 by pyathams          #+#    #+#             */
/*   Updated: 2024/05/04 20:05:51 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) 
{
    int i;

    i = 0;
    while (i < flowerbedSize && n > 0)
    {
        if (flowerbed[i] == 0)
        {
            int j = i;
            if ((j == 0 || flowerbed[j - 1] == 0) && (j == flowerbedSize - 1 || flowerbed[j + 1] == 0))
            {
                n = n - 1;
                flowerbed[i++] = 1;
            }
        }
        i++;
    }
    if (n == 0)
        return(true);
    else
        return (false);
}

// Code
// Testcase
// Testcase
// Test Result
// 605. Can Place Flowers
// Solved
// Easy
// Topics
// Companies
// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

// Example 1:

// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true
// Example 2:

// Input: flowerbed = [1,0,0,0,1], n = 2
// Output: false
 

// Constraints:

// 1 <= flowerbed.length <= 2 * 104
// flowerbed[i] is 0 or 1.
// There are no two adjacent flowers in flowerbed.
// 0 <= n <= flowerbed.length