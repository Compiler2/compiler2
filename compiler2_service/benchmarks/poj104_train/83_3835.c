#define NUM_ITER 21224

#include <header.h>

int main_bench(){
	int a,i,b=0;
	double c;
	c=0;
	my_scanf("%d",&a);
	double sa[500];
	int sb[500];
	for(i=0;i<a;i++)
	{
		my_scanf("%d",&(sb[i]));
        b=b+sb[i];
	}
	for(i=0;i<a;i++)
	{
		my_scanf("%lf",&(sa[i]));
		if(sa[i]>=90){sa[i]=4.0;}
		else if(sa[i]>=85){sa[i]=3.7;}
		else if(sa[i]>=82){sa[i]=3.3;}
		else if(sa[i]>=78){sa[i]=3.0;}
		else if(sa[i]>=75){sa[i]=2.7;}
		else if(sa[i]>=72){sa[i]=2.3;}
		else if(sa[i]>=68){sa[i]=2.0;}
		else if(sa[i]>=64){sa[i]=1.5;}
		else if(sa[i]>=60){sa[i]=1.0;}
		else{sa[i]=0;}
		sa[i]=sa[i]*sb[i];
	}
	for(i=0;i<a;i++){
		c=c+sa[i];
	}
	c=c/b;
	my_printf("%.2lf",c);
	return 0;
}
		