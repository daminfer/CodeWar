public class Rotate_for_a_Max {
    
    public static long maxRot (long n) {
        String num = String.valueOf(n);

        for (int i = 0; i < num.length() - 1; i++) {
            num = num.substring(0, i) + // De 0 à i, on les place devant le mot
                    num.substring(i + 1) + // De i à la fun de num, on les places ensuite
                    num.charAt(i); // On ajoute num
            
            System.out.println("La sous-chaîne à l'étape" + Integer.toString(i) + "est : " + num);

            // On Renvoie le plus grand Num de chaque trie:

            if (Long.parseLong(num) > n) {
                n = Long.parseLong(num);
            }
        }

        return n;
    }
    
}
