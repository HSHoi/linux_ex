#include <stdio.h>

struct Test1{
	char a;
	int b;
	char c;
	int d;
};

struct Test2{
	char a;
	char b;
	char c;
	char d;
};

int main(){
	struct Test1 a;
	struct Test2 b;

	printf("%p\n", &a.a);
	printf("%p\n", &a.b);
	printf("%p\n", &a.c);
	printf("%p\n", &a.d);
	puts("");
	printf("%p\n", &b.a);
	printf("%p\n", &b.b);
	printf("%p\n", &b.c);
	printf("%p\n", &b.d);

	return 0;
}
