/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midpoint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:22:50 by egomez-a          #+#    #+#             */
/*   Updated: 2021/07/01 16:23:30 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int mid_insertionSort(int *array, int len) 
{ 
	int i;
	int j;
	int element;
	int	midpoint;
 
	i = 1;
	while (i < len)
	{ 
		element = array[i]; 
		j = i - 1;
		while (j >= 0 && array[j] > element) 
		{ 
			array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = element;
		i++;
    }
	midpoint = array[(len/2)];
	printf("El midpoint del array es %d\n", midpoint);
	return(midpoint);
}