#include <stdio.h>

int main()
{
   float a, b,sum =0, sub=0, mul=0, division=0;
   int ch;
   printf("Enter two nos a and b");
   scanf("%f %f",&a,&b);
   printf("1.ADDITION\n2.SUBTRACTION\n");
   printf("Enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1 : sum=a+b;
            printf("Addition of a & b is %f\n",sum);
             break;
             
    case 2 : sub=a-b; 
            printf("Subtraction of a & b is %f\n",sub);
             break;  
             
    case 3 : mul=a*b; 
            printf("Multiplication of a & b is %f\n",mul);
             break;  
             
    case 4 : division=a/b; 
            printf("Division of a & b is %f\n",division);
             break; 
         
    default: printf("Please enter valid input!");             
   }
   
   return 0;
}
