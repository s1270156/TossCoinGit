#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,count=0;
  char name[20];
  srand((unsigned int)time(NULL));
  
  printf("Who are you?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  printf("Tossing a coin...\n");
  
  for(i=0;i<3;i++){
    int flag;
    flag = rand() % 2;
    
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

  if(count >= 2) printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  
  return 0;
}
      
      
      
    
  
