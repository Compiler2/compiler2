#define NUM_ITER 906074

#include <header.h>

int main_bench()
{
 int a,b,c;
 my_scanf("%d%d%d",&a,&b,&c);
 int d=c+31;
 int e=c+60;
 int f=c+91;
 int g=c+121;
 int h=c+152;
 int i=c+182;
 int j=c+213;
 int k=c+244;
 int l=c+274;
 int m=c+305;
 int n=c+335;
 int o=c+59;
 int p=c+90;
 int q=c+120;
 int r=c+151;
 int s=c+181;
 int t=c+212;
 int u=c+243;
 int v=c+273;
 int w=c+304;
 int x=c+334;
 if (b==1)
	 my_printf("%d\n",c);
 else if (b==2)
	 my_printf("%d\n",d); 
 if(b>2&&((a%4==0&&a%100!=0)||(a%400==0)))
 {if(b==3)
 my_printf("%d\n",e);
 else if(b==4)
 my_printf("%d\n",f);
  else if(b==5)
 my_printf("%d\n",g);
 else if(b==6)
 my_printf("%d\n",h);
 else if(b==7)
 my_printf("%d\n",i);
 else if(b==8)
 my_printf("%d\n",j);
 else if(b==9)
 my_printf("%d\n",k);
 else if(b==10)
my_printf("%d\n",l);
 else if(b==11)
my_printf("%d\n",m);
 else if(b==12)
my_printf("%d\n",n);
 } 
 else if(b>2&&((a%4!=0)||(a%100==0&&a%400!=0)))
 {if(b==3)
 my_printf("%d\n",o);
 else if(b==4)
my_printf("%d\n",p);
else if(b==5)
my_printf("%d\n",q);
else if(b==6)
my_printf("%d\n",r);
else if(b==7)
my_printf("%d\n",s);
else if(b==8)
my_printf("%d\n",t);
else if(b==9)
my_printf("%d\n",u);
else if(b==10)
my_printf("%d\n",v);
else if(b==11)
my_printf("%d\n",w);
else if(b==12)
my_printf("%d\n",x);

 }
 return 0;
}