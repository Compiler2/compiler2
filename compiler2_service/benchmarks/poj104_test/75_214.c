#include <header.h>


int main_bench()
{
	int i,j,c,k,r,n,m,max=0,flag,temp,a[1000]={0},b[1000]={0},d[1000]={0};
	j=1;
	my_scanf("%d",&a[0]);
     while(c=getchar()!='\n')
	 {my_scanf("%d",&a[j]);j++;}
	 j=1;
	 my_scanf("%d",&b[0]);
      while(c=getchar()!='\n')
	  {my_scanf("%d",&b[j]);j++;}
     my_printf("%d ",j);
	
    for(i=0;i<1000;i++)
		d[i]=0;
	 for(i=0;i<1000;i++)
		for(k=0;k<j;k++)
			if(a[k]<=i&&b[k]>i) d[i]++;
     
	 for(i=0;i<1000;i++)
		 if(max<d[i]) {max=d[i];r=i;}
		 my_printf("%d\n",max);
}