#define NUM_ITER 1315990

#include <header.h>






int main_bench()
{
	char a[100];
	char shang[100];
	my_scanf("%s",a);
	int sh,yushu=a[0]-'0',i;
	
	if(((a[0]-'0')*10+(a[1]-'0'))<13&&a[2]=='\0')my_printf("0");
	if(a[1]=='\0')my_printf("0");
	for(i=1;a[i]!='\0';i++)
	{
		sh=(yushu*10+(a[i]-'0'))/13;
		yushu=(yushu*10+(a[i]-'0'))%13;
		shang[i-1]=sh;
		if(i!=1||sh!=0)my_printf("%d",sh);
	}
	
		
	my_printf("\n%d",yushu);
	
}

