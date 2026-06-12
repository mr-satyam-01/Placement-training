package day9;

import java.util.Random;
import java.util.Scanner;

public class numberGuess {
    public static void main(String[] args) {

        Random random = new Random();
        Scanner sc = new Scanner(System.in);

        int secretNumber = random.nextInt(100) + 1;
        int numberoftries = 0;
        int guess = 0;

        System.out.println("Guess the number between 1 and 100");

        while (guess != secretNumber) {
            System.out.print("Enter your guess: ");
            guess = sc.nextInt();
            numberoftries++;

            if (guess > secretNumber) {
                System.out.println("Too high!");
            } else if (guess < secretNumber) {
                System.out.println("Too low!");
            } else {
                System.out.println("Congratulations! You guessed the number.");
            }
        }
        System.out.println("No of attempts: " + numberoftries);
        sc.close();
    }
}