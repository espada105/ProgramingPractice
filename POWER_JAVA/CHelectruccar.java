package POWER_JAVA;

class Car {  // 클래스 이름은 보통 대문자로 시작하는 것이 규칙적입니다.
    int speed;

    public void setSpeed(int speed) {  // 메서드 정의에서 오류 수정
        this.speed = speed;
    }
}

class ElectricCar extends Car {  // 클래스 이름은 보통 대문자로 시작하는 것이 규칙적입니다.
    int battery;

    public void charge(int amount) {
        battery += amount;
    }
}

public class CHelectruccar {  // 클래스 이름은 보통 대문자로 시작하는 것이 규칙적입니다.
    public static void main(String[] args) {
        ElectricCar electricCar = new ElectricCar();
        electricCar.setSpeed(60);
        electricCar.charge(50);

        System.out.println("Speed: " + electricCar.speed);
        System.out.println("Battery Level: " + electricCar.battery);
    }
}

