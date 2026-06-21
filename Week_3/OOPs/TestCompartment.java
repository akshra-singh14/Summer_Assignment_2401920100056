import java.util.Random;

abstract class Compartment{
    public abstract String notice();
}
class FirstClass extends Compartment {
    public String notice() {
        return "First class is expensive and spacious.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment is reserved for ladies.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment can be booked by anyone.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment carries only luggage.";
    }
}

public class TestCompartment {
     public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random type = new Random();

        for (int i = 0; i < 10; i++) {
            int choice = type.nextInt(4) + 1; 
            switch (choice) {
                case 1:
                    compartments[i] = new Luggage();
                    break;
                case 2:
                    compartments[i] = new General();
                    break;
                case 3:
                    compartments[i] = new FirstClass();
                    break;
                case 4:
                    compartments[i] = new Ladies();
                    break;
            }
        }
        for (int i = 0; i < 10; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}
