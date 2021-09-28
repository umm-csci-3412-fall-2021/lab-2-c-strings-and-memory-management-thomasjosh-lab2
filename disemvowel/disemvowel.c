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
  char *vowel;
  if (size != 0){
    vowel = (char*)calloc(size, sizeof(char));
  }
  else vowel = strdup("");
  for(i=0; i<size; i++){
    if(str[i]=='a' || str[i]=='A'){
      vowel[i] = 0;
    }
    else if(str[i]=='e'|| str[i]=='E'){
      vowel[i] = 0;
    }
    else if(str[i]=='i' || str[i]=='I'){
      vowel[i] = 0;
    }
    else if(str[i]=='o' || str[i]=='O'){
      vowel[i] = 0;
    }
    else if(str[i]=='u' || str[i]=='U'){
      vowel[i] = 0;
    }
    else {
      vowel[i] = str[i];
      counter++;
    }
  }

  if(counter !=0){
    result = (char*)calloc(counter+1, sizeof(char));
    for (i=0; i<size; i++){
      if (vowel[i]!=0){
        result[counter2]=vowel[i];
        counter2++;
      }
    }
    result[counter2]='\0';
  }
  else{
    result=strdup("");
  } 
  free(vowel);
  return result;
}
