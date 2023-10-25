package POWER_JAVA;
import java.util.Scanner;

public class CH31 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int x;

        System.out.printf("정수를 입력하세요");
        x = sc.nextInt();
        
        switch(x){
            case 0:System.out.print("seozero"); break;
            case 1:System.out.print("one"); break;
            case 2:System.out.print("two"); break;
            case 3:System.out.print("three"); break;
            case 4:System.out.print("four"); break;
            case 5:System.out.print("five"); break;
            case 6:System.out.print("six"); break;
            case 7:System.out.print("seven"); break;
            case 8: System.out.print("eight"); break;
            case 9: System.out.print("nine"); break;
            default: System.out.print("other"); break;
        }



    }
}