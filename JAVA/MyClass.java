package POWER_JAVA;

interface MyInterface {
    void myMethod1();

    default void myMethod2() {
        System.out.println("myMethod2()");
    }
}

public class MyClass implements MyInterface {
    public void myMethod1() {
        System.out.println("myMethod1()");
    }

    public static void main(String[] args) {
        MyClass obj = new MyClass();
        obj.myMethod1();
        obj.myMethod2();
    }
}
