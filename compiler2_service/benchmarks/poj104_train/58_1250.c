#define NUM_ITER 27047

#include <header.h>

int main_bench()
{
	int i,n,k,t,j;
	char c[81];
    char*p;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(c);
        p=c;
		k=strlen(p);
		for(j=0;j<k;j++){
			if(*p>='0'&&*p<='9'){t=-1;break;}
		if((*(p+j)>='0'&&*(p+j)<='9')||(*(p+j)>='a'&&*(p+j)<='z')||(*(p+j)>='A'&&*(p+j)<='Z')||(*(p+j)=='_'))
		{
			t++;
		}else{t=-1;break;}
	}if(t==-1){my_printf("0\n");}
	else{my_printf("1\n");}
	}
	return 0;
}