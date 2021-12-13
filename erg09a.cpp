#include <stdio.h>

void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	
}

int main()
{
	int n1, n2,*ptrn1,*ptrn2;

	ptrn1 = &n1;
	ptrn2 = &n2;

	printf("give n1 and n2\n");

	scanf("%d", &n1);
	scanf("%d", &n2);

	printf("n1=%d n2=%d\n", n1, n2);

	swap(ptrn1,ptrn2);

	printf("after swap n1=%d n2=%d", n1, n2);

	return 0;
}