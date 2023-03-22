#define NUM_ITER 129789

#include <header.h>

int main_bench()
{
	int a[300],i,j,k,t;
	for(i=0;;i++)
	{   
		my_scanf("%d",&a[i]);
		if (getchar()=='\n')
		{i++;
		break;}
	}
	
	if(i==1)
		my_printf("No");
	else
	{
		for(j=0;j<(i-1);j++)
		for(k=0;k<(i-1-j);k++)

			if(a[k]>a[k+1])
			{
				t=a[k];a[k]=a[k+1];a[k+1]=t;
			}


     for(k=(i-1);k>0;k--)
	 {
		 if(a[k-1]<a[k])
		 {
			 my_printf("%d",a[k-1]);
			 break;
		 }
	 }
	 if(k==0)
		 my_printf("No");
	}
}
