#define NUM_ITER 930075

#include <header.h>



int main_bench()
{
	char s1[100],s2[100];
	int i,j,f;
	my_scanf("%s%s",s1,s2);
	for (i=0;i<strlen(s2);i++){
		for (j=0;j<strlen(s1);j++)
			if (s1[j]!=s2[i+j])	break;
		if (j==strlen(s1)) break;
	}
	my_printf("%d\n",i);
	return 0;
}