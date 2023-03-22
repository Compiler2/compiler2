#define NUM_ITER 15724

#include <header.h>

int main_bench()
{
    int n,i;
    char x[3]="er",y[4]="ly",z[4]="ing";
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    char a[100],b[3],c[4];
                    my_scanf("%s",a);
                    int j,k;
                    for(j=strlen(a)-2,k=0;j<strlen(a),k<2;j++,k++)
                    {
                                                       b[k]=a[j];
                    }
                    b[2]=0;
                    if(strcmp(b,x)==0||strcmp(b,y)==0)
                    {
                                      for(j=0;j<strlen(a)-2;j++)
                                      my_printf("%c",a[j]);
                                      my_printf("\n");
                                      continue;
                    }
                    for(j=strlen(a)-3,k=0;j<=strlen(a)-1,k<3;j++,k++)
                    {
                                                       c[k]=a[j];
                    }
                    c[3]=0;
                      if(strcmp(c,z)==0)
                    {
                                      for(j=0;j<strlen(a)-3;j++)
                                      my_printf("%c",a[j]);
                                      my_printf("\n");
                                      continue;
                    }
    }
    return 0;
}
