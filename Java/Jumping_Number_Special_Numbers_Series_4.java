public class Jumping_Number_Special_Numbers_Series_4 {

    public static String jumpingNumber(int n) {
        final String s = "" + n;
        for (int i=1; i < s.length(); i++) if (Math.abs(s.charAt(i)-s.charAt(i-1)) != 1) return "Not!!";
        return "Jumping!!";
    }
}
