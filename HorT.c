#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,count=0;
  srand((unsigned int)time(NULL));
  printf("Tossing a coin...\n");
  
  for(i=0;i<3;i++){
    int flag;
    flag = rand() % 2;

    printf("%d\n", flag);
    
    switch(flag){
    case 0:
      printf("Round %d: Heads\n",i+1);
      count++;
      break;
    default:
      printf("Round %d: Tails\n",i+1);
      break;
    }
  }
  
  printf("Heads: %d, Tails: %d\n",count,3-count);
  
  return 0;
}
      
      
      
    
  
