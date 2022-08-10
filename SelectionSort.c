// C program to implement Selection Sort

#include<stdio.h>

void SelectionSort(int *array,int n)
{
	int indexOfMin,temp;
	printf("Running selection sort....\n");
	for(int i=0;i<n-1;i++)
	{
		indexOfMin = i;
		for(int j = i+1;j<n;j++)
		{
			if(array[j]<array[indexOfMin])
			{
				indexOfMin = j;
			}
		}
		temp = array[i];
		array[i] = array[indexOfMin];
		array[indexOfMin] = temp;
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

	SelectionSort(array,n);
	printf("\nSorted array is ");
    	for (i = 0; i < n;i++)
        printf(" %d ", array[i]);
	return 0;
}