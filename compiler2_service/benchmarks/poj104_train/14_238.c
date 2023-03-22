#include <header.h>

struct Student
{
	int num;
	int math;
	int chinese;
}stu[100000];
int main_bench()
{
	int n,i,j,s[100000],t[100000],c=0;
	my_scanf("%d",&n);
    for(i=0;i<=(n-1);i++)
	{
	   my_scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].math);
	}
    for(i=0;i<=(n-1);i++)
	{
		s[i]=stu[i].math+stu[i].chinese;
	    t[i]=s[i];
	}
	int p;
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=(n-i-2);j++)
		{
            if(s[j]>=s[j+1])
			{
				p=s[j];
				s[j]=s[j+1];
				s[j+1]=p;
			}
		}
	}
	int d[3];
	for(i=0;i<=(n-1);i++)
	{
		if(t[i]==s[n-1])
		{
			my_printf("%d %d",stu[i].num,t[i]);
			d[c]=stu[i].num;
	        my_printf("\n");
			c=c+1;
            if(c==3)break;
		}
		if(c==3)break;
	}
	for(i=0;i<=(n-1);i++)
	{
        if(t[i]==s[n-2])
		{   
			if(stu[i].num==d[0]||stu[i].num==d[1]||stu[i].num==d[2])break;
			my_printf("%d %d",stu[i].num,t[i]);
	        d[c]=stu[i].num;
			my_printf("\n");
			c=c+1;
		    if(c==3)break;
		}
		if(c==3)break;
	}
	for(i=0;i<=(n-1);i++)
	{
        if(t[i]==s[n-3])
		{
			if(stu[i].num==d[0]||stu[i].num==d[1]||stu[i].num==d[2])break;
			my_printf("%d %d",stu[i].num,t[i]);
            d[c]=stu[i].num;
	        my_printf("\n");
			c=c+1;
		    if(c==3)break;
		}
		if(c==3)break;
	}
	return 0;
}

