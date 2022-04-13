/* Problème Rank: 6 Kyu

Il est temps de gagner à la loterie !

Étant donné un billet de loterie (ticket), représenté par un tableau de tableaux à 2 valeurs, 
vous devez savoir si vous avez gagné le jackpot.
Exemple de billet :

{ { "ABC", 65 }, { "HGR", 74 }, { "BYHT", 74 } }

Pour cela, vous devez d'abord compter les 'mini-gains' sur votre ticket.
Chaque sous-tableau contient à la fois une chaîne et un nombre.
Si le code de caractère de l'un des caractères de la chaîne correspond au numéro, 
vous obtenez un mini gain. Notez que vous ne pouvez avoir qu'un seul mini-gain par sous-tableau.

Une fois que vous avez compté tous vos mini-gains, 
comparez ce nombre à l'autre entrée fournie (gain).
Si votre total est supérieur ou égal à (gagner), renvoyez 'Winner!'. Sinon, retournez 'Perdant!'.

Toutes les entrées seront au format correct.
Les chaînes sur les tickets n'ont pas toujours la même longueur.
*/

#include <stdio.h>


typedef struct mini_win_t
{
    char    *letters;
    unsigned code;
} MiniWin;

typedef struct ticket_t
{
    MiniWin *mini_wins;
    unsigned count;
} Ticket;

// Revoir les structure et les pointeurs de structure...
const char *bingo(const Ticket *ticket, unsigned win)
{ 
  int cnt = 0, i = ticket->count;

  while (i--) {
    int   n = ticket->mini_wins[i].code;
    char *p = ticket->mini_wins[i].letters;

    while (*p)
      if (*p++ == n) { cnt++; break; }
  }
  
  return cnt >= win ? "Winner!" : "Loser!";
}
int main(){
    return 0;
}