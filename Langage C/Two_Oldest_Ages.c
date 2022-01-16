#include <stdlib.h>

int *two_oldest_ages(size_t n, const int ages[n]) {

  //  <----  hajime!
  int i = 1;
  int x = ages[0];
  int y = ages[0];
  
  for(i = 1; i < n; i++){
    
    if (ages[i] >= x){
      y = x;
      x = ages[i];  
    }
    else {
      if (ages[i] >= y){
        y = ages[i];
      }
    }

  }
  int Final[2] = {y, x};
  return Final;
}

int main(){
    printf("Hello Word");
    return 0;
    
}
