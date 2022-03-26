/*  Problème RANK: 5kyu
_____________________________________________________________________________________________________________

Greed est un jeu de dés qui se joue avec cinq dés à six faces. 
Votre mission, si vous choisissez de l'accepter, est de marquer un jet selon ces règles. 
Vous recevrez toujours un tableau avec cinq valeurs de dés à six faces.

Three 1's => 1000 points
Three 6's =>  600 points
Three 5's =>  500 points
Three 4's =>  400 points
Three 3's =>  300 points
Three 2's =>  200 points
One   1   =>  100 points
One   5   =>   50 point

Un seul dé ne peut être compté qu'une seule fois par lancer.
Par exemple, un "5" donné ne peut compter que comme faisant partie d'un triplet (contribuant aux 500 points) 
ou comme un seul 50 points, mais pas les deux dans le même jet.

Exemple de notation:

Throw       Score
---------   ------------------
5 1 3 4 1   250:  50 (for the 5) + 2 * 100 (for the 1s)
1 1 1 3 1   1100: 1000 (for three 1s) + 100 (for the other 1)
2 4 4 5 4   450:  400 (for three 4s) + 50 (for the 5)

Dans certains langages, il est possible de muter l'entrée de la fonction.
C'est quelque chose que vous ne devriez jamais faire.
Si vous mute l'entrée, vous ne pourrez pas passer tous les tests.
_____________________________________________________________________________________________________________
*/

#include <stdio.h>

int chercher_occurence(const int L[5]){
    /* Renvoie l'élément répeter 3 fois dans la liste sinon renvoie 0*/
    int occ = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (L[i] == L[y]) {occ++;}
            if (occ == 3) {return L[i];}
        }
        occ = 0;
    }

    return 0;
} 

int score(const int dice[5]) {
    int Finale = 0;
    int time = 0;
    int occ3 = chercher_occurence(dice);
    for (int i = 0; i < 5; i++){

        // En cas d'un dée 1 => +100 points 
        if ( (dice[i] != occ3) && (dice[i] == 1) ){
            Finale = Finale + (dice[i]*100);
        }
        // En cas d'un dée 5 => +50 points
        if ( (dice[i] != occ3) && (dice[i] == 5) ){
            Finale = Finale + (dice[i]*10);
        }
        if (dice[i] == occ3){ 
            time++;
            if ( (time > 3) && (dice[i] == 5) ){ Finale = Finale + (dice[i]*10);}
            if ((time > 3) && (dice[i] == 1) ){ Finale = Finale + (dice[i]*100);}
        }
    }

    // On ajoute l'occurence au score:
    if ( (occ3 == 1) && (occ3 != 0) ) { Finale = Finale + (occ3 * 1000);}
    else if (occ3 != 0){ Finale = Finale + (occ3 * 100);}

    return Finale;

}

int main(){
    int dice[] = {5, 5, 5, 5, 4};
    printf("Resultat: %d",score(dice));
}