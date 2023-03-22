#include <header.h>

int main_bench()
{
	int n,x,y,h,i,k,e,max;
	my_scanf("%d",&n);
	h=0;
	max=0;
	if(n<100)
	{
	  for(i=1;i<=n;i++)
	  {
	     my_scanf("%d%d",&x,&y);
	     if(x<=140&&x>=90&&y>=60&&y<=90&&n!=i)
	       {
		  h+=1;
	       }else if(x>140||x<90||y<60||y>90||n!=i)
	          {
		      if(h>max)
			{
			   max=h;
			}
		      h=0;
		   }else if(n==i)
		      {
			h=h+1;
			if(h>max)
                        {
			   max=h;
			}
		}
	  }my_printf("%d",max);
	}
	return 0;
}