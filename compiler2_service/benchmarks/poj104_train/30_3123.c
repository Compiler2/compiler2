#define NUM_ITER 170617

#include <header.h>

int main_bench()
{
	int n,s;
	my_scanf("%d",&n);
	for(;n>=0;n--){
		switch(n){
		case 7:
		case 17:
		case 27:
		case 37:
		case 47:
		case 57:
		case 67:
		case 77:
		case 87:
		case 97: s=s;continue;}
		if(n%7==0||n>=70&&n<=79)
			continue;
		else
			s=s+n*n;}


	my_printf("%d\n",s);
	return 0;
}

