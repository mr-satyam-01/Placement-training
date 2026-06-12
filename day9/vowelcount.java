package day9;

import java.util.Scanner;

public class vowelcount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your string");
        String inputstring = sc.nextLine().toLowerCase();
        int acount = 0, ecount = 0, icount = 0, ocount = 0, ucount = 0;
        for (int i = 0; i < inputstring.length(); i++) {
            char c = inputstring.charAt(i);
            switch (c) {
                case 'a':
                    acount++;
                    break;
                case 'e':
                    ecount++;
                    break;
                case 'i':
                    icount++;
                    break;
                case 'o':
                    ocount++;
                    break;
                case 'u':
                    ucount++;
                    break;
            }
        }
        System.out.println("No of a count: " + acount);
        System.out.println("No of e count: " + ecount);
        System.out.println("No of i count: " + icount);
        System.out.println("No of o count: " + ocount);
        System.out.println("No of u count: " + ucount);
        int Totalcount = acount + ecount + icount + ocount + ucount;
        System.out.println("Total vowel count: " + Totalcount);
    }
}
