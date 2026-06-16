package day11;

import java.util.Scanner;

public class LongestWord {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your string");
        String sentence = sc.nextLine();
        String[] words = sentence.split(" ");
        String longest = words[0];
        for (int i = 1; i <= words.length; i++) {
            if (words[i].length() > longest.length()) {
                longest = words[i];
            }
            
        }
System.out.println(longest);
    }
}
