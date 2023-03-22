#define NUM_ITER 1026928

#include <header.h>

int main_bench()
{
	char c[50]={'\0'},s[50]={'\0'};
	my_scanf("%s %s",c,s);
	int n1,n2;
	n1=strlen(c);
	n2=strlen(s);
	int i=0,j;
	int a;
	int count=0;
	for(j=0;j<n2-n1+1;j++){
		if(c[i]==s[j]){
			a=j;
			for(i=i+1;i<n1;i++){
				j=j+1;
				if(c[i]!=s[j]){
					count++;
				}
			}
			if(count==0){
				my_printf("%d\n",a);
				break;
			}
		}
	}
	return 0;
}

