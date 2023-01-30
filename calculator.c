#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main(){
    
   printf("\n*=============================================*");
   
printf("\n  01.Addition\t\t02.Subtraction");
printf("\n  03.Maltiplication\t04.Division");
printf("\n  05.Square of number\t06.Cube of number");
printf("\n  07.Square root\t08.Cube root");
 
   printf("\n**********************************************");
    printf("\n**********************************************");

   int a;
   printf("\nSelect choice :");
   scanf("%d",&a);

   int k,h,i;
   switch(a){
       case 1 : printf("Your choice : Addition");

                  printf("\n\nEnter first number :");
                   scanf("%d",&k);

                    printf("Enter second number :");
                     scanf("%d",&h);

                      i=k+h;
                       printf("\nAddition of two numbers : %d",i);
                        break;

       case 2 : printf("Your choice : Subtraction");

                  printf("\n\nEnter first number :");
                   scanf("%d",&k);

                    printf("Enter second number :");
                     scanf("%d",&h);

                      i=k-h;
                       printf("\nSubtraction of two numbers : %d",i);
                        break;

       case 3 : printf("Your choice : Multiplication");

                  printf("\n\nEnter first number :");
                   scanf("%d",&k);

                    printf("Enter second number :");
                     scanf("%d",&h);

                      i=k*h;
                       printf("\nMultiplication of two numbers : %d",i);
                        break;

       case 4 : printf("Your choice : Division");

                  printf("\n\nEnter first number :");
                   scanf("%d",&k);

                    printf("Enter second number :");
                     scanf("%d",&h);

                      i=k/h;
                       printf("\nDivision of two numbers : %d",i);
                        break;

       case 5 : printf("Your choice : Square of number");

                  printf("\n\nEnter  number :");
                   scanf("%d",&k);

                    i=k*k;
                     printf("\nSquare of %d : %d",k,i);
                       break;

       case 6 : printf("Your choice : Cube of number");

                  printf("\n\nEnter  number :");
                   scanf("%d",&k);

                    i=k*k*k;
                     printf("\nCube of %d : %d",k,i);
                       break;                                 

                
       case 7 : printf("Your choice : Square root of number");

                  printf("\n\nEnter  number :");
                   scanf("%d",&k);

                    i= sqrt(k);
                     printf("\nSquare root of %d : %d",k,i);
                     break; 

       case 8 : printf("Your choice : cube root of number");

                  printf("\n\nEnter  number :");
                   scanf("%d",&k);

                    i= cbrt(k);
                     printf("\nSquare root of %d : %d",k,i);
                     break;              
   }
      printf("\n*=============================================*\n\n")  ;
    return 0;    
}


       
     