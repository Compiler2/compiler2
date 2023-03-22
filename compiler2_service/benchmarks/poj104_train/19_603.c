#define NUM_ITER 788717

#include <header.h>

int main_bench()
{
    char n[100][1000];
    int i,j,m=0,l,k=0;
    char w[1000],x[1000],y[1000];
    gets(w);
    j=strlen(w);
    for(i=0;i<j;i++)
       {if(w[i]!=' ')
          {n[m][k]=w[i];k++;}
        else{n[m][k]='\0';m++;k=0;}
       }
    n[m][k]='\0';m++;
    my_scanf("%s",x);
    my_scanf("%s",y);
    for(i=0;i<m;i++)
       if(strcmp(n[i],x)==0)
         strcpy(n[i],y);
    for(i=0;i<m;i++)
       if(i==m-1)
       my_printf("%s",n[i]);
       else{my_printf("%s ",n[i]);}     
}
