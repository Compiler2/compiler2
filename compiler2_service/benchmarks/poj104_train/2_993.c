#define NUM_ITER 18578

#include <header.h>


int main_bench()
{
	struct book{
		int num;
		char author[27];
	}B[1000];
	char A;
	int m,i,j,a[26]={0},max;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d%s",&B[i].num,B[i].author);
	}
	for(i=0;i<m;i++){
		for(j=0;;j++){
			if(B[i].author[j]==0)
				break;
			else
				a[B[i].author[j]-65]++;
		}
	}
	max=a[0];
	A=65;
	for(i=0;i<26;i++){
		if(a[i]>max){
			max=a[i];
			A=i+65;
		}
	}
	my_printf("%c\n%d",A,max);
	for(i=0;i<m;i++){
		for(j=0;;j++){
			if(B[i].author[j]==0)
				break;
			if(B[i].author[j]==A)
				my_printf("\n%d",B[i].num);
		}
	}
	return 0;
}