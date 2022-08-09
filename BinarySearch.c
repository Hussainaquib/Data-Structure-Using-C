// program for Binary Search an elementin array

#include<stdio.h>
int BinarySearch(int arr[],int size ,int element)
{
	int low,mid,high;
	low = 0;
	high = size-1;
	while(low<=high)
	{
		mid = (low + high)/2;
		if(arr[mid] == element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
			low = mid+1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return -1;
}
	

int main()
{
	int element;
	int arr[] = {1,3,5,56,64,73,123,225,444};
	int size = sizeof(arr)/sizeof(int);
	printf("The elements of the array are\n");  
  	for (int i = 0; i < size; i++)  
  	printf("%d ", arr[i]);
	printf("\nEnter the element you want to search:");
	scanf("%d",&element);
	int SearchIndex = BinarySearch(arr,size , element);
	if (SearchIndex == -1)  
  	printf("\nElement is not present in the array");
	else    
	printf("The element %d was found at index %d\n",element,SearchIndex);
	return 0;
}
 