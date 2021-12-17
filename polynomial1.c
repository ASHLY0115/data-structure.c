 /*********************************
 file    : polynomial expression using array
 author  : Ashly Rose Antony
 version : 1.0
 date    : 17/12/21
 **********************************/
    #include<stdio.h>
    int main(){
    int coeff[10],expo[10],i,t,temp;
    printf("\nEnter the degree of  polynomial :");
        scanf("%d",&t);
        printf("\nEnter the coefficient and exponent (descending order) \n");
     
        for(i=0;i<=t;i++){
       
            printf("\nEnter the coefficient :" );
            scanf("%d",&coeff[i]);
            printf("\nEnter the exponent %d:",coeff[i]);
            scanf("%d",&expo[i]);
           
        }
        printf("\nPolynomial entered:  ");
         for(i=0;i<=t;i++){
           printf("%d(x^%d)",coeff[i],expo[i]);
           if(i!=t){
               printf("+");
           }
        }
        printf("\n");
        return 0;
    }

	

