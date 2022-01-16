#include <stdio.h>  
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

/*

int main(){
  
  int output[32] = {0}; // Tout le tableau est initialisé a 0
  uint32_t ip;
  int i;
  int j = 8;
  int f = 0;
  
  printf("Entrez le nombre à convertir : ");  
  scanf("%d",&ip);  
  
  for(i=0; ip > 0; i++)  
  {  
    output[i] = ip%2;  
    ip = ip/2; 
  } 
  
  printf("\nLe nombre binaire est = ");
  
  for(i=31; i >= 0; i--)  
  {  
    // printf("%d",output[i]);
    j = j -1;
    f = f + pow(2,j)*output[i];
    

    if (i % 8 == 0){
      printf("%d", f);
      j = 8;
      f = 0;
    }

    if ((i % 8 == 0) && (i != 0)){
      printf(".");
    } 
  } 
  
  return 0;
}

*/




void uint32_to_ip(uint32_t ip, char *output)
{
  /* you dont need to allocate memory, use 'output' */

  int Output[32] = {0}; // Tout le tableau est initialisé a 0
  int i;
  int x = 4;
  int j = 8;
  int f = 0;
  
  for(i=0; ip > 0; i++)  
  {  
    Output[i] = ip%2;  
    ip = ip/2; 
  } 
  
  for(i=31; i >= 0; i--)  
  {  

    j = j -1;
    f = f + pow(2,j)*Output[i];
    

    if (i % 8 == 0){
      printf("%d\n", f);
      output[x] = f +"0";
      j = 8;
      f = 0;
      x = x -1;
    }

    if ((i % 8 == 0) && (i != 0)){
      output[x] = '.';
    } 

  } 
}

int main(){

  uint32_t ip = 4294967295;
  char output[20];
  uint32_to_ip(ip, output);
  for (int i = 0; i < 5; i++)
  {
    printf("%c",output[i]);
  }
  
  return 0;
}
