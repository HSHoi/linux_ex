#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void snail(int **arr, int n, int max);

void main()
{
	int n, max;
	int **arr;
	int i, j;

	printf("n을 입력하시오 ");
	scanf("%d", &n);

	arr = (int**)malloc(sizeof(int*)*n);
	
	for (i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*n);
	}

	max = n * n;

	snail(arr, n, max);
}

void snail(int **arr, int n, int max) {
	int k;
	int a = 0;
	int j = 0;
	int i = -1;
	int size = ((n - 1) * 2) + 1;
	int *method;

	method = (int*)malloc((sizeof(int)*size));
	
	method[0] = n;

	int t = n;
	for (k = 1; k < size; k=k+2)
	{
		method[k] = t-1;
		method[k+1] = t-1;
		t--;
	}
	
	int count = 1;
	
	for (a=0; a < size; a++)
	{
		
		int ss = method[a];
		int tt = 0;
		switch (a % 4)
		{
		case 0:
			
			while(tt < ss)
			{
				arr[j][++i] = count++;
				tt++;
			}
			break;

		case 1:
			while(tt < ss)
			{

				arr[++j][i] = count++;
				tt++;
			}

			break;
		
		case 2:
			while(tt<ss)
			{
				arr[j][--i] = count++;
				tt++;
			}
			break;

		case 3:
		
			while(tt<ss)
			{
				arr[--j][i] = count++;
				tt++;
			}
			break;

		default:
			break;
		}
	}

	for (int k = 0; k < n; k++)
	{
		for (int t = 0; t < n; t++)
		{
			printf("%d ", arr[k][t]);
		}
		puts("");
	}

}