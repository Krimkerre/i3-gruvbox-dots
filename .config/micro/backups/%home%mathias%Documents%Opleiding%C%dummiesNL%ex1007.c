#include <stdio.h>

void graph(int count, char star);

int main()
{
	int value;
	char star;

	value = 2;
	star = '*';

	while(value<64)
	{
		graph(value, star);
		printf("De waarde van value is %d\n", value);
		value = value*2;
	}
	return(0);
}

void graph(int count, char star)
{
	int x;

	for(x=0; x<count; x++)
		putchar(star);
	putchar('\n');
}
