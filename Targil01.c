// Targil01.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int* arr; int* arr2; int size; int size2 = 0; int realsize2;
	printf("Insert the  Size of the group :"); scanf("%d",&size);
	arr = (int*)malloc(size * sizeof(int));
	arr2 = (int*)malloc(size * sizeof(int));
	printf("from the smallest number to the biggest number \n");
	for (int i = 0; i < size; i++)
	{
		printf("Please Enter the value "); 
		scanf("%d", &arr[i]);
			if ( i > 0 && arr[i] != arr[i-1])
			{
				
				arr2[size2] = arr[i];
				size2++;
			}
			if (i == 0)
			{
				
				arr2[size2] = arr[i];
				size2++;
			}

	}
	arr2 = (int*)realloc(arr2 ,size2 * sizeof(int));
	printf("\n  The unorganized group by descrete math : ");
	printf(" { ");
	for (int i = 0; i < size; i++)
	{
		printf(" %d   ", arr[i]);
	}
	printf("} ");
		printf("\n the organized group by descrete math  :"); 
	printf(" { ");
	for (int i = 0; i < size2; i++)
	{
		printf(" %d   ",arr2[i]);
	}
	printf("} ");
	printf("\n");
}	

