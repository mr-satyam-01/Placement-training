package day9;

public class fooditems {
    public static void main(String[] args) {
        String arr[] = {"ButterChicken", "Biryani", "Pizza", "Pasta", "PuranPoli", "Bhindi", "Paneer"};
        arr[3] = "khasta";
        for(int i = 0; i<arr.length; i++ ){
            System.out.println(arr[i]);
        }
    }
}
