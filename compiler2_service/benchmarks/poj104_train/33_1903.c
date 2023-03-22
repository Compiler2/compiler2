#define NUM_ITER 23519

#include <header.h>

int main_bench()
{
	char a[255],b[255];
	int n,i;
	int a1,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
        my_scanf("%s",a);
		a1=strlen(a);
		for(j=0;j<a1;j++){
			switch(a[j]){
			case 'A':b[j]='T';break;
			case 'T':b[j]='A';break;
			case 'C':b[j]='G';break;
			case 'G':b[j]='C';break;
			}
		    my_printf("%c",b[j]);
		}
		my_printf("\n");
	}

    return 0;
}