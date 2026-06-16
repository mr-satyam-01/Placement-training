package day11;

class bookDetails {
    String title;
    String author;
    int year;
    int price;
    boolean available;

    bookDetails(String title, String author, int year, int price, boolean available) {
        this.title = title;
        this.author = author;
        this.year = year;
        this.price = price;
        this.available = available;
    }

    void displayDetails() {
        System.out.println("The book " + title + " written by " + author + " in the year " + year + " priced at "
                + price + " is " + available);
    }

   static int Maxprice(bookDetails[] books) {
    int max = books[0].price;

    for (int i = 1; i < books.length; i++) {
        if (books[i].price > max) {
            max = books[i].price;
        }
    }

    return max;
}
}

public class library {
    public static void main(String[] args) {
        bookDetails book1 = new bookDetails("Math", "RD sharma", 2004, 645, true);
        bookDetails book2 = new bookDetails("Science", "Rohit", 2005, 635, true);
        bookDetails book3 = new bookDetails("English", "Satyam", 2006, 625, true);
        bookDetails book4 = new bookDetails("Hindi", "Piyush", 2007, 615, true);
        bookDetails[] books = { book1, book2, book3, book4 };
        book1.displayDetails();
        book2.displayDetails();
        book3.displayDetails();
        book4.displayDetails();
        System.out.println("Maximum price: " + bookDetails.Maxprice(books));
    }
}
