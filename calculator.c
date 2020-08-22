#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void divide();
void power();
void factorial();
void subtract();
void multiply();
void sum();
int main()
{
	int i,j;
	for(i=1;i<=80;i++)
	printf("*");
	printf("                                  NOSCIP  TECH\n");
	printf("                                  ************\n");
	printf("                                   CALCULATOR\n");
	printf("                                 **************\n");
		for(j=1;j<=68;j++)
	printf(" ");
	printf("HRITIK JAIN\n");
	for(i=1;i<=80;i++)
	printf("*");
float n;
int n3,n1,n2,n4;
float log_value = log(n);
float log10_value = log10(n);
float exp_value = exp(n);
do
{
printf("\n\nSELECT FROM THE BELOW CHOICES:\n\n");
printf("*01* FOR TRIGONOMETRIC FUNCTIONS\n");
printf("*02* FOR SUBTRACTION\n");
printf("*03* FOR ADDITION\n");
printf("*04* FOR log10\n");
printf("*05* FOR log\n");
printf("*06* FOR exp\n");
printf("*07* FOR SQUARE ROOT\n");
printf("*08* FOR SQUARE\n");
printf("*09* FOR CUBE\n");
printf("*10* FOR INVERSE\n");
printf("*11* FOR MODULUS\n");
printf("*12* FOR SIGN CHANGE\n");
printf("*13* FOR 10^X\n");
printf("*14* FOR MULTIPLY\n");
printf("*15* FOR DIVISION\n");
printf("*16* FOR FACTORIAL\n");
printf("*17* FOR X^Y\n");
printf("*18* FOR EXIT\n");
scanf("%d",&n3);
switch(n3)
{
	case 1:
		printf("*100 FOR NORMAL TRIGONOMETRIC FUNCTIONS\n");
		printf("*110 FOR HYPERBOLIC TRIGONOMETRIC FUNCTIONS\n");
		scanf("%d",&n1);
		switch(n1)
		{
			case 100:
		do
		{
		printf("*101* FOR SINE\n");
		printf("*102* FOR COSINE\n");
		printf("*103* FOR TANGENT\n");
		printf("*104* FOR COSEC\n");
		printf("*105* FOR SEC\n");
		printf("*106* FOR COTGENT\n");
		printf("*107* FOR EXIT\n");
		scanf("%d",&n2);
        		switch(n2)
		{
			case 101:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("SIN(%.1f degrees): %f\n",n,sin(n/57.2958));
				printf("SIN(%.1f radians): %f\n",n,sin(n));
				break;
				
			case 102:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("COS(%.1f degrees): %f\n",n, cos(n/57.2958));
				printf("COS(%.1f radians): %f\n",n, cos(n));
				break;
			case 103:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("TAN(%.1f degrees): %f\n",n, tan(n/57.2958));
				printf("TAN(%.1f radians): %f\n",n, tan(n));
			    break;
			case 104:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("COSEC(%.1f degrees): %f\n",n,1/sin(n/57.2958));
				printf("COSEC(%.1f radians): %f\n",n,1/sin(n));
				break;
			case 105:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("SEC(%.1f degrees): %f\n",n,1/cos(n/57.2958));
				printf("SEC(%.1f radians): %f\n",n,1/cos(n));	
				break;
			case 106:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("COT(%.1f degrees): %f\n",n,1/tan(n/57.2958));
				printf("COT(%.1f radians): %f\n",n,1/tan(n));
				break;
				case 107:
					return;
			default:
		        printf("\nPLEASE ENTER CORRECT CHOICE\n");
		}
		}while(1);
		break;
			case 110:
		do
		{
		printf("*111* FOR HYBERBOLIC SINE\n");
		printf("*112* FOR HYBERBOLIC COSINE\n");
		printf("*113* FOR HYBERBOLIC TANGENT\n");
		printf("*114* FOR HYBERBOLIC COSEC\n");
		printf("*115* FOR HYBERBOLIC SEC\n");
		printf("*116* FOR HYBERBOLIC COTGENT\n");
		printf("*117* FOR EXIT\n");
		scanf("%d",&n2);
		switch(n2)
		{
			case 111:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("SINH(%.1f degrees): %f\n",n,sinh(n/57.2958));
				printf("SINH(%.1f radians): %f\n",n, sinh(n));
				break;
			case 112:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("COSH(%.1f degrees): %f\n",n, cosh(n/57.2958));
				printf("COSH(%.1f radians): %f\n",n, cosh(n));
				break;
			case 113:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("TANH(%.1f degrees): %f\n",n, tanh(n/57.2958));
				printf("TANH(%.1f radians): %f\n",n, tanh(n));
			    break;
			case 114:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("COSECH(%.1f degrees): %f\n",n,1/sinh(n/57.2958));
				printf("COSECH(%.1f radians): %f\n",n,1/sinh(n));
				break;
			case 115:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("SECH(%.1f degrees): %f\n",n,1/cosh(n/57.2958));
				printf("SECH(%.1f radians): %f\n",n,1/cosh(n));	
				break;
			case 116:
				printf("ENTER VALUE OF THETA / ANGLE");
				scanf("%f",&n);
				printf("COTH(%.1f degrees): %f\n",n,1/tanh(n/57.2958));
				printf("COTH(%.1f radians): %f\n",n,1/tanh(n));
			    break;
			    case 117:
			    	return;
			default:
	        	printf("\nPLEASE ENTER CORRECT CHOICE\n");
		}
		break;
	    }while(1);
	}
	    break;

	case 2:
		subtract();
	    break;
	case 3:
		sum();
		break;
	case 4:
		printf("ENTR ANY NUMBER\n");
	scanf("%d",&n4);
        printf("log10(%d) : %f \n",n4,log10_value);
        break;
	case 5:
		printf("ENTR ANY NUMBER\n");
	scanf("%d",&n4);
		printf("log(%d) : %f \n",n4, log_value);
		break;	
	case 6:
		printf("ENTR ANY NUMBER\n");
	scanf("%d",&n4);
        printf("exp(%d) : %f \n",n4, exp_value);
	    break;
	case 7:
		printf("ENTR ANY NUMBER\n");
	scanf("%f",&n);
	printf("SQUARE ROOT OF %.2f : %f\n",n,sqrt(n4));
	break;
	case 8:
		printf("ENTR ANY NUMBER\n");
	scanf("%f",&n);
	printf("SQUARE OF %.2f : %f\n",n,n*n);
	break;
	case 9:
		printf("ENTR ANY NUMBER\n");
	scanf("%f",&n);
	printf("CUBE OF %.3f : %.3f\n",n,n*n*n);
	break;
	case 10:
		printf("ENTR ANY NUMBER\n");
	scanf("%f",&n);
	printf("INVERSE OF %.3f : %.3f\n",n,1/n);
	break;
	case 11:
		printf("ENTR ANY NUMBER\n");
	scanf("%f",&n);
	printf("MODULUS of %.3f : %.3f\n",n,n>0?n:-n);
	break;
	case 12:
		printf("ENTR ANY NUMBER\n");
	scanf("%f",&n);
	printf("OPPOSITE OF %f : %f\n",n,-n);
	break;
	case 13:
		printf("ENTR ANY NUMBER\n");
	scanf("%f",&n);
	printf("%.1fth POWER OF 10: %.2f",n,pow(10,n));
	break;
	case 14:	
	multiply();
	break;
	case 15:
	divide();
	break;	
	case 16:
		factorial();	
		break;	
	case 17:
		power();
		break;
		
	case 18:
		exit(0);	
	default:
		printf("\nPLEASE ENTER CORRECT CHOICE\n");	
}
getch();
}while(1);
}
void divide()
{
	float a,b;
	printf("ENTER VALUE OF X & Y TO FIND X/Y\n");
    scanf("%f%f",&a,&b);
	printf("VALUE OF %.2f/%.2f : %.2f",a,b,a/b);
}
void multiply()
{
	float a,b;
	printf("ENTER ANY TWO NUMBERS\n");
    scanf("%f%f",&a,&b);
    printf("%.3f*%.3f :%.3f",a,b,a*b);
}
void sum()
{
	float a,b;
	printf("ENTER ANY TWO NUMBERS\n");
    scanf("%f%f",&a,&b);
    printf("%.3f+%.3f :%.3f",a,b,a+b);
}
void subtract()
{
	float a,b;
	printf("ENTER ANY TWO NUMBERS\n");
    scanf("%f%f",&a,&b);
    printf("%.3f-%.3f :%.3f",a,b,a-b);
}
void factorial()
{
	int i,n,f=1;
	printf("ENTR ANY NUMBER\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  f=f*i;
	}
	printf("FACTORIAL OF %d =%d",n,f);
}
void power()
{
	int n,p,ans;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);
	printf("ENTER POWER TO THE NUMBER %d\n",n);
	scanf("%d",&p);
    ans=pow(n,p);
	printf("THE %d POWER OF %d=%d",p,n,ans);
	getch();
	
}
