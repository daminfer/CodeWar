/* Problème Rank: 8 Kyu

You are given two interior angles (in degrees) of a triangle.

Write a function to return the 3rd.

Note: only positive integers will be tested.

https://en.wikipedia.org/wiki/Triangle

*/

int other_angle(int a, int b) {

    //  <----  hajime!
    return 180 - a - b;

}