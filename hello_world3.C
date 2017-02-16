#include <stdio.h>

void hello(int num, char const * str){
  for (int i = 0; i < num; i++){
    puts(str);
  }
}

int main(int argc, char** argv) {
  hello(5, "Hello, world!");
  return 0;
}
