#include <header.h>



int main_bench()
{
	int a,b;
	int i,j;
	int c=0;
	char n[20];
	int num=0;

    my_scanf("%d%s%d",&a,n,&b);

	int k;

	
	for(i=0;n[i]!='\0';i++)
	{c++;}

	
	for(i=0;n[i]!='\0';i++)
	{
		k=1;
		for(j=c-i-1;j>0;j--)
		{
	        k*=a;
		}

		switch (n[i])
		{
		case 'a': num+=10*k;break;
		case 'A': num+=10*k;break;
		case 'b': num+=11*k;break;
		case 'B': num+=11*k;break;
		case 'c': num+=k*12;break;
		case 'C': num+=k*12;break;
		case 'd': num+=k*13;break;
		case 'D': num+=k*13;break;
		case 'e': num+=k*14;break;
		case 'E': num+=k*14;break;
		case 'f': num+=k*15;break;
		case 'F': num+=k*15;break;
		case 'g': num+=k*16;break;
		case 'G': num+=k*16;break;
		case 'h': num+=k*17;break;
		case 'H': num+=k* 17;break;
		case 'i': num+=k* 18;break;
		case 'I': num+=k* 18;break;
		case 'j': num+=k* 19;break;
		case 'J': num+=k* 19;break;
		case 'k': num+=k* 20;break;
		case 'K': num+=k* 20;break;
		case 'l': num+=k* 21;break;
		case 'L': num+=k* 21;break;
		case 'm': num+=k* 22;break;
		case 'M': num+=k* 22;break;
		case 'n': num+=k* 23;break;
		case 'N':num+=k* 23;break;
		case 'o':num+=k* 24;break;
		case 'O':num+=k* 24;break;
		case 'p':num+=k* 25;break;
		case 'P':num+=k* 25;break;
		case 'q':num+=k* 26;break;
		case 'Q':num+=k* 26;break;
		case 'r':num+=k* 27;break;
		case 'R':num+=k* 27;break;
		case 's':num+=k* 28;break;
		case 'S':num+=k* 28;break;
		case 't':num+=k* 29;break;
		case 'T':num+=k* 29;break;
		case 'u':num+=k* 30;break;
		case 'U':num+=k* 30;break;
		case 'v':num+=k* 31;break;
		case 'V':num+=k* 31;break;
		case 'w':num+=k* 32;break;
		case 'W':num+=k* 32;break;
		case 'x':num+=k* 33;break;
		case 'X':num+=k* 33;break;
		case 'y':num+=k* 34;break;
		case 'Y':num+=k* 34;break;
		case 'z':num+=k* 35;break;
		case 'Z':num+=k* 35;break;
		case '0':num+=k* 0;break;
		case '1':num+=k* 1;break;
        case '2':num+=k* 2;break;
        case '3':num+=k* 3;break;
        case '4':num+=k* 4;break;
        case '5':num+=k* 5;break;
        case '6':num+=k* 6;break;
        case '7':num+=k* 7;break;
        case '8':num+=k* 8;break;
        case '9':num+=k* 9;break;

		}
	}
	

	int p[20];
	int q,count=0;
	for(i=0;(num/b)>0;i++)
	{
		q=num%b;
		p[i]=q;
		count++;
		num=num/b;
	}
		switch (num)
		{
		case 10:my_printf("A");break;
		case 11:my_printf("B");break;
		case 12:my_printf("C");break;
		case 13:my_printf("D");break;
		case 14:my_printf("E");break;
		case 15:my_printf("F");break;
		case 16:my_printf("G");break;
		case 17:my_printf("H");break;
		case 18:my_printf("I");break;
		case 19:my_printf("J");break;
		case 20:my_printf("K");break;
		case 21:my_printf("L");break;
		case 22:my_printf("M");break;
		case 23:my_printf("N");break;
		case 24:my_printf("O");break;
		case 25:my_printf("P");break;
		case 26:my_printf("Q");break;
		case 27:my_printf("R");break;
		case 28:my_printf("S");break;
		case 29:my_printf("T");break;
		case 30:my_printf("U");break;
		case 31:my_printf("V");break;
		case 32:my_printf("W");break;
		case 33:my_printf("X");break;
		case 34:my_printf("Y");break;
		case 35:my_printf("Z");break;
		default:my_printf("%d",num);break;
		}
    
    for(i=count-1;i>=0;i--)
	{
		switch (p[i])
		{
		case 10:my_printf("A");break;
		case 11:my_printf("B");break;
		case 12:my_printf("C");break;
		case 13:my_printf("D");break;
		case 14:my_printf("E");break;
		case 15:my_printf("F");break;
		case 16:my_printf("G");break;
		case 17:my_printf("H");break;
		case 18:my_printf("I");break;
		case 19:my_printf("J");break;
		case 20:my_printf("K");break;
		case 21:my_printf("L");break;
		case 22:my_printf("M");break;
		case 23:my_printf("N");break;
		case 24:my_printf("O");break;
		case 25:my_printf("P");break;
		case 26:my_printf("Q");break;
		case 27:my_printf("R");break;
		case 28:my_printf("S");break;
		case 29:my_printf("T");break;
		case 30:my_printf("U");break;
		case 31:my_printf("V");break;
		case 32:my_printf("W");break;
		case 33:my_printf("X");break;
		case 34:my_printf("Y");break;
		case 35:my_printf("Z");break;
		default:my_printf("%d",p[i]);break;
		}
	}

	return 0;
}

