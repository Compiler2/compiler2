#define NUM_ITER 1403055

#include <header.h>

int main_bench()
{
char string[101];
my_scanf("%s",string);
int len=strlen(string);
int i;
int a[100]={0};
int num=0,j;
for(i=0;i<len;i++){
	if(string[i]==string[0]) {
		a[num]=i;
		num++;}
	if(string[i]!=string[0]){
		for(j=num-1;j>=0;j--){
			if(a[j]!=-1) {
				my_printf("%d",a[j]);
				a[j]=-1;
				break;
			}
		}
		my_printf(" %d\n",i);
	}
	
}


	return 0;
}