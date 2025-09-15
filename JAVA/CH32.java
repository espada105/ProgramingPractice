package POWER_JAVA;
import java.util.*;

public class CH32 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        
        System.out.println("연산을 입력하세요");
        String s = sc.nextLine();

        System.out.println("피연산을 입력하세요");
        int x = sc.nextInt();
        int y = sc.nextInt();
        double result;

        if(s.equals("+")){
            result = x+y;
        } else if(s.equals("-")){
            result = x-y;
        } else if(s.equals("*")){
            result = x*y;
        } else if (s.equals("/")) {
            result = (double)x / y;
        } else {
            System.out.printf("잘못입력했습니다");
            return;
        }

        System.out.print(result);



    }
}

