#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define SIZE 100

int main()
{
	int r[SIZE];
	int c,a,b,temp;

	srandom((unsigned)time(NULL));

	puts("Here is the array unsorted:");
	for(c=0; c<SIZE; c++)
	{
		r[c] = random() % 100 +1;
		printf("%3d\t", r[c]);
	}
	putchar('\n');

	// sort the array

	for(a=0; a<SIZE -1; a++)
		for(b=a+1; b<SIZE; b++)
			if(r[a] > r[b])
			{
				temp = r[b];
				r[b] = r[a];
				r[a] = temp;
			}

	// display

	printf("Press Enter to see the sorted array:");
	getchar();

	for(c=0; c<SIZE; c++)
		printf("%d\t", r[c]);
	putchar('\n');
	return(0);
}
