#include <header.h>


int main_bench()
{
	char integral[120],divide[120];
	int mod;
	int i;
	int int1,int2;
	int len,lendivide;
	my_scanf("%s",integral);
	len=strlen(integral);
	int1=(int)(integral[0]-'0');
	int2=(int)(integral[1]-'0');
	if (len==1)
	{
		my_printf("0\n");
		my_printf("%d\n",int1);
	}
	if (len==2 && int1*10+int2<13)
	{
		my_printf("0\n");
		my_printf("%d\n",int1*10+int2);
	}
	if ((len==2 && int1*10+int2>=13) ||(len>2))
	{
	lendivide=((int1*10+int2)<13)? len-2:len-1;
	if (lendivide==len-1)
	{
		for (i=0;i<lendivide;i++)
		{
			if (i==0)
			{
				divide[i]=(char)(((int)(integral[i]-'0')*10+(int)(integral[i+1]-'0'))/13+48);
				mod=((int)(integral[i]-'0')*10+(int)(integral[i+1]-'0'))%13;
			}
			else
			{
				divide[i]=(char)((mod*10+(int)(integral[i+1]-'0'))/13+48);
				mod=(mod*10+(int)(integral[i+1]-'0'))%13;
			}
		}
	}
	if (lendivide==len-2 && lendivide!=0)
	{
		for (i=0;i<lendivide;i++)
		{
			if (i==0)
			{
				divide[i]=(char)(((int)(integral[i]-'0')*100+(int)(integral[i+1]-'0')*10+(int)(integral[i+2]-'0'))/13+48);
				mod=((int)(integral[i]-'0')*100+(int)(integral[i+1]-'0')*10+(int)(integral[i+2]-'0'))%13;
			}
			else
			{
				divide[i]=(char)((mod*10+(int)(integral[i+2]-'0'))/13+48);
				mod=(mod*10+(int)(integral[i+2]-'0'))%13;
			}
		}
	}
	divide[lendivide]='\0';
	my_printf("%s\n",divide);
	my_printf("%d\n",mod);
	}
	return 0;
}