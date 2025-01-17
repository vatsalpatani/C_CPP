#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void main()
{
	int* ptr;
	int n, i;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d",&n);
	ptr = (int*)calloc(n, sizeof(int));
	// Check if the memory has been successfully allocated by calloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else
	{
		printf("Memory successfully allocated using calloc.\n");
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}
	getch();
}