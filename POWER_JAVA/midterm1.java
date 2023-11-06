package POWER_JAVA;

class midterm12 {
    String color;
    int speed;
    int gear;

    @Override
    public String toString(){
        return "색"+color+"speed"+speed+"gear"+gear;
    }

    void changeGear(int g) {gear=g;}
    void speedUp(){speed=speed+10;}
    void speedDown(){speed = speed-10;}


    }
    public class midterm1{
        public static void main(String[]args){
                
            midterm12 myCar = new midterm12();
            myCar.changeGear(1);
            myCar.speedUp();
            System.out.println(myCar);
        }
    }




