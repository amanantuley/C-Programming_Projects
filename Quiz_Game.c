// making a KBC game using C programming

#include<stdio.h>
int main()
{
int x,y,z;
// questions for the user
printf("Question No. 1 ");
printf("WHAT MAKES THE COLOR OF THE LEAF GREEN?\n");
// options for the user
printf("1. Xenthphyll \n 2. Chlorophyll \n 3. Kerotin \n 4. Hemoglobin\n");
printf("Enter Your Answer :");
// user will enter the answer
scanf("%d" ,&x);
// using if else for the answer to be true or false
if(x==2){
    printf("Congratulations! THE ANSWER IS RIGHT\n");
}
else{
    printf("Oops! THE ANSWER IS WRONG\n");
}

printf("Question No. 2 \n");
printf("WHAT IF THE POWERHOUSE OF THE CELL?\n");
// options for the user
printf("1. MITOCHONRDRIA \n 2. NUCLEUS \n 3. ENDOSPERM \n 4. NONE OF THE ABOVE\n");
printf("Enter Your Answer :");
// user will enter the answer
scanf("%d" ,&y);
// using if else for the answer to be true or false
if(y==1){
    printf("Congratulations! THE ANSWER IS RIGHT");
}
else{
    printf("Oops! THE ANSWER IS WRONG");
}
}





