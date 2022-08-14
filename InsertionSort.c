//C program to implementation of Insertion Sort

#include<stdio.h>

void InsertionSort(int *array,int n)
{
	int key,j;

	for(int i=1;i<=n-1;i++)
	{
		key = array[i];
		for(j = i-1;j>=0 && array[j]>key;j--)
		{
			array[j+1] = array[j];
		}
		array[j+1] = key;
	}
}

int main()
{
	int array[100], i, n;
    	printf("How many numbers you want to sort:  ");
    	scanf("%d", &n);
    	printf("\nEnter %d numbers\t", n);
    	printf("\n");
    	for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

	InsertionSort(array,n);
	printf("\nSorted array is ");
    	for (i = 0; i < n;i++)
        printf(" %d ", array[i]);
	return 0;
}