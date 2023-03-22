#define NUM_ITER 5095

#include <header.h>

int main_bench()
{
	int n,i,j,a[300],temp,count1=0,count2=0;
	double aver=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
			aver+=a[i];
	}
     aver=aver/n;
	 for(i=n-1;i>0;i--)
		 for(j=0;j<i;j++)
		 {
			 if(a[j]>a[j+1])
			 {
               temp=a[j+1];
			   a[j+1]=a[j];
                  a[j]=temp;
			 }
		 }
		 for(i=0;i<n;i++)
		 {
			 if(a[i]==a[0])
			 {
                count1++;
			 }
			 if(a[i]==a[n-1])
			 {
				 count2++;
			 }
		 }
		 if((aver-a[0])>(a[n-1]-aver))
		 {
			 for(i=0;i<count1-1;i++)
			 {
				 my_printf("%d,",a[i]);
				 
			 }
                 my_printf("%d",a[count1-1]);
		 }
           if((aver-a[0])<(a[n-1]-aver))
		   {
			 for(i=n-count2;i<n-1;i++)
			 {
				 my_printf("%d,",a[i]);
			 }
                 my_printf("%d",a[n-1]);
		   }
           if((aver-a[0])==(a[n-1]-aver))
		   {
	          for(i=0;i<count1;i++)
			  {
				 my_printf("%d,",a[i]);
			  }
               for(i=n-count2;i<n-1;i++)
			   {
				 my_printf("%d,",a[i]);
			   }
                 my_printf("%d",a[n-1]);
		   }
		   return 0;
}