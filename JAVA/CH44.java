package POWER_JAVA;

public class CH44 {
    private String name;
    public String breed;
    private int age;

    public String toString(){
    return "이름: " + name + ", 견종: " + breed + ", 나이: " + age;

    }
    public CH44(String name){
        this.name = name;
    }

    public CH44(String name,int age){
        this.name = name;
        this.age = age;
    }

    public CH44(String name,String breed,int age){
        this.name = name;
        this.age = age;
        this.breed= breed;
    }

    public String barking(){
        return "멍멍";
    }

    public static void main(String[] args){
        CH44 p2 = new CH44("york","orange",1);
        System.out.println(p2);
        System.out.println(p2.barking());

    }
}

