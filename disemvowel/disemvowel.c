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
    if(str[i]=='a' || str[i]=='A'){
      str[i] = 0;
    }
    else if(str[i]=='e'|| str[i]=='E'){
      str[i] = 0;
    }
    else if(str[i]=='i' || str[i]=='I'){
      str[i] = 0;
    }
    else if(str[i]=='o' || str[i]=='O'){
      str[i] = 0;
    }
    else if(str[i]=='u' || str[i]=='U'){
      str[i] = 0;
    }
    else counter++;
  }

  if(counter !=0){
    result = (char*)calloc(counter+1, sizeof(char));
    for (i=0; i<size; i++){
      if (str[i]!=0){
        result[counter2]=str[i];
        counter2++;
      }
    }
    result[counter2]='\0';
  }
  else{
    result = (char*)calloc(2, sizeof(char));
    result[1]='\0';
  } 

  return result;
}
