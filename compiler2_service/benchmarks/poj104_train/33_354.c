#include <header.h>

int main_bench()
{
	int n,i,j,num;
	char a[256],b[256];
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(a);
		num=strlen(a);
		for(j=0;j<num;j++){
			switch(a[j])
			{
			case'A':b[j]='T';continue;
			case'T':b[j]='A';continue;
			case'C':b[j]='G';continue;
			case'G':b[j]='C';continue;
			}
		}
		for(j=0;j<num;j++){
			my_printf("%c",b[j]);
		}
		my_printf("\n");
	}
	return 0;
}