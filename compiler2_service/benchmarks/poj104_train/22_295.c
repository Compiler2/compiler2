#include <header.h>

int main_bench()
{
	int i,j,temp,n,a[300]={0};
	char array[1000],*p=array;
	my_scanf("%s",array);
    for(i=0,j=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)==',') j++;
		else a[j]=10*a[j]+*(p+i)-48;
	}
	n=j+1;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	for(i=1;i<n;i++)
		if(*(a+i)!=*a){my_printf("%d\n",a[i]);break;}
		if(i==n)my_printf("No\n");
}