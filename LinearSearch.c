// Linear Search for an element

#include<stdio.h>
int LinearSearch(int arr[],int size ,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i] == element)
		{
			return i;
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
	int SearchIndex = LinearSearch(arr,size , element);
	if (SearchIndex == -1)  
  	printf("\nElement is not present in the array");
	else    
	printf("The element %d was found at index %d\n",element,SearchIndex);
	return 0;	
}