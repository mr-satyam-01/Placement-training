package day9;

import java.util.Scanner;

public class practice {

    // =====================================================parse int
    // ==============================
    // public static void main(String[] args) {
    // System.out.println("string to int");
    // String numstring = "12340";
    // int n1 = Integer.parseInt(numstring);
    // System.out.println("parse int way " + n1 + " (math check : " + (n1 + 1) +
    // ")");

    // int n2 = Integer.valueOf(numstring);
    // System.out.println("parse int way 2 " + n2 + " (math check : " + (n2 + 1) +
    // ")");
    // String invalidString = "123abc";
    // try {
    // int badnumber = Integer.parseInt(invalidString);
    // } catch (NumberFormatException e) {
    // System.out.println("error : cannot convert " + invalidString + " to int ");

    // }
    // }

    // ======================================================if else
    // ====================================
    // public static void main(String[] args) {
    //     System.out.println("print statement");
    //     int a = 201;
    //     int b = 301;
    //     int c = a + b;
    //     System.out.println("sum of numbers is " + c);
    //     if (a > 0) {
    //         System.out.println("positive number ");
    //     } else if (a < 0) {
    //         System.out.println("negative number ");
    //     } else {
    //         System.out.println("number is zero ");
    //     }
    // }

//===========================question ==============
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter your age: ");
    int age = sc.nextInt();
    sc.close();
    if(age > 0 && age <=5){
        System.out.println("This is baby");
    }else if(age >= 6 && age <= 12){
        System.out.println("This is child");
    }else if(age >= 13 && age <= 19){
        System.out.println("This is teenager");
    }else if(age >= 20 && age <= 50){
        System.out.println("This is adult");
    }else if(age >= 51 && age <= 80){
        System.out.println("This is old");
    }else{
        System.out.println("This is dead");
    }
}


}
