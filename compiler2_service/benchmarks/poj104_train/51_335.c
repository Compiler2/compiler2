#define NUM_ITER 915825

#include <header.h>

int main_bench()
{
    int n;my_scanf("%d\n",&n);
    char a[250];gets(a); int len=strlen(a);int i=0,j=0,k=0,v[250]={0};char b[250][5]={0};
    for(i=0;i<=len-n;i++)
    {

        for(j=i;j<i+n;j++)
        {
            b[k][j-i]=a[j];
        }k++;
    }
   
    int m=v[0];
  for(j=0;j<k;j++)
	{
		for(i=j;i<k;i++)
		{
			if(!strcmp(b[j],b[i]))v[j]++;
		}
        
	}
 
    for(i=0;i<k;i++)
    {
        if(v[i]>m)
        {
            m=v[i];
        }
    }
    if(m>1)
    {


    my_printf("%d\n",m);
    for(i=0;i<k;i++)
    {
        if(v[i]==m)
        {
            my_printf("%s\n",b[i]);
        }
    }
    }
    else{my_printf("NO");}
    return 0;
}