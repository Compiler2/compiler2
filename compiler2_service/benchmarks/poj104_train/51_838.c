#define NUM_ITER 1097380

#include <header.h>

int main_bench()
{
    struct sub
    {
           char a[5];
           int counter;
    }sub[500],*p1=sub,*p2;
    int i,j,k,n,len,counter=0,mark,flag,max=0;
    char str[501],*pstr1,*pstr2;
    my_scanf("%d",&n);
    my_scanf("%s",&str);
    len=strlen(str);
    pstr2=str;
    for(i=0;i<len+1-n;i++)
    {
                          pstr1=(p1+i)->a;
                    for(j=0;j<n;j++)
                    {
                                      *(pstr1+j)=*(pstr2+i+j);
                    }
                    *(pstr1+n)='\0';
                    counter++;
    }
    for(i=0;i<counter;i++)
    {
                          mark=1;
                          pstr1=(p1+i)->a;
                          for(j=i+1;j<counter;j++)
                          {
                                                  pstr2=(p1+j)->a;
                                                  flag=0;
                                                  for(k=0;k<n;k++)
                                                  {
                                                                  if(*(pstr1+k)==*(pstr2+k))
                                                                  flag++;
                                                  }
                                                  if(flag==n)
                                                  mark++;
                          }
                          if(mark>max)
                          max=mark;
                          (p1+i)->counter=mark;
    }
    if(max==1)
    my_printf("NO");
    else
    {
        my_printf("%d\n",max);
        for(i=0;i<counter;i++)
        if((p1+i)->counter==max)
        my_printf("%s\n",(p1+i)->a);
    }
    return 0;
}