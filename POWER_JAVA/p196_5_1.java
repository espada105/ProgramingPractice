package POWER_JAVA;

public class p196_5_1 {
    public static void main(double[] list){
        double min = list[0];

        for (int i =1;i<list.length; i++) {
            if(list[i] < min)
                min = list[i];
        }
        
        return(min);

    }

    
}
/* p2피자가 더 큽니다로 변경 */