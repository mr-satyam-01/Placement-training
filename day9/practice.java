package day9;

public class practice {
    public static void main(String[] args) {
        System.out.println("string to int");
        String numstring = "12340";
        int n1 = Integer.parseInt(numstring);
        System.out.println("parse int way " + n1 + " (math check : " + (n1 + 1) + ")");

        int n2 = Integer.valueOf(numstring);
        System.out.println("parse int way 2 " + n2 + " (math check : " + (n2 + 1) + ")");
        String invalidString = "123abc";
        try {
            int badnumber = Integer.parseInt(invalidString);
        } catch (NumberFormatException e) {
            System.out.println("error : cannot convert " + invalidString + " to int ");

        }
    }
}
