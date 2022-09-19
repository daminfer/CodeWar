/* Problème Rank: 8 kyu

Given an array of 4 integers
[a,b,c,d] representing two points (a, b) and (c, d), 
return a string representation of the slope of the line joining these two points.

For an undefined slope (division by 0), return undefined . Note that the "undefined" is case-sensitive.

   a:x1
   b:y1
   c:x2
   d:y2

Assume that [a,b,c,d] and the answer are all integers (no floating numbers!). 
Slope: https://en.wikipedia.org/wiki/Slope

*/

public class Find_the_Slope{
    public String slope(int[] points){
        int x = points[3] - points[1];
        int y = points[2] - points[0];
        return y == 0 ? "undefined" : String.format("%s", x / y);
	}
}