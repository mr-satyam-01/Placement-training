package day10;

class smartphone {
    String brand;
    String model;
    int storage;

    // Default constructor
    public smartphone() {
        this.brand = "unknown";
        this.model = "generic";
        this.storage = 128;
        System.out.println("No parameterised constructor called");
    }

    // Parameterised constructor
    public smartphone(String brand, String model, int storage) {
        this.brand = brand;
        this.model = model;
        this.storage = storage;
        System.out.println("Parameterised constructor called");
    }

    // Overloaded constructor
    public smartphone(String brand, String model) {
        this(brand, model, 256);
        System.out.println("Overloaded parameterised constructor called");
    }

    public void display() {
        System.out.println("Specs: " + brand + " " + model + " " + storage + " GB");
    }
}

public class SmartphoneDemo {
    public static void main(String[] args) {

        smartphone s1 = new smartphone();
        s1.display();

        smartphone s2 = new smartphone("Apple", "iPhone 15", 512);
        s2.display();

        smartphone s3 = new smartphone("Samsung", "S25");
        s3.display();
    }
}