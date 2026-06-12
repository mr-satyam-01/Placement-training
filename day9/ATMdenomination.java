package day9;

import java.util.Scanner;

public class ATMdenomination {
    public static void main(String[] args) {
        int note[] = { 500, 200, 100, 50, 10 };
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your amount");
        int Amount = sc.nextInt();
        int Totalnotecount = 0;
        for (int i = 0; i < note.length; i++) {
            int notecount = Amount / note[i];
            int leftamount = Amount % note[i];
            Amount = leftamount;
            System.out.println("The number of notes of " + note[i] + " " + notecount );
            Totalnotecount += notecount;
        }
        System.out.println("Total note count: " + Totalnotecount);
        sc.close();
    }

}
