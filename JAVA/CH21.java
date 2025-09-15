package POWER_JAVA;
import java.util.Scanner;

public class CH21 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int orange;
        int spareorange;
        int box;

        System.out.println("오렌지 개수를 입력하시오");
        orange = sc.nextInt();
        box = orange / 10;
        spareorange = orange % box;
        
        System.out.printf(box+"박스가 필요하고"+spareorange+"개가 남습니다");
    
    }
}