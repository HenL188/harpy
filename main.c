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

int main(void){
  FILE *file = fopen("test.txt", "r");
  if (file == NULL){
    perror("File not opened");
    return 1;
  }
  int c;
  int count = Count(file);
  int data[count];
  int i = 0;
   while ((c = fgetc(file)) != EOF) {
    data[i] = c;
    i++;
  }
  fclose(file);
  for(int i = 0; i < count; i++){
    printf("%i", data[i]);  
  }

  return 0;
}
