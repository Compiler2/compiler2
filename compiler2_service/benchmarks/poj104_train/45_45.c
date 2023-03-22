#define NUM_ITER 1187249

#include <header.h>

int main_bench(){
	int c;
	char a[51],b[51];
	my_scanf("%s %s",a,b);
	for(int i=0;b[i]!='\0';i++)
	{
		if(a[0]==b[i])
		{
			c=i;
			break;
		}
	}
	my_printf("%d",c);
	return 0;
}