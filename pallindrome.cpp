/*
check string is Pallindrome or NOT
examples:nitin,wow,madam etc;

test case : The longest known palindromic word is "saippuakivikauppias" (19 letters),
            which is Finnish for a dealer in lye (caustic soda).

*/

#include <iostream>
#include <cstring>

void checkPallindrome(char *str_1) {
  size_t len = strlen(str_1);
  int flag=0;
  for (size_t i = 0; i < len; i++) {
    if (str_1[i] != str_1[len-i-1]) {
      flag = 1;
      break;
    }
  }
  if (flag ==1) {
    std::cout << "String "<<str_1<<" is Not Pallindrome" << std::endl;
  } else {
    std::cout << "String is Pallindrome" << std::endl;
  }

}
int main(int argc, char const *argv[]) {
  char str[20];
  std::cout << "Enter str :" << std::endl;
  std::cin >> str;
  checkPallindrome(str);
  return 0;
}
