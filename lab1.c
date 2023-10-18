#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

#define MAX(a,b) (((a)>(b))?(a):(b))

double u(double x, double y)
{
	return MAX(M_E*cos(M_PI*pow(x,2))-y, tan(cbrt(x*pow(y,2))-1/cbrt(x)) );
}

int main()
{
	double minU=0, minX=0, minY=0;
	
	for(double x=1; x<=3; x+=1.3)
	{
		for(double y=2; y<=4; y+=1.5){
			double U = u(x, y);
			printf("x=%f, y=%f, u(x, y)=%f\n", x , y, U);
			if(U < minU){
				minU = U;
				minX = x;
				minY = y;
			}
		}
	}
	printf("U=%f, при x=%f, y=%f\n", minU, minX, minY);
	return 0; 
}
