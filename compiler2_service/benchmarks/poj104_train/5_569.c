#define NUM_ITER 921247

#include <header.h>

main_bench()
{
	float a,f;
	int x,y,b=0,c=0;
	char d1[501],d2[501];
	my_scanf ("%f",&a);
	my_scanf ("%s",d1);
	my_scanf ("%s",d2);
	x=strlen(d1);y=strlen(d2);
	if (x!=y)
	my_printf ("error");
	else
	{for (int i=0;i<=x-1;i++)
     {if ((d1[i]=='A'||d1[i]=='T'||d1[i]=='C'||d1[i]=='G')&&(d2[i]=='A'||d2[i]=='T'||d2[i]=='C'||d2[i]=='G'))
  		 {if (d1[i]==d2[i])
		   b++;}
  	  else
  	  {c=1;break;}		 		 
     }
    f=(float)b/(float)x;
    if (c==0&&f>a)
    my_printf ("yes");
    else if (c==0&&f<=a)
    my_printf ("no");
    else 
    my_printf ("error");
	}
}