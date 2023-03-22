#include <header.h>

int main_bench()
{
	int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int y,p,q,n,i;
    int s=0;
	int t=0;
	my_scanf ("%d",&n);
	while (t<n)
	{ t++;s=0;
	my_scanf ("%d %d %d",&y,&p,&q);
	if (y%4!=0) {y=1;}
	else if ((y%100==0)&&(y%400!=0)) {y=1;}
	else {y=0;}
    if (y==1)
	{  
		if (p<q) 
		{
		 for (i=p-1;i<q-1;i++)
		 {
		 s=s+x[i];
		 }

		}
	    else 
		{
		for (i=q-1;i<p-1;i++)
		 {
		 s=s+x[i];
		 }
		
		}

		if (s%7==0) 
		{
	    my_printf ("YES\n");
		}
        else my_printf ("NO\n");

	}




   if (y==0)
	{
	
	
	if (p<q) 
		{
		 for (i=p-1;i<q-1;i++)
		 {
		 s=s+r[i];
		 }

		}
	    else 
		{
		for (i=q-1;i<p-1;i++)
		 {
		 s=s+r[i];
		 }
		
		}

		if (s%7==0) 
		{
	    my_printf ("YES\n");
		}
        else my_printf ("NO\n");
	
	
	
	}
	}  

	return 0;
}
