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
  /* Checks to see is the string given is 0, if not 0 makes an array of 
  the same size as the string, if 0 it makes and empty string array */
  if (size != 0){
    vowel = (char*)calloc(size, sizeof(char));
  }
  else vowel = strdup("");

  /* Replaces all vowels with '0', increases counter to remember how big the 
  new string will be whenever there is a consonant */
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

/*If counter not 0 then add the consonants to a new array of size counter+1, 
else creates an empty string array since no consonants */
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
