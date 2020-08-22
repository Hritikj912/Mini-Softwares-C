#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void A();
void B();
void C();
void D();
void E();
void F();
void G();
void H();
void I();
void J();
void K();
void L();
void M();
void N();
void O();
void P();
void Q();
void R();
void S();
void T();
void U();
void V();
void W();
void X();
void Y();
void Z();
void main()
{

	int i,j,d;
	for(i=1;i<=80;i++)
	printf("*");
	printf("                                  NOSCIP  TECH\n");
	printf("                                  ************\n");
	printf("                           MAKING OF ALPHABETS USING STARS\n");
	printf("                           *******************************\n");
	for(j=1;j<=68;j++)
	printf(" ");
	printf("HRITIK JAIN\n");
	for(i=1;i<=80;i++)
	printf("*");
	do{
	printf("SELECT FROM BELOW CHOICES\n");
	printf("*01* FOR A     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*02* FOR B\n");
	printf("*03* FOR C     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*04* FOR D\n");
	printf("*05* FOR E     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*06* FOR F\n");
	printf("*07* FOR G     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*08* FOR H\n");
	printf("*09* FOR I     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*10* FOR J\n");
	printf("*11* FOR K     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*12* FOR L\n");
	printf("*13* FOR M     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*14* FOR N\n");
	printf("*15* FOR O     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*16* FOR P\n");
	printf("*17* FOR Q     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*18* FOR R\n");
	printf("*19* FOR S     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*20* FOR T\n");
	printf("*21* FOR U     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*22* FOR V\n");
	printf("*23* FOR W     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*24* FOR X\n");
	printf("*25* FOR Y     ><><><><><><><><><><><><><><><><><><><><><><><>     ");
	printf("*26* FOR Z\n");
	printf("******************************   $27$ FOR EXIT   *******************************\n");
    scanf("%d",&d);
    switch(d)
    {
    	case 1:
    	A();
		break;	
		
		case 2:
    	B();
		break;
		
		case 3:
    	C();
		break;
		
		case 4:
    	D();
		break;
		
		case 5:
    	E();
		break;
		
		case 6:
    	F();
		break;
		
		case 7:
    	G();
		break;
		
		case 8:
    	H();
		break;
		
		case 9:
    	I();
		break;
		
		case 10:
    	J();
		break;
		
		case 11:
    	K();
		break;
		
		case 12:
    	L();
		break;
		
		case 13:
    	M();
		break;
		
		case 14:
    	N();
		break;
		
		case 15:
    	O();
		break;
		
		case 16:
    	P();
		break;
		
		case 17:
    	Q();
		break;
		
		case 18:
    	R();
		break;
		
		case 19:
    	S();
		break;
		
		case 20:
    	T();
		break;
		
		case 21:
    	U();
		break;
		
		case 22:
    	V();
		break;
		
		case 23:
    	W();
		break;
		
		case 24:
    	X();
		break;
		
		case 25:
    	Y();
		break;
		
		case 26:
    	Z();
		break;
		
		case 27:
    	exit(0);
		break;
		
		default:
		printf("ENTER CORRECT CHOICE\n");
}
	}while(1);

}
void A()
{
	int i,j,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(n%2==1)
		{
			if((i==1&&(j!=1&&j!=n))||((j==1||j==n)&&(i!=1))||i==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		else if(n%2==0)
		{
		if((i==1&&(j!=1&&j!=n))||((j==1||j==n)&&(i!=1))||i==n/2)
			printf("*");
			else
			printf(" ");	
		}
		}
		printf("\n");
	}
}

void B()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{	if(j==n&&(i==1||i==n/2+1||i==n))
				printf(" ");
			else if(i==1||i==n||(j==1&&i!=n)||(i==n/2+1&&(j!=1||j!=n))||(j==n&&(i!=1||i!=n/2+1||i!=n)))
			printf("*");
			else
			printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	 }
	 
	 void C()
{
	int i,j,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
void D()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
		if((j==n||j==n-1)&&(i==1||i==n))
				  printf(" ");
				  else if((j==n-1&&(i==n-1||i==2)))
				  printf("*");
				  else if((j==n&&(i==n-1||i==2)))
				  printf(" ");
				  else if(j==1||i==1||i==n||j==n)
					printf("*");
		    	else
		    	printf(" ");
		}
		printf("\n");
	 }
}
void E()
{
	int i,j,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||(i==n/2+1&&j<=n/2+2))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
}
void F()
{
	int i,j,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(n%2==1)
		{
			if(i==1||j==1||(i==n/2+1&&j<=n/2+2))
			printf("*");
			else
			printf(" ");
		}
		else if(n%2==0)
		{
		if(i==1||j==1||(i==n/2&&j<=n/2+2))
			printf("*");
			else
			printf(" ");	
		}
		}
		printf("\n");
	}
}

