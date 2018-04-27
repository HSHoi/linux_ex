#include <stdio.h>

struct Flags{
	union{
		struct{
			unsigned short a : 3;
			unsigned short b : 2;
			unsigned short c : 7;
			unsigned short d : 4;
		};
		unsigned short e;
	};
};

int main(){
	struct Flags fl ={0,};
	fl.a = 4;
	fl.b = 2;
	fl.c = 80;
	fl.d = 15;
	printf("%u\n", fl.e);
	return 0;
}
