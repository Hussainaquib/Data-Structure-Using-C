// C program to implement Bubble Sort

#include<stdio.h>

void BubbleSort(int *array,int n){
	int temp;
	int isSorted = 0;
	for(int i=0;i<n-1;i++)
	{
		isSorted = 1;
		for(int j = 0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				isSorted = 0;
			}
      		}
		if(isSorted)
		{
			return;
		}
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

	BubbleSort(array,n);
	printf("\nSorted array is ");
    	for (i = 0; i < n;i++)
        printf(" %d ", array[i]);
	return 0;
}