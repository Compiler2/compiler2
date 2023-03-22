#include <header.h>

main_bench()
{
     char string[101],a[101];
     int i,l,j;
        my_scanf("%s",string);
        l=strlen(string);
        if(l==1)
          {       
          my_printf("0\n");
          my_printf("%d\n",string[0]-'0');
          }
        else if(l==2)
          {
            if(((string[0]-'0')*10+(string[1]-'0'))<13)
            {
               my_printf("0\n");
               my_printf("%d",string[0]-'0');
               my_printf("%d\n",string[1]-'0');
            }
            else
            {
               my_printf("%d\n",((string[0]-'0')*10+(string[1]-'0'))/13);
               my_printf("%d\n",((string[0]-'0')*10+(string[1]-'0'))%13);
            }
          }
        else
     {                                                       
                                        
        if(((string[0]-'0')*10+(string[1]-'0'))<13)
        {    
            a[0]=((string[0]-'0')*100+(string[1]-'0')*10+(string[2]-'0'))/13;
            my_printf("%d",a[0]);
            string[2]=((string[0]-'0')*100+(string[1]-'0')*10+(string[2]-'0'))%13+'0';
            for(j=2;j<l-1;j++)
            {
               a[j-1]=((string[j]-'0')*10+string[j+1]-'0')/13;
               string[j+1]=((string[j]-'0')*10+(string[j+1]-'0'))%13+'0';
               my_printf("%d",a[j-1]);
            }
            my_printf("\n");
            my_printf("%d\n",(string[l-1]-'0'));   
        }
        else
        {
            for(j=0;j<l-1;j++)
            {
               a[j]=((string[j]-'0')*10+(string[j+1]-'0'))/13;
               string[j+1]=((string[j]-'0')*10+(string[j+1]-'0'))%13+'0';
               my_printf("%d",a[j]);
            }
            my_printf("\n");
            my_printf("%d\n",(string[l-1]-'0'));
        } 
     }
     
     getchar();
     getchar();
}     
          