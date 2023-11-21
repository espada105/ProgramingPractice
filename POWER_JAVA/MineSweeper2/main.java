package POWER_JAVA.MineSweeper2;

import java.util.Random;
import java.util.Scanner;

public class main {
    private int size;
    private int mines;

    private char[][] board;
    private boolean[][] isMine;
    private boolean[][] revealed;

    public main() {
        getBoardSize();
        board = new char[size][size];
        isMine = new boolean[size][size];
        revealed = new boolean[size][size];

        setBoard();
        putMines();
        hint();
    }

    private void getBoardSize() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("보드의 크기를 입력하세요: ");
        size = scanner.nextInt();

        System.out.print("지뢰의 개수를 입력하세요: ");
        mines = scanner.nextInt();

    }

    private void setBoard() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                board[i][j] = '-';
                isMine[i][j] = false;
                revealed[i][j] = false;
            }
        }
    }

    private void putMines() {
        Random random = new Random();
        int minesPlaced = 0;

        while (minesPlaced < mines) {
            int x = random.nextInt(size);
            int y = random.nextInt(size);

            if (!isMine[x][y]) {
                isMine[x][y] = true;
                minesPlaced++;
            }
        }
    }

    private void hint() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (!isMine[i][j]) {
                    int count = countMines(i, j);
                    board[i][j] = (char) (count + '0');
                }
            }
        }
    }

    private int countMines(int row, int col) {
        int count = 0;
    
        for (int i = row - 1; i <= row + 1; i++) {
            for (int j = col - 1; j <= col + 1; j++) {
                if (i >= 0 && i < size && j >= 0 && j < size && !(i == row && j == col) && isMine[i][j]) {
                    count++;
                }
            }
        }
    
        return count;
    }
    

    private void printBoard(boolean revealMines) {
        System.out.print("  ");
        for (int i = 0; i < size; i++) {
            System.out.print(i + " ");
        }
        System.out.println();

        for (int i = 0; i < size; i++) {
            System.out.print(i + " ");
            for (int j = 0; j < size; j++) {
                if (revealed[i][j] || (isMine[i][j] && revealMines)) {
                    System.out.print(board[i][j] + " ");
                } else {
                    System.out.print("- ");
                }
            }
            System.out.println();
        }
    }

    private void revealCell(int row, int col) {
        if (row >= 0 && row < size && col >= 0 && col < size && !revealed[row][col]) {
            revealed[row][col] = true;

            if (isMine[row][col]) {
                System.out.println("Game Over");
                printBoard(true);
                System.exit(0);
            } else if (board[row][col] == '0') {
                for (int i = row - 1; i <= row + 1; i++) {
                    for (int j = col - 1; j <= col + 1; j++) {
                        revealCell(i, j);
                    }
                }
            }
        }
    }

    public void play() {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            printBoard(false);

            System.out.print("가로 행과 세로 열을 입력하세요 (공백으로 구분): ");
            int row = scanner.nextInt();
            int col = scanner.nextInt();

            if (row >= 0 && row < size && col >= 0 && col < size) {
                revealCell(row, col);
            } else {
                System.out.println("다시 입력하세요");
            }

            if (checkWin()) {
                System.out.println("Mission Clear !!");
                printBoard(true);
                break;
            }
        }
    }

    private boolean checkWin() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (!revealed[i][j] && !isMine[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        main mineSweeper = new main();
        mineSweeper.play();
    }
}
