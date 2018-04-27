#include <stdio.h>

extern inline int square(int x)
{
	return (x*x);
}

double add(int x, int y)
{
	return (square(x) + square(y));
}

int main()
{


	int x=2;
	int y=3;
	double result;
	int i;
		
	for(i=0;i<5;i++){
		result = add(x,y);
	}
	printf("%lf\n", result);

	return 0;
}
