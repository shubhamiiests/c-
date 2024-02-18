

#include<stdio.h>
#include<string.h>


char* trim_blanks (char *trimmed, const char *to_trim);

int main () {
  
  char input[100];
  char output[100];

  //read the input 
  printf ("Enter a string with leading and trailing blanks: ");
  fgets (input, sizeof(input), stdin);

  //call the trim_blanks fxn
  printf ("The trimmed string is: %s\n", trim_blanks (output, input));

  return 0;
}


char* trim_blanks (char *trimmed, const char *to_trim) {
  //length of to_trim
  int n=strlen (to_trim);
  int first_non_blank=0, last_non_blank=n-1;
  //first non blank character fiding 
 
  while (first_non_blank<n && to_trim [first_non_blank]==' ') {
    first_non_blank++;
  }
  //finding index of last non blank character

    //last tk loop chalao jhn tk non_blank valid h
  while (last_non_blank>=0 && to_trim [last_non_blank]==' ') {
    last_non_blank--;
  }
  //no non blank characters,empty string
  if (first_non_blank>last_non_blank) {
    trimmed [0]='\0';
    return trimmed;
  }
  //else copy substring b/w first and last
  
  strncpy (trimmed, to_trim+first_non_blank, last_non_blank-first_non_blank+1);
  
  trimmed [last_non_blank-first_non_blank+1]='\0';
  return trimmed;
}
