package POWER_JAVA;

import java.util.Scanner;
    public class midterm2 {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            int sum = 0;
    
            System.out.println("정수를 입력하고 'q'를 입력하여 종료하세요.");
    
            do {
                System.out.print("정수 입력: ");
                if (scanner.hasNextInt()) {
                    int number = scanner.nextInt();
                    sum += number;
                } else {
                    String input = scanner.next();
                    if (input.equals("q")) {
                        break; // 'q'를 입력하면 반복 종료
                    } else {
                        System.out.println("올바른 입력이 아닙니다. 정수를 입력하세요.");
                    }
                }
            } while (true);
    
            System.out.println("입력한 정수의 합계: " + sum);
        }
    }

