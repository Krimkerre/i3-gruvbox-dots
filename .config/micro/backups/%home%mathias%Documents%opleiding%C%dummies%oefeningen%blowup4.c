#include <stdio.h>

int main()
{
	char c,d;

	printf("Enter the character code to self-destruct?");
	c=getchar();
	fflush(stdin);		/* use fpurge(stdin) in unix */

	printf("Input number code to confirm self-destruct?");

	if(c=='G' && d=='0')
	{
		printf("AUTO DESTRUCT ENABLED!\n");
		printf("Bye!\n");
	}
	else
	{
		printf("Okay. Whew!\n");
	}
	return(0);
}
