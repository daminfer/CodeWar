/* Problème Rank: 8 Kyu

Your function takes two arguments:
    1. current father's age (years)
    2. current age of his son (years)

Сalculate how many years ago the father was twice as old as his son 
(or in how many years he will be twice as old).

*/

int twice_as_old (int father_age, int son_age){
    if (father_age - 2 * son_age > 0)
        return father_age - 2 * son_age;
    else
        return 2 * son_age - father_age;
}