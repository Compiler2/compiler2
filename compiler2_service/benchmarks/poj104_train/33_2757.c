#define NUM_ITER 1425

#include <header.h>


int main_bench(){
	int a[256] , i , n  ;
	char ch;
	a['A']='T';
	a['T']='A';
	a['G']='C';
	a['C']='G';
	my_scanf("%d\n", &n );

	while(n--){
		ch=getchar();
		while(ch!='\n') {
			putchar(a[ch]);
			ch=getchar();
		}
		putchar('\n');
	}
	return 0;
}
