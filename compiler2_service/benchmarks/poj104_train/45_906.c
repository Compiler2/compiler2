#define NUM_ITER 368410

#include <header.h>

int main_bench()
{
	int i,j,k,a;
	char str1[50],str2[50];
	j=0;
	k=0;
	my_scanf("%s %s",str1,str2);
	for(i=0;i<50;j++)
	{
		if(str1[i]==str2[j]){i++;k++;}
		if((str1[i]!='\0')&&(str1[i]!=str2[j+1])){k=0;i=0;}
		if(str1[i]=='\0')break;
	
	}
	a=j-k+1;
my_printf("%d\n",a);
        return 0;
}