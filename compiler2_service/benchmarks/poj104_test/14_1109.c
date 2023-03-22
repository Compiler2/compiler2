#include <header.h>

int main_bench()
{
	struct student{int id,chin,math,z;}p[100000];
	int id,math,chin,z,i,n,f,s,t,id1,id2,id3;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&id,&chin,&math);
		p[i].id=id;
		p[i].math=math;
		p[i].chin=chin;
	}

	for(i=0;i<n;i++)
	{ 
		id=p[i].id;
		math=p[i].math;
		chin=p[i].chin;
		z=math+chin;
		
		if(i==0)
		{
			f=s=t=z;
			id1=id2=id3=id;
		}
		else if(i==1)
		{
			if(z>f)
			{
				t=s;id3=id2;s=f;id2=id1;f=z;id1=id;
			}
			else 
			{
				t=s=z;id2=id3=id;
			}
		}
		else
		{
			if(z>f)
			{
				t=s;id3=id2;s=f;id2=id1;f=z;id1=id;
			}
			else if(z>s)
			{
				t=s;id3=id2;s=z;id2=id;
			}
			else if(z>t)
			{
				t=z;id3=id;
			}
		}
	}
	my_printf("%d %d\n",id1,f);
	my_printf("%d %d\n",id2,s);
	my_printf("%d %d\n",id3,t);
	return 0;
}
	

	


 