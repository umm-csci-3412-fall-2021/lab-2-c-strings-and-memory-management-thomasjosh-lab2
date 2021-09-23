#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  int i = 0;
  int counter = 0;
  int counter2 =0;
  int size;
  size = strlen(str);
  char *result;
  for(i=0; i<size; i++){
    if(str[i]=='a'){
      str[i] = 0;
    }
    else if(str[i]=='e'){
      str[i] = 0;
    }
    else if(str[i]=='i'){
      str[i] = 0;
    }
    else if(str[i]=='o'){
      str[i] = 0;
    }
    else if(str[i]=='u'){
      str[i] = 0;
    }
    else counter++;
  }
  result = (char*)calloc(counter+1, sizeof(char));
  for (i=0; i<size; i++){
    if (str[i]!=0){
      result[counter2]=str[i];
      counter2++;
    }
  }
  result[counter2]='\0';
  return result;
}