void G()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1&&j==1)
				printf(" ");
				else if(i==n&&j==1)
				printf(" ");
				  else if(j==1||i==1||i==n)
				  printf("*");
				  else if(j==n/2+1&&(i>n/2&&i<=n-2))
				  printf("*");
				  else if(j==n&&i>n/2)
				  printf("*");
				  else if(i==n/2+1&&j>=n/2+1)
				  printf("*");
				  else
				  printf(" ");
		}
		printf("\n");
	 }
}
void H()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
			if(n%2==0)
			{
				if(i==1)
			printf(" ");
		else if(j==n||j==1||i==n/2+1)
					printf("*");
			else
			printf(" ");
			}
			else if(n%2==1)
			{
				 if(j==n||j==1||i==n/2+1)
					printf("*");
			else
			printf(" ");
			}
		}
		printf("\n");
	 }
}
void I()
{
	int i,j,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(n%2==1)
		{
			if(i==1||i==n||j==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		else if(n%2==0)
		{
		if((i==1&&j!=n||(i==n&&j!=n)||j==n/2))
			printf("*");
			else
			printf(" ");	
		}
		}
		printf("\n");
	}
}
void J()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
if(j==1&&i==n)
				printf(" ");
				else if(j==n/2+1&&i==n)
				printf(" ");
				else if(i==1||j==n/2+1)
				printf("*");
				else if(i==n&&j<=n/2+1)
				printf("*");
				else if(j==1&&i>n/2+1)
				printf("*");
				else
				printf(" ");
		}
		printf("\n");
	 }
}
void K()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i==0;i<=n/2;i++)
	{
		for(j=1;j<=n/2;j++)
		{
				if(j==1)
				printf("*");
				else if(i+j==n/2+1)
				printf(" *");
				else
				printf(" ");
			
		}
		printf("\n");
	 }
	 for(i=n/2+1;i>=1;i--)
	{
		for(j=0;j<=n/2;j++)
		{
			if(j==0)
			printf("*");
			else if(i+j==n/2+1)
			printf("*");
			else
			printf(" ");
			}
			printf("\n");}
}
void L()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
              if(j==1||i==n)
				printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void M()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
		if(i==j||i+j==2*n||j==2*n-1||j==1)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
void N()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
             if(j==1||j==n||i==j)
				printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void O()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{if((i==1||i==n)&&(j==1||j==n))
		printf(" ");
		else if(i==1||i==n||j==1||j==n)
		printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void P()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(i==1||j==1||i==n/2||(j==n&&i<=n/2))
		printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void Q()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(i==1||(j==1&&i<=n/2+2)||i==j||i==n/2+2||(j==n&&i<=n/2+2))
		printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void R()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(i==1||j==1||i==j||i==n/2||(j==n&&i<=n/2))
		printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void S()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(i==1||(j==1&&i<=n/2+1)||i==n/2+1||i==n||(j==n&&i>=n/2+1))
		printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void T()
{
	int i,j,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(n%2==1)
		{
			if(i==1||j==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		else if(n%2==0)
		{
		if((i==1&&j!=n||j==n/2))
			printf("*");
			else
			printf(" ");	
		}
		}
		printf("\n");
	}
}
void U()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(i==n||j==1||j==n)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
void V()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
		if(i==j||i+j==2*n)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
void W()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=4*n;j++)
		{
		if(i==j||i+j==2*n||i+2*n-2==j||i+j==4*n-2)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
void X()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			
			if(i==j||j==n-i-1)
			 printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
void Y()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if((i==j&&i<=n/2)||(i+j==n&&i<=n/2)||(j==n/2&&i>=n/2))
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
void Z()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
	  if(i==1||i==n||i+j==n)
	  printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
