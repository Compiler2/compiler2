#include <header.h>

int main_bench()
{
int k,i,j;
char a[20],b[20];
my_scanf("%s",a);
my_scanf("%s",b);
k=0;
for(i=0;i<strlen(a);i++)
{
	for(j=0;j<20;j++)
	{
		if(a[i]==b[j])
		{	k=k+1;
	
		b[j]='0';
		break;
		}
		
	
		
	}
}
if(strlen(a)!=strlen(b))
my_printf("NO");
else{
if(k==strlen(a))
my_printf("YES");
else my_printf("NO");

}

return 0;
	
}