#define NUM_ITER 7943

#include <header.h>


int main_bench()
{
	int n,a[300]={0},b[300]={0},i,sum=0,j,temp;
   double aver,dist,temp1;
	my_scanf("%d\n",&n);
	my_scanf("%d",&a[0]);
	for(i=1;i<n;i++)
		my_scanf(" %d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n-1-i;j++)
			if(a[j]>a[j+1]) {temp=a[j];a[j]=a[j+1];a[j+1]=temp;}

	for(i=0;i<n;i++)
      sum+=a[i];

	  aver=sum/(double)n;
  
	 dist=fabs(a[0]-aver);
     for(i=0;i<n;i++)
		if(dist<fabs(a[i]-aver))
			dist=fabs(a[i]-aver);
	for(i=0;i<n;i++)
		if(fabs(dist-fabs(a[i]-aver))<1e-9)
		{my_printf("%d",a[i]);break;}
	for(j=i+1;j<n;j++)
         if(fabs(dist-fabs(a[j]-aver))<1e-9)
		{my_printf(",%d",a[j]);}
		my_printf("\n");
}