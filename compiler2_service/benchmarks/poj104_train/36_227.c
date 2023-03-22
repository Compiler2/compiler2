#define NUM_ITER 872277

#include <header.h>

char str1[1000];
char str2[1000];
void paixu(char a[]);
int main_bench(){
	my_scanf("%s",&str1);
	my_scanf("%s",&str2);
	if (strlen(str1)!=strlen(str2)){
		my_printf("NO\n");
		return 0;
	}
	paixu(str1);
	paixu(str2);
	int len=strlen(str1);
	int check=1;
	int i;
	for(i=0;i<len;i++){
		if (str1[i]!=str2[i]) {
			check=0;break;}
	}
	if (check==1){
		my_printf("YES\n");
	}
	else
	{
	my_printf("NO\n");
	}



	return 0;
}
void paixu(char a[]){
	int len=strlen(a);
	int i,j;
	for(j=0;j<len-1;j++)
		for(i=0;i<len-1-j;i++){
			if (a[i]>a[i+1]){
				char temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		
		}
}
