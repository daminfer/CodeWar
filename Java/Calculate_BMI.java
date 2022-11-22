/* Problème Rank: 8 Kyu

Write function bmi that calculates body mass index (bmi = weight / height2).

if bmi <= 18.5 return "Underweight"

if bmi <= 25.0 return "Normal"

if bmi <= 30.0 return "Overweight"

if bmi > 30 return "Obese"

*/

public class Calculate_BMI {
    public static String bmi(double weight, double height) {
        double value = weight / (height*height);

        if (value <= 18.5) {
            return "Underweight";
        }
        else if (value <= 25.0){
            return "Normal";
        }
        else if (value <= 30.0){
            return "Overweight";
        }
        else {
            return "Obese";
        }

    }   
}
