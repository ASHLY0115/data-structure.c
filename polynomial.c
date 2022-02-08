/*********************************
 file    : polynomial expression using array
 author  : Ashly Rose Antony
 version : 1.0
 date    : 17/12/21
 **********************************/
#include<stdio.h>
	#define base 100
	
	struct poly{
		float coeff;
		int exp;
		};
	
	int main()
	{
		struct poly a[base];
		//b[base];
		int p;
		int i;
		int k=0;
		printf("Enter the highest degree of FIRST polynomial:  ");
		scanf("%d",&p);
		for(i=0;i<=p;i++)
		{
			printf("Enter the coefficient of x^%d : ",i);
			scanf("%f",&a[i].coeff);
			a[k++].exp=i;
		}	
	
		printf("The Polynomial is:");
		for(i=p;i>=0;i--)
		{
		printf("+%.1fX^%d",a[i].coeff,a[i].exp);
		}	
		return 0;
		}

	 
