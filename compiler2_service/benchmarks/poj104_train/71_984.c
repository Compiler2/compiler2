#include <header.h>

int main_bench()
{
    int y,m1,m2,i,n,j,k,d1,d2;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%d%d%d",&y,&m2,&m1);
		if ((y%4==0)&&(y%100!=0)||(y%400==0))
		{
		   if ((m1==1&&m2==4)||(m1==4&&m2==1))
			   my_printf ("YES\n");
		   else if ((m1==1&&m2==7)||(m1==7&&m2==1))
			   my_printf ("YES\n");
		   else if ((m1==7&&m2==4)||(m1==4&&m2==7))
			   my_printf ("YES\n");
		   else if ((m1==2&&m2==8)||(m1==8&&m2==2))
			   my_printf ("YES\n");
		   else if ((m1==3&&m2==11)||(m1==11&&m2==3))
			   my_printf ("YES\n");
		   else if ((m1==9&&m2==12)||(m1==12&&m2==9))
			   my_printf ("YES\n");

		   else
			   my_printf("NO\n");
		}
		else 
		{
			if ((m1==1&&m2==10)||(m1==10&&m2==1))
			   my_printf ("YES\n");
			else if ((m1==3&&m2==11)||(m1==11&&m2==3))
			   my_printf ("YES\n");
			else if ((m1==2&&m2==11)||(m1==11&&m2==2))
			   my_printf ("YES\n");
			else if ((m1==3&&m2==2)||(m1==2&&m2==3))
			   my_printf ("YES\n");
			else if ((m1==4&&m2==7)||(m1==7&&m2==4))
			   my_printf ("YES\n");
			else if ((m1==9&&m2==12)||(m1==12&&m2==9))
			   my_printf ("YES\n");
			else my_printf ("NO\n");

		}

	}
	return 0;
}
