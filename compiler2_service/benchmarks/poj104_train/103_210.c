#define NUM_ITER 1069466

#include <header.h>

 main_bench()
{
     char a[2000];
     int b=1;
     int i,j;
     my_scanf("%s",a);
     for(i=0;a[i]!='\0';i++)
     {
                        if(a[i]>='a'&&a[i]<='z')
                        a[i]=a[i]-32;
     }
     for(j=0;a[j]!='\0';j++)
     {
                        if(a[j]==a[j+1])
                        b=b+1;
                        else
                        {
                            my_printf("(%c,%d)",a[j],b);
                            b=1;
                        }
     }
     getchar();
     getchar();
     getchar();
     getchar();
     getchar();
     
}