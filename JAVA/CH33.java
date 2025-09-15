package POWER_JAVA;

public class CH33 {
    public static void main(String [] args) {
        for (int i = 1; i<=50; i++){
            if (i%10==3 || i%10==6 || i%10==9){
                if (i/10==3 || i/10==6 || i/10==9){
                    System.out.println("짝짝");
                } else{
                    System.out.println("짝");}
            } else {
                System.out.println(i);
            }
            
            
        }
    }
}
