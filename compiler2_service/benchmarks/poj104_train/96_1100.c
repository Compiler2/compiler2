#include <header.h>

int main_bench()
{
  char c[200];
  int a[200],b[200];
  int yushu;
  gets(c);
  int m,i;
  m=strlen(c);
  for(i=0;i<m;i++)
  {
	a[i]=c[i]-'0';
  }
  if(m>2)
 {
		if((a[0]*10+a[1])>=13)
 {
		yushu=a[0];
		for(i=1;i<m;i++)
		{
			b[i]=(yushu*10+a[i])/13;
			yushu=(yushu*10+a[i])%13;
		}
	for(i=1;i<m;i++)	
	{
		my_printf("%d",b[i]);
	}
	my_printf("\n");
	my_printf("%d",yushu);
 }
 else
 {
		yushu=a[0]*10+a[1];
		for(i=2;i<m;i++)
		{
			b[i]=(yushu*10+a[i])/13;
			yushu=(yushu*10+a[i])%13;
		}
	for(i=2;i<m;i++)	
	{
		my_printf("%d",b[i]);
	}
	my_printf("\n");
	my_printf("%d",yushu);
 }
}
if(m==2)
{
	my_printf("%d\n",(a[0]*10+a[1])/13);
	my_printf("%d",(a[0]*10+a[1])%13);
}
if(m==1)
{
	my_printf("0\n");
	my_printf("%d",a[0]);
} 	
}