#define NUM_ITER 1070656

#include <header.h>


int main_bench()
{
	int k;
	char a[100],b[100],*p1,*p2,*p3,temp;
	p1=a;p2=b;p3=b;
	my_scanf("%s%s",p1,p2);
	if (strlen(a)!=strlen(b)) my_printf("NO");
	else for (;*p1!='\0';p1++)
	{
		k=0;
		for (;*p2!='\0';p2++)
			if (*p2==*p1)
			{
				temp=*p2;*p2=*p3;*p3=temp;
				p3++;
				p2=p3;
				k=1;
				break;
			}
		if (k==0)
		{
			my_printf("NO\n");
			break;
		}
	}
	if (k==1) my_printf("YES\n");
}