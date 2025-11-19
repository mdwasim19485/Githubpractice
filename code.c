#include<stdio.h>
void getreverse(){
  
  int c;
  c=getchar();
  if(c!=EOF && c!='\n'){
     getreverse();
    putchar(c);
  }
}

int main(){
  getreverse();
  
  return 0;
}