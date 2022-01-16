#include <stdbool.h>
#include <stdio.h>
#include <stddef.h>

/* Principaux problème:
- traduire "commands[i] == '0'" astuce -> crée un tableau de caractère a l'aide d'un pointeur
- Attention au condition: création de Else if pour pouvoir évité les répétions dans la boucle ^^
*/

bool read_commands(const char* commands)
{
  int i = 0;
  int q = 1;
  char *T = "1";
  char *F = "0";
  while (commands[i] != '\0')
  {
    if (q == 1){
      
      if(commands[i] == T[0]){
        q = 2;
      }
    }

    else if (q == 2){
      
      if(commands[i] == F[0]){
        printf("On est a Q%d\nPour: %i\n", q, i );
        q = 3;
      }
    }

    else if (q == 3){
      
      q = 2;
    }

    i = i + 1;

  }

  if (q == 2){
    
    return 1;
  }
  else{
    return 0;
  }

}

int main()
{
  printf("%d", read_commands("10010"));
}
