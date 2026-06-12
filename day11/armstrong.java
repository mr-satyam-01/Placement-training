package day11;

import java.util.Scanner;

public class armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your number");
        int num = sc.nextInt();
        int initial = num;
        int arm = 0;
        while(num != 0){
            int divide = num%10;
            arm += (divide*divide*divide);
            num = num/10;
        }
if(initial == arm){
System.out.println("This is armstrong number");
}else{
    System.out.println("This is not armstrong number");
}
    }
}
