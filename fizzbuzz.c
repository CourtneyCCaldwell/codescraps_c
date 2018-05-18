/***********************************************************/
/* Programmer: Courtney Caldwell                           */
/*                                                         */
/* Program: Simple Fizzbuzz Solution                       */
/***********************************************************/

/* Program Description: This program will take an input    */
/* from the user, and play Fizzbuzz to the indicated       */
/* integer, using 3 and 5 as the fizz and buzz, respective.*/

#include <stdio.h>

int main(int argc, char *argv[]){
  int x;
  int y;
  printf(" \nFizzbuzz:\nThis program will play Fizzbuzz. Please enter the highest number you wish the game to play to: ");
  scanf("%d", &y);
  for (x = 1; x <= y; x++){
    if (x % 3 == 0 && x % 5 == 0){
      printf("Fizzbuzz\n");
    }
    else if (x % 3 == 0){
      printf("Fizz\n");
    }
    else if (x % 5 == 0){
      printf("Buzz\n");
    }
    else{
      printf("%d\n", x);
    }
  }
  return 0;
}
