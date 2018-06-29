#include <stdio.h>

/* count characters in input; 2nd version */
int main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc) // all work is done here
		;                            // null statement
	printf("%.0f\n", nc);
}
