#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1;i<=80;i++)
	printf("*");
	printf("                                  NOSCIP TECH\n");
	printf("                                  ***********\n");
	printf("                              GEOMETRY CALCULATOR\n");
	printf("                              *******************\n");
		for(j=1;j<=68;j++)
	printf(" ");
	printf("HRITIK JAIN\n");
	for(i=1;i<=80;i++)
	printf("*");
do{
	float r,l,p,a,b,h,c,d,s,t,v,L,d1,d2,area;
	int n,z;
	printf("                   ***ENTER DESIRED VALUE FOR DESIRED SHAPES***\n");
	printf("*01* FOR PARALLELOGRAM\n");
	printf("*02* FOR HEMI-SPHERE\n");
	printf("*03* FOR SEMI-CIRCLE\n");
	printf("*04* FOR TRAPEZIUM\n");
	printf("*05* FOR RECTANGLE\n");
	printf("*06* FOR SQUARE\n");
	printf("*07* FOR CIRCLE\n");
	printf("*08* FOR CUBE\n");
	printf("*09* FOR SPHERE\n");
	printf("*10* FOR CONE\n");
    printf("*11* FOR CUBOID\n");
	printf("*12* FOR TRIANGLE\n");
	printf("*13* FOR ELLIPSE\n");
	printf("*14* FOR CYLINDER\n");
	printf("*15* FOR RHOMBUS\n");
	printf("*16* FOR EXIT\n");
	scanf("%d",&n);
	switch(n)
	{
    case 1:
	printf("Enter Vertical length and Breadth of PARALLELOGRAM\n");
	scanf("%f%f",&l,&b);
		area=l*b;
	printf("The AREA of parallelogram =%f\n",area);
		p=2*(l+b);
	printf("The PERIMETER of parallelogram =%f\n\n",p);
	break;
	case 2:
		printf("Enter radius of Hemi-Sphere\n");
	scanf("%f",&r);
	l=2*3.142*r*r;
	printf("Lateral surface area of Hemi-sphere=\n%f",l);
     t=3.142*r*3*r;
     printf("Total surface area of Hemi-sphere=%f\n",t);
		v=2.094*r*r*r;
	printf("volume of Hemi-sphere=%f\n\n",v);
	break;
	case 3:
		printf("Enter radius of SEMI-CIRCLE\n");
	scanf("%d",&b);
	area=b*b*1.571;
	printf("The AREA of Semicircle=%f\n",area);
	p=(3.142*b)+2*b;
	printf("\nThe PERIMETER of semicircle=%f\n\n",p);
	break;
	case 4:
		printf("Enter length of two bases and heigtht of TRAPEZIUM\n");
	scanf("%f%f%f",&a,&b,&h);
		area=.5*(a+b)*h;
	printf("The AREA of trapezium =%f\n",area);
	printf("Enter length of two Remaining sides\n");
	scanf("%f%f",&c,&d);
	printf("The PERIMETER of trapezium =%f\n\n",a+b+c+d);
	break;
	
	case 5:
	printf("Enter length and Breadth of RECTANGLE\n");
	scanf("%f%f",&l,&b);
		area=l*b;
	printf("The AREA of rectangle =%f\n",area);
	p=2*(l+b);
	printf("The PERIMETER of rectangle =%f\n\n",p);
	break;
	
	case 6:
	printf("Enter side of square\n");
	scanf("%f",&s);
		area=s*s;
	printf("The area of square =%f\n",area);
		p=4*s;
	printf("The Perimeter of square =%f\n\n",p);
	break;
	
	case 7:
	printf("Enter radius\n");
	scanf("%f",&b);
	area=3.142*b*b;
	printf("The area of circle=%f",area);
	p=3.142*2*b;
	printf("\nThe Perimeter of circle=%f\n\n",p);
	break;
	
	case 8:
		printf("Enter side of cube\n");
	scanf("%f",&s);
		l=4*s*s;
	printf("Lateral surface area of cube=%f\n",l);
		t=6*s*s;
	printf("Total surface area of cube=%f\n",t);
		v=s*s*s;
	printf("volume of cube=%f\n\n",v);
	break;
		
	case 9:	printf("Enter radius of Sphere\n");
	scanf("%f",&r);
     t=3.142*r*4*r;
     printf("Total surface area of sphere=%f\n",t);
		v=4.188*r*r*r;
	printf("volume of sphere=%f\n\n",v);
	break;
	case 10:
			printf("Enter radius & Slant Height of cone\n");
	scanf("%f%f",&b,&h);
	l=3.142*b*h;
	printf("Lateral surface area of cone=%f\n",l);
     t=3.142*b*(b+h);
     printf("Total surface area of cone=%f\n",t);
		v=1.047*b*b*h;
	printf("volume of cone=%f\n\n",v);
	break;
	
	case 11:
		printf("Enter length and Breadth & Height of CUBOID\n\n");
	scanf("%f%f%f",&l,&b,&h);
	L=2*(l+b)*h;
	printf("Lateral surface area of CUBOID=\n%f\n",L);
		t=2*((l*b)+(b*h)+(h*l));
	printf("Total surface area of CUBOID=\n%f\n",t);
		v=l*b*h;
	printf("volume of CUBOID=\n%f\n\n",v);
	break;
	
	case 12:
		printf("Enter Height and base of triangle\n");
	scanf("%f%f",&h,&b);
	area=.5*b*h;
	printf("The area of triangle=%f\n",area);
	printf("Enter remaining 2 sides of triangle\n");
	scanf("%f%f",&c,&d);
	printf("Perimeter of triangle=%f\n\n",b+c+d);
	break;
	
	case 13:
		printf("Enter major axis and minor axis of ELLIPSE\n");
	scanf("%f%f",&a,&b);
	area=3.142*a*b;
	printf("\nThe area of ELLIPSE =%f\n\n",area);
	break;
	
	case 14:
			printf("Enter radius & Height of cylinder\n");
	scanf("%f%f",&b,&h);
	l=3.142*2*b*h;
	printf("Lateral surface area of cylinder=%f\n",l);
     t=3.142*2*b*(b+h);
     printf("Total surface area of cylinder=%f\n",t);
		v=3.142*b*b*h;
	printf("volume of cylinder=%f\n\n",v);
	break;
	
	case 15:
		printf("Enter two diagonals of rhombus\n");
	scanf("%f%f",&d1,&d2);
	printf("Enter length of side of rhombus\n");
	scanf("%f",&s);
	a=.5*d1*d2;
	printf("Area of rhombus = %f\n",a);
		p=4*s;
	printf("Perimeter of rhombus = %f\n\n",p);
	break;
	
	case 16:
		exit(0);
		break;
			
	default:
		printf("CHUTIYE SAHI NUMBER DAAL\n\n");
	}
	
}while(1);
	getch();
}
