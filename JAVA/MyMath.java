package POWER_JAVA;

public class MyMath {
    public static int abs(int x ) {return x>00?x:-x;}
    public static int power(int base, int exponent) {
        int result = 1;
        for(int i = 1; i <=exponent; i++)
            result *= base;
        return result;

    }
    
}
