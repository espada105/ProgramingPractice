package POWER_JAVA;

import java.util.*;

public class midterm3 {public static void main(String[] args) {
        // 배열 크기 지정
        int arraySize = 10;
        
        // 부동 소수점 난수를 저장할 배열 선언
        double[] farray = new double[arraySize];
        
        // 랜덤 숫자 생성기 생성
        Random random = new Random();
        
        // 배열에 난수 할당
        for (int i = 0; i < arraySize; i++) {
            farray[i] = random.nextDouble(); // 0.0부터 1.0 미만의 난수 생성
        }
        
        // 배열 내용 출력 (옵션)
        for (int i = 0; i < arraySize; i++) {
            System.out.println("farray[" + i + "] = " + farray[i]);
        }
    }
}
