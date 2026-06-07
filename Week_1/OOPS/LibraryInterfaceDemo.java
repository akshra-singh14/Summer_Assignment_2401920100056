interface LibraryUser{
    void registerAccount();
    void requestBook();
}
 class KidUsers implements LibraryUser{
    int age;
    String bookType;
    void setAge(int age) {
        this.age = age;
    }
    void setBookType(String bookType) {
        this.bookType = bookType;
    }
    public void registerAccount() {
        if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
        }
        else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    public void requestBook() {
        if (bookType.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

 class AdultUser implements LibraryUser{
    int age;
    String bookType;
    void setAge(int age) {
        this.age = age;
    }
    void setBookType(String bookType) {
        this.bookType = bookType;
    }
    public void registerAccount() {
        if(age>=12){
            System.out.println("You have successfully registered under an Adult Account");
        }
        else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }
    public void requestBook() {
        if (bookType.equals("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only Fiction books");
        }
    }
}

public class LibraryInterfaceDemo{
    public static void main(String[] args) {
        KidUsers kids=new KidUsers();
        kids.setAge(10);
        kids.registerAccount();
        kids.setAge(18);
        kids.registerAccount();

        kids.setBookType("Kids");
        kids.requestBook();
        kids.setBookType("Fiction");
        kids.requestBook();

        System.out.println("\n");
        AdultUser adults=new AdultUser();
        adults.setAge(5);
        adults.registerAccount();
        adults.setAge(23);
        adults.registerAccount();

        adults.setBookType("Kids");
        adults.requestBook();
        adults.setBookType("Fiction");
        adults.requestBook();
    }
}
