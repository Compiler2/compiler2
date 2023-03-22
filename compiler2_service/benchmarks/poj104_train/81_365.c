#include <header.h>

int main_bench()
{
    int a[5][5],i,y;
	void move(int a[5][5],int n,int m);
	int judge(int n,int m);
	
	for(i=0;i<5;i++)
		my_scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	int n,m;
	my_scanf("%d %d",&n,&m);

	y=judge(n,m);
	if(y==0)
		my_printf("error");
	else if(y==1)
	{
		move(a,n,m);
       for(i=0;i<5;i++)
		my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
	}
}
int judge(int n,int m)
{
	if(n>=0&&n<5&&m>=0&&m<5)
		return(1);
	else return(0);
}
void move(int a[5][5],int n,int m)
{           int t,j,*p;
            p=&a[0][0];
     
        
			for(j=0;j<5;j++)
		{
			t=*(p+5*n+j);
			*(p+5*n+j)=*(p+5*m+j);
			*(p+5*m+j)=t;
		}
}
		
