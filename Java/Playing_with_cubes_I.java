/*

Create a public class called Cube without a constructor which gets one single private integer variable Side, a getter GetSide() and a setter SetSide(int num) method for this property. Actually, getter and setter methods are not the common way to write this code in C#. In the next kata of this series, we gonna refactor the code and make it a bit more professional...

Notes:

There's no need to check for negative values!
initialise the side to 0.

*/

public class Playing_with_cubes_I {
    //create a class member integers called "side"
    private int Side;

    // Get Method:
    public int getSide(){
        return Side;
    }

    // Set Method:
    public void setSide(int num){
        this.Side = num;
    }
}
