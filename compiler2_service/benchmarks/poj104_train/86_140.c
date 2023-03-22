#define NUM_ITER 1451

#include <header.h>

main_bench()
{
	  int m,a[100],n,i,j,t,p,q;
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	
  
    my_scanf("%d",&m);
    for(i=0;i<m;i++)
      { my_scanf("%d",&a[i]);}
    
       
       	t=m*3+a[m-1];
       	p=(m-1)*3+a[m-2];
       	q=(m-2)*3+a[m-3];
       	if(t<=60)
       	{my_printf("%d\n",a[m-1]+(60-t));}
       	else if(t>60&&p<=60&&(a[m-1]-a[m-2])>=(60-p))
       	{my_printf("%d\n",a[m-2]+(60-p));}
        else if(t>60&&p<=60&&(a[m-1]-a[m-2])<(60-p))
        {my_printf("%d\n",a[m-1]);}
       	else if(p>60&&q<=60&& (a[m-2]-a[m-3])>=(60-q)  )
       	{my_printf("%d\n",a[m-3]+(60-q));}
       	else if(p>60&&q<=60&& (a[m-2]-a[m-3])<(60-q))
       	{my_printf("%d\n",a[m-2]);}
          
       
	}
	return 0;
}