#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int two(int n)
{
	int i = 0;

	while (n % 2 == 0)
	{
		n = n >> 1;
		i++;
	}

	return pow(2, i);
}

int allsum(int min, int max)
{
	static int result = 0;
	int sum = two(min);
	
	result = result + sum;
	
	if (min == max)
	{
		return result;
	}
	else
	{
		min = min + 1;
		return allsum(min, max);
	}
}

int main()
{
	int min, max;
	int result;
	
	printf("최소값을 입력하시오 : ");
	scanf("%d", &min);

	printf("최대값을 입력하시오 : ");
	scanf("%d", &max);

	result = allsum(min, max);

	printf("결과는 %d\n", result);

}