public class How_old_will_I_be_in_2099 {
    public static String CalculateAge(int birth, int year) {
        final int age = year - birth;    
        return 
          age == 0 ? "You were born this very year!" :
          age > 0 ? String.format("You are %d year%s old.", age, age == 1 ? "" : "s") :
          String.format("You will be born in %d year%s.", -age, -age == 1 ? "" : "s");
    }
}
