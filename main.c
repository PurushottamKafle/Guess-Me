#include <stdio.h>
#include <string.h>
/**
LINEAR ALGORITHM - Guess Me
LINEAR ALGORITHM- Guess Me- Guess Me- Guess Me- Guess Me
LINEAR ALGORITHM- Guess Me- Guess Me- Guess Me
LINEAR ALGORITHM- Guess Me- Guess Me
LINEAR ALGORITHM- Guess Me

Developed by Purushottam Kafle
**/


int main()
{
//Initialize the variables
int answer;
int card;

//Generate a random number
srand(time(NULL));
card = rand () % 20;

//Do this while card is not equal to answer
do {
printf("\n");//space between text
printf("Please input your guess: \n"); // prompt user
scanf("%d", &answer); // scan the users input and store in answer var

if (answer > card){ //if user guess is greater than generated number
printf("\n");
printf("%d is too high, go lower. \n", answer);
}
else if(answer < card){ // smaller than
//sleep(1); // C function to delay output
printf("\n");
printf("%d is too low, go higher \n", answer);

}
else if (answer == card){ //equal ( have they guess correctly?)
printf("Correct the number I was guessing was %d \n", answer);
}
}//Close do part of 'do while' loop

while (answer != card); // execute the do part while answer is not equal to card.
return 0;
}//End int main


