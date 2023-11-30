// package POWER_JAVA;

// import java.util.Scanner;

// class Elevator {
//     private int currentFloor;
//     private int destinationFloor;

//     public Elevator() {
//         this.currentFloor = 1;
//         this.destinationFloor = 1;
//     }

//     public void askForBoarding() {
//         Scanner scanner = new Scanner(System.in);
//         System.out.print("탑승하시겠습니까? (yes/no): ");
//         String response = scanner.nextLine().toLowerCase();

//         if (response.equals("yes")) {
//             System.out.println("탑승합니다.");
//         } else {
//             System.out.println("문이 닫힙니다.");
//             System.exit(0);
//         }
//     }

//     public void setCurrentFloor() {
//         Scanner scanner = new Scanner(System.in);
//         System.out.print("현재 층을 입력하세요: ");
//         currentFloor = scanner.nextInt();
//     }

//     public void setDestinationFloor() {
//         Scanner scanner = new Scanner(System.in);
//         System.out.print("목적지 층을 입력하세요: ");
//         destinationFloor = scanner.nextInt();
//     }

//     public void moveElevator() {
//         while (currentFloor != destinationFloor) {
//             if (currentFloor < destinationFloor) {
//                 currentFloor++;
//                 System.out.println(currentFloor + "층으로 올라가는중입니다.");
//             } else {
//                 currentFloor--;
//                 System.out.println(currentFloor + "층으로 내려가는중입니다.");
//             }
//         }

//         System.out.println("목적지 층에 도착했습니다.");
//     }
// }

// public class ElevatorSimulator {
//     public static void main(String[] args) {
//         Elevator elevator = new Elevator();

//         elevator.askForBoarding();
//         elevator.setCurrentFloor();
//         elevator.setDestinationFloor();
//         elevator.moveElevator();
//     }
// }
