#define NUM_ITER 15448

#include <header.h>

int main_bench()
{
	int n,i,j,k,a[200],b[200][13],c[200][13];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	    if((a[i]%4==0&&a[i]%100!=0)||a[i]%400==0)
		{
			b[i][1]=0;
			b[i][2]=31;
	        b[i][3]=60;
            b[i][4]=91;
	        b[i][5]=121;
	        b[i][6]=152;
	        b[i][7]=182;
	        b[i][8]=213;
	        b[i][9]=244;
	        b[i][10]=274;
	        b[i][11]=305;
	        b[i][12]=335;
	        c[i][1]=0;
			c[i][2]=31;
         	c[i][3]=60;
	        c[i][4]=91;
        	c[i][5]=121;
			c[i][6]=152;
            b[i][10]=274;
	        b[i][11]=305;
	        b[i][12]=335;
	        c[i][1]=0;
			c[i][2]=31;
         	c[i][3]=60;
	        c[i][4]=91;
        	c[i][5]=121;
			c[i][6]=152;
            c[i][7]=182;
            c[i][8]=213;
        	c[i][9]=244;
       	    c[i][10]=274;
	        c[i][11]=305;
	        c[i][12]=335;
			my_scanf("%d %d",&j,&k);
			if((c[i][k]-b[i][j])%7==0)
			{
				my_printf("YES\n");
			}
			else
			{
				my_printf("NO\n");
			}
		}
		else
		{
			b[i][1]=0;
			b[i][2]=31;
	        b[i][3]=59;
            b[i][4]=90;
	        b[i][5]=120;
	        b[i][6]=151;
	        b[i][7]=181;
	        b[i][8]=212;
	        b[i][9]=243;
	        b[i][10]=273;
	        b[i][11]=304;
	        b[i][12]=334;
	        c[i][1]=0;
	        c[i][2]=31;
         	c[i][3]=59;
	        c[i][4]=90;
        	c[i][5]=120;
			c[i][6]=151;
			c[i][7]=181;
			c[i][8]=212;
        	c[i][9]=243;
       	    c[i][10]=273;
	        c[i][11]=304;
	        c[i][12]=334;
			my_scanf("%d%d",&j,&k);
			if((c[i][k]-b[i][j])%7==0)
			{
				my_printf("YES\n");
			}
			else
			{
				my_printf("NO\n");
			}
		}
	}
	return 0;
}

