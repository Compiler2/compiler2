#define NUM_ITER 1211

#include <header.h>

void count()
{
	int k,m1=0,m2=0,s=0,t=0,i=0;
		while(k>1){my_scanf("%d",&m1);k--;}
		my_scanf("%d",&k);
		while(k>0)
		{
			m1=m2;
			my_scanf("%d",&m2);
			m1=m2-m1;
			while(i<m1)
			{
				i++;
				t++;if(t>60) {break;break;}
				s++;
				}
				i=0;
			t+=3;
				if(t>60) break;
			k--;
			}
			if(t<60) s+=60-t;
		my_printf("%d\n",s);

	}
	
int main_bench()
	{
		int p;
		my_scanf("%d",&p);
		while(p>0)
		{
			count();
			p--;
			}
		return 0;
		}
