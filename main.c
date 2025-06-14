#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

const char *choices[3] = {"rock", "scissor", "paper"};
char player_answer[10];
char play_again[10];

int number_choice;

int main (void) {
   printf("Please input your answer: ");
   scanf("%s", player_answer);
   
   for (int i = 0; i < 3; i++) {
      if (strcmp(player_answer, choices[i]) == 0) {
         number_choice = i;
      }
   }
   
   int random_choice = rand() % (2 - 0 + 1) + 0;
   
   if (number_choice == 0 && random_choice == 1) {
      printf("you won!\n%s beats %s\n", choices[number_choice], choices[random_choice]);
   } else if (number_choice == 0 && random_choice == 2) {
      printf("you have been beaten!\n%s beats %s\n", choices[random_choice], choices[number_choice]);
   } else if (number_choice == 1 && random_choice == 0) {
      printf("you have been beaten!\n%s beats %s\n", choices[random_choice], choices[number_choice]);
   } else if (number_choice == 1 && random_choice == 2) {
      printf("you won!\n%s beats %s\n", choices[number_choice], choices[random_choice]);
   } else if (number_choice == 2 && random_choice == 0) {
      printf("you won!\n%s beats %s\n", choices[number_choice], choices[random_choice]);
   } else if (number_choice == 2 && random_choice == 1) {
      printf("you have bene beaten!\n%s beats %s\n", choices[random_choice], choices[number_choice]);
   } else if (number_choice == random_choice) {
      printf("draw\nyour choice (%s) and the computer\'s choice (%s) are the same.\n", choices[random_choice], choices[number_choice]);
   }

   printf("\n\nDo you want to try again?: ");
   scanf("%s", play_again);

   if (strcmp(play_again, "yes") == 0) {
      main();
   } else if (strcmp(play_again, "no") == 0) {
      printf("\nokay have a nice day!\ngoodbye!\n");
   } else {
      printf("Answer is not recognized, answer is no\ngoodbye!\n");
   }


   return 0;
}

