// Creating a number guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int random,guess;
    int number_of_guesses = 0;
    srand(time(NULL));

printf("Welcome to the game");
random = rand()%100 ;

do{
    printf("\nPlease Enter the guess between 1 - 100 :");
    scanf("%d" , &guess);
    number_of_guesses++;

    if(guess < random){
        printf("Guess a Larger Number\n");
    }
    else if(guess > random){
        printf("Guess a Smaller Number\n");
    }
    else{
        printf("Congrats You have successfully guessed the number in %d attempts\n" , number_of_guesses);

    }


}
while(guess != random);

printf("Thank You for playing this game !\n");
printf("Developed by Aman Antuley..");





}