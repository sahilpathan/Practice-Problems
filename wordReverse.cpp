/*
  input string :“i like this program very much”
  output string : “much very program this like i”

  Algorithm:
  1) Reverse the individual words, we get the string below.
     "i ekil siht margorp yrev hcum"

  2) Reverse the whole string from start to end and you get the desired output.
     "much very program this like i"

*/

#include <iostream>

void reverse(char *start,char *ends)
{
    char temp ;
    while (start < ends) {

        temp   = *start;
        *start++ = *ends;
        *ends--  = temp;
        //start++;
        //ends--;
      }
}

void reverseWords(char *str) {
  char *wordStart = str;
  //std::cout <<wordStart << std::endl;
  char *temp = str;

  while (*temp) {
    temp++;
    if (*temp == '\0') {

      reverse(wordStart,temp-1);

    } else if (*temp ==' ') {

      reverse(wordStart,temp-1);
      wordStart = temp+1;

      }
  }

reverse(str,temp-1);
}


int main(int argc, char const *argv[]) {
  char str[] = "i like this program very much";
  reverseWords(str);
  std::cout <<str << std::endl;
  return 0;
}
