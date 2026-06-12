package day10;

class Deliveryvehicle {
    String vehicleID;

    public Deliveryvehicle(String vehicleID) {
        this.vehicleID = vehicleID;
    }

    public void dispatch() {
        System.out.println("vehicle " + vehicleID + "is moving to deliver");
    }
}

class Dronedelivery extends Deliveryvehicle {
    public Dronedelivery(String vehicleID) {
        super(vehicleID);
    }

    @Override
    public void dispatch() {
        System.out.println("Drone " + vehicleID + "is flying to deliver");
    }
}

class logisticsmanager {
    public void scheduledelivery(String address) {
        System.out.println("Standard delivery schedule " + "to " + address);
    }

    // overloading

    public void scheduledelivery(String address, String timeslot) {
        System.out.println("Standard delivery " + "schedule to " + address + "during time " + timeslot + "slot");
    }

    public void scheduledelivery(int trackinID) {
        System.out.println("quering " + trackinID);
    }
}

public class polymorphism {
    public static void main(String[] args) {
  System.out.println("---overloading---");
  logisticsmanager manager = new logisticsmanager();
  manager.scheduledelivery("123 kalana, pune");
  manager.scheduledelivery("santacruz west, mumbai", "4pm - 8pm");
  manager.scheduledelivery(34287529);
  System.out.println("---overriding---");
  Deliveryvehicle rDeliveryvehicle = new Deliveryvehicle("van1 ");
  rDeliveryvehicle.dispatch();
  Dronedelivery dronese = new Dronedelivery("Drone 1 ");
  dronese.dispatch();
    }
}
