/* Problème Rank: 8 Kyu

Bulletin de notes
Complétez la fonction afin qu'elle trouve la moyenne des trois notes qui lui sont transmises 
et renvoie la valeur alphabétique associée à cette note.

Score numérique	Classement par lettre
90 <= note <= 100	'UN'
80 <= note < 90	'B'
70 <= score < 80	'C'
60 <= note < 70	'RÉ'
0 <= note < 60	'F'

Les valeurs testées sont toutes comprises entre 0 et 100. 
Il n'est pas nécessaire de vérifier les valeurs négatives ou les valeurs supérieures à 100.
*/

char get_grade(int a, int b, int c) {
    int note = (a + b + c) / 3;
    if (note >= 90){ return 'A';}
    if (note >= 80){ return 'B';}
    if (note >= 70){ return 'C';}
    if (note >= 60){ return 'D';}
    else { return 'F';}
}

char get_grade(a, b, c) 
{
  return "FFFFFFDCBAA"[(a+b+c)/30];
}