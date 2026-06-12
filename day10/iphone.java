package day10;

class smartphone {
    public boolean isON;
    public int brightness;

    public void turnon() {
        isON = true;
        brightness = 100;
    }

    public void status() {
        System.out.println("brightness status" + (isON ? " on " : " off ") + " at " + brightness + "%");
    }
}

public class iphone {
    public static void main(String[] args) {
        smartphone iphone7 = new smartphone();
        iphone7.status();
        iphone7.turnon();
        iphone7.status();
    }
}
