#include <stdio.h>

int main()
{
   float a, b,result=0;
   int ch;
   printf("Enter two nos a and b");
   scanf("%f %f",&a,&b);
   printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLY\n4.DIVISION\n);
   printf("Enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1 : result=a+b;
            printf("Addition of a & b is %f\n",result);
             break;
             
    case 2 : result=a-b; 
            printf("Subtraction of a & b is %f\n",result);
             break;  
             
    case 3 : result=a*b; 
            printf("Multiplication of a & b is %f\n",result);
             break;  
             
    case 4 : result=a/b; 
            printf("Division of a & b is %f\n",result);
             break; 
         
    default: printf("Please enter valid input!");             
   }
   
   return 0;
}
