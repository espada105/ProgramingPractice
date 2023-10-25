package POWER_JAVA;

public class CH45 {
    public String name;
    private int number;
    public int age;

    public CH45(String name,int number, int age){
        this.name = name;
        this.number=number;
        this.age=age;
    }
    

    public String nametoString(){
        return "학생의 이름:"+name;
    }
    public String numbertoString(){
        return "학생의 이름:"+number;
    }
    public String agetoString(){
        return "학생의 나이:"+age;
    }



    public static void main(String [] args){
        CH45 student = new CH45("kim",0001,20);
        System.out.printf(student.nametoString());
        System.out.printf(student.numbertoString());
        System.out.printf(student.agetoString());

        if(student.name == null && student.number==0 && student.age==0){
            System.out.println("값이 주어진 객체가 생성되지 않음");
        } else {
            System.out.println("값이 주어진 객체가 생성됨");
        }

    }
}
