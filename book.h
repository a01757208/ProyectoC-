/*
 * Proyecto Rate
 * Risako Baba
 * A01757208
 * 29/11/2023
 */

/*
 The Book class is a derived class from the abstract class Article and represents a book.
 It adds the specific attribute 'volumes' to the general attributes of an article.
 */

#ifndef book_h
#define book_h

#endif /* book_h */

#include <string>

// Declaration of the Book class, a derived class from Article
class Book: public Article {
private:
    int volumes;  // Number of volumes in the book

public:
    // Constructors
    // Default constructor
    Book(): volumes(0), Article(){};
    
    /* Constructor that initializes the Book object with specific values.
     @param std::string titl: title of the book
            int rate: rating of the book
            int year: year when the book was published
            int vol: number of volumes in the book
     @return
    */
    Book(std::string titl, int rate, int year, int vol): Article(titl, rate, year), volumes(vol){};
    
    // Getters for attributes
    int get_volumes();  // Getter for volumes
    
    // Setters for attributes
    void set_volumes(int);  // Setter for volumes
    
    // Method to input new book details from the user
    void new_book();
    
};

/* Getter for volumes
 @param
 @return int: number of volumes in the book
*/
int Book::get_volumes(){
    return volumes;
}

/* Setter for volumes
 @param int: vol - new number of volumes in the book
 @return
*/
void Book::set_volumes(int vol){
    volumes = vol;
}

/* Method to input new book details from the user
 @param
 @return
*/
void Book :: new_book() {
    
    string titl;
    int yea;
    int rat;
    
    // Input title from the user
    cout << "Title: ";
    cin >> titl;
    Book :: set_title(titl);
    
    // Input release year from the user
    cout << "Released year: ";
    cin >> yea;
    Book :: set_pub_year(yea);
    
    // Input rating from the user
    cout << "Rate (0 - 10): ";
    cin >> rat;
    Book :: set_rate(rat);
    
    // Input number of volumes from the user
    cout << "Number of volumes: ";
    cin >> volumes;
}

