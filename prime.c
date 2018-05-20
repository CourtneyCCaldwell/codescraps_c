#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  int i, j, x;

  printf("\nWhat number do you want to print primes to? ");
  scanf("%d", &x);

  if (x <= 0){
    return 0;
  }
  
  for (i = 1; i <= x; i++){
    if (i > 2){
      for (j = 2; j < i && i % j != 0; j++);
      if (j == i){
	printf("%d\n", i);
      }
    }
  
    else if (i > 0){
      printf("%d\n", i);
    }
  }

  return 0;
}
