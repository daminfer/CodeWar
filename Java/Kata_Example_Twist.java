/* Problème Rank: 8 Kyu

Il s'agit d'une variante facile de l'exemple de kata 
(fourni par Codewars lorsque vous apprenez à créer votre propre kata).
Ajoutez la valeur "codewars" au tableau websites/ Websites 1 000 fois.

*/

import java.util.Arrays;

public class Kata_Example_Twist {

    public static String[] kataExampleTwist(){
        String[] websites = new String[1000];
        Arrays.fill(websites, "codewars");
        return websites;
    }    
}
