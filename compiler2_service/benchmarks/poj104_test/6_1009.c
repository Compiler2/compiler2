#define NUM_ITER 31

#include <header.h>

int main_bench()
{
	int s[100][100],h,l,k,m,n,i,j,w,sum;
	my_scanf("%d",&k);
	
	for(l=1;l<=k;l++)
	{
		my_scanf("%d %d",&m,&n);
		w=m;
		h=n;
	   i=0;
	   while(i<m)
	   {
		   j=0;
		   while(j<n)
		   {
			   my_scanf("%d",&s[i][j]);
			   j++;
		   }
		i++;
	   }
	   sum=0;
	   if(h>1&&w>1)
		{
		  i=0;
		  while(i<w)
		  {
			sum+=s[i][0]+s[i][h-1];
			i++;
		  }
		  j=0;
		  while(j<h)
		  {
			sum+=s[0][j]+s[w-1][j];
			j++;
		  }
		  sum=sum-s[0][0]-s[0][h-1]-s[w-1][0]-s[w-1][h-1];
		}
		if(h==1&&w==1)
		{
            sum=s[0][0];
		}
		if(h==1&&w>1)
		{
			i=0;
			while(i<w)
			{
			  sum+=s[i][0];
			  i++;
			}
		}
		if(h>1&&w==1)
		{
			j=0;
			while(j<h)
			{
			  sum+=s[0][j];
			  j++;
			}
		}
         if(h==0||w==0)
        {
            sum=0;
        }
        my_printf("%d\n",sum);
    }
    return 0;
}