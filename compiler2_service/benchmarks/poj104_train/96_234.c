#define NUM_ITER 1179009

#include <header.h>

main_bench()
{
    char a[100];
    char b[100];
    int i,length,n;
    gets(a);
    length=strlen(a);
    if((length==1)||((length==2)&&(a[0]=='1')&&(a[1]<'3')))
    {
        my_printf("0\n");
        puts(a);
    }
    else
    {


                                                               


        if(((a[0]=='1')&&(a[1]<'3'))!=0)
        {
            for(i=0;i<length-1;i++)
        {
            b[i]=(10*(a[i]-'0')+a[i+1]-'0')/13+'0';
            a[i+1]=(10*(a[i]-'0')+a[i+1]-'0')-13*(b[i]-'0')+'0';
        }
            for(i=1;i<length-1;i++)
            {
                my_printf("%c",b[i]);

            }
            my_printf("\n%d",a[length-1]-'0');                

        }
        else
        {
           for(i=0;i<length-1;i++)
        {
            b[i]=(10*(a[i]-'0')+a[i+1]-'0')/13+'0';
            a[i+1]=(10*(a[i]-'0')+a[i+1]-'0')-13*(b[i]-'0')+'0';
        }
            for(i=0;i<length-1;i++)
            {
                my_printf("%c",b[i]);
            }
            my_printf("\n%d",a[length-1]-'0');                

        }


    }
}
