/* Problème Rank: 8 Kyu

Write a function which calculates the average of the numbers in a given list.

Note: Empty arrays should return 0.
*/

double find_average(double* array, int length) {
    double Num = 0;
    double Nb_Num = 0;
    for (int i = 0; i < length; i++){
        Num = Num + array[i];
        Nb_Num++;
    }
    return Num/Nb_Num ;
    
}