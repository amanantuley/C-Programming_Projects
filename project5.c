// Create a menu driven calculator

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int a,b,c,ch;

printf("\nWelcome to Simple Calculator\n");

printf("\nChoose one of the Following Options\n");
while(1){
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Modulus\n");
    printf("6.Exit\n");

    printf("Enter Your Choice :");
    scanf("%d" , &ch);

    switch(ch){

        case 1 : 
        printf("Enter a Number :");
        scanf("%d" ,&a);
        printf("Enter another Number :");
        scanf("%d" , &b);

        c = a + b;
        printf("The Addition of the numbers is : %d\n\n\n" ,c);
        break;

        case 2 :
        printf("Enter a Number :");
        scanf("%d" ,&a);
        printf("Enter another Number :");
        scanf("%d" , &b);

        c = a - b;
        printf("The Subtraction of the numbers is : %d\n\n\n" ,c);
        break;

        case 3 :
        printf("Enter a Number :");
        scanf("%d" ,&a);
        printf("Enter another Number :");
        scanf("%d" , &b);

        c = a * b;
        printf("The Multiplication of the numbers is : %d\n\n\n" ,c);
        break;

        case 4:
        printf("Enter a Number :");
        scanf("%d" ,&a);
        printf("Enter another Number :");
        scanf("%d" , &b);

        c = a / b;
        printf("The Division of the numbers is : %d\n\n\n" ,c);
        break;
        
        case 5 :
         printf("Enter a Number :");
        scanf("%d" ,&a);
        printf("Enter another Number :");
        scanf("%d" , &b);

        c = a % b;
        printf("The Modulus of the numbers is : %d\n\n\n" ,c);
        break;

        case 6 :
        exit(0);

    }


printf("Thank You for using the calculator!\n");
printf("Developed by Aman Antuley..\n\n\n");

}


}