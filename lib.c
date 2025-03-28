#include "lib.h"
#include <stdio.h>

int Count( FILE *file) {
  int count = 0;
  int c;
  while ((c = fgetc(file)) != EOF){
    count++;
  }
  rewind(file);
  return count;
}

void data(){
  FILE *file = fopen("test.txt", "r");
  if (file == NULL) perror("File not opened");
  else {
  int c;
  int count = Count(file);
  int data[count];
  int i = 0;
   while ((c = fgetc(file)) != EOF) {
    data[i] = c;
    i++;
    }
  fclose(file);
  char a[count];
  for(int i = 0; i < count; i++){
    // printf("%i", data[i]);
    a[i] = data[i];
    printf("%c", a[i]);
    }
  }
}

bool check(int n){

  if (n % 2 == 0 || n % 3 == 0) {
      return false;
    }
  int sq=sqrt(n); 
  for (int i = 5; i<=sq; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
     }
    return true;
  }


void key_gen(){
  srand(time(0));
  int c,key,r = 0;
  while((c = fgetc(stdin)) != '\n' && c != EOF){
    key += c;
  }
  while(check(key) == false){
    r = (rand() % 100) + 1;
    key += r;
  }
  printf("%i", key); 
}


