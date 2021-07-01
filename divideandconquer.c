/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divideandconquer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:29:42 by egomez-a          #+#    #+#             */
/*   Updated: 2021/06/23 09:59:24 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int arr[8]={5, 8, 4, 2, 3, 6, 7, 1};

int merge(int arr[], int l, int m, int h, int operation)
{
    int arr1[10];
	int arr2[10];
    int n1, n2, i, j, k;
    n1 = m - l + 1;
    n2 = h - m;
	i = 0;
	while (i < n1)
	{
        arr1[i] = arr[l + i];
		i++;
		operation++;
	}
	j = 0;
	while (j < n2)
	{
        arr2[j] = arr[m + j + 1];
		j++;
		operation++;
	}
    arr1[i] = 9999;
    arr2[j] = 9999;
    i = 0;
    j = 0;
	k = l;
	while (k <= h)
	{
        if(arr1[i] <= arr2[j])
            arr[k] = arr1[i++];
        else
            arr[k] = arr2[j++];
		k++;
		operation++;
    }

    return (operation);
}
int merge_sort(int arr[], int low, int high, int operation)
{
	int mid;

	operation = 0;
    if(low < high) 
    {
        mid = (low + high) / 2;
        // Divide and Conquer
        merge_sort(arr, low, mid, operation++); 
        merge_sort(arr, mid + 1, high, operation++);
        // Combine
        merge(arr, low, mid, high, operation); 
    }

    return (operation);
}


int main()
{
    int i;
    operation = merge_sort(arr, 0, 7, operation);
    printf("Sorted array:");
	i = 0;
	while (i < 8)
    {
        printf("%d", arr[i]);
		i++;
	}
	printf("\nOperations are %d\n", operation);
    return 0;
}

