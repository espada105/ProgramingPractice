package POWER_JAVA;

// import java.awt.event.ActionEvent;
// import java.awt.event.ActionListener;
// import javax.swing.Timer;

// class MyClass implements ActionListener {
//     public void actionPerformed(ActionEvent evevnt) {
//         System.out.println("beep");
//     }
// }


// public class CallbackTest {
//     public static void main(String[] args) {

//         ActionListener listener = new MyClass();
//         Timer t = new Timer(1000, listener);
//         t.start();
//         for(int i = 0; i < 1000; i++) {
//             try {
//                 Thread.sleep(1000);
//             } catch (InterruptedException e)
//         }
//     }
    
// }
class Single{
    private static Single instance = new Single();
    private Single() {}

    public static Single getInstance() {
    return instance;
    }
}

public class SingleTest {
    public static void main(String[] args){
        Single obj1 = Single.getInstance();
        Single obj2 = Single.getInstance();
        System.out.println(obj1);
        System.out.println(obj2);
    }
}