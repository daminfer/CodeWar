/* Problème Rank: 6 Kyu

Créez une fonction prenant un entier positif comme paramètre 
et renvoyant une chaîne contenant la représentation en chiffres romains de cet entier.

Symbol    Value
I          1
V          5
X          10
L          50
C          100
D          500
M          1,000

N'oubliez pas qu'il ne peut pas y avoir plus de 3 symboles identiques à la suite.
*/

// Correction:
function solution(number){
    // convert the number to a roman numeral
    var  roman = {M:1000,CM:900, D:500,CD:400,C:100,XC:90,L:50,XL:40,X:10,IX:9,V:5,IV:4,I:1 }
  
    var ans = '';
    while(number>0){
        for(a in roman){ 
            if(roman[a]<=number){ ans += a; number-=roman[a]; break;}
              
        }
    }
    return ans;
}
