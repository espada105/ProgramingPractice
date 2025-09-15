package POWER_JAVA;
public class CH34 {
    public static void main(String [] args){

        int c3 = 0;
        for(int i =1; i<=100; i++ ){
            if(i % 3==0 || i%4==0){
                c3 += i;
            }
        }
        System.out.print(c3);

    }
    
}
