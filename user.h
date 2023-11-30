/*
 * Proyecto Rate
 * Risako Baba
 * A01757208
 * 29/11/2023
 */

/*
 The User class represents a user who can rate and create articles, including movies, series, and books.
 It keeps track of the number of each type of article and stores them in arrays.
 */

#ifndef user_h
#define user_h
#endif /* user_h */

#include <string>
#include <iostream>
#include "movie.h"
#include "series.h"
#include "book.h"

using namespace std;

// Declaration of the User class
class User {
private:
    string name;  // User's name
    int book_num = 0;  // Number of books rated
    int series_num = 0;  // Number of series rated
    int movie_num = 0;  // Number of movies rated
    
    // Arrays to store objects
    Movie arg_mov[100];
    Series arg_ser[100];
    Book arg_boo[100];

public:
    // Constructors
    // Default constructor
    User(): name(""){};
    
    /* Constructor that initializes the User object with a specific name.
     @param std::string nam: user's name
     @return
    */
    User(string nam): name(nam){};

    // Getters for attributes
    string get_name();  // Getter for name
    int get_book_num();  // Getter for the number of books rated
    int get_series_num();  // Getter for the number of series rated
    int get_movie_num();  // Getter for the number of movies rated
    
    // Setters for attributes
    void set_name(string);  // Setter for name
    
    // Method to rate a new article
    void new_article();
    
    // Methods to create different types of articles
    void create_book();
    void create_movie();
    void create_series();
    
};

/* Getter for name
 @param
 @return std::string: user's name
*/
string User :: get_name() {
    return name;
}

/* Getter for the number of books rated
 @param
 @return int: number of books rated by the user
*/
int User :: get_book_num() {
    return book_num;
}

/* Getter for the number of series rated
 @param
 @return int: number of series rated by the user
*/
int User :: get_series_num() {
    return series_num;
}

/* Getter for the number of movies rated
 @param
 @return int: number of movies rated by the user
*/
int User :: get_movie_num() {
    return movie_num;
}

/* Setter for name
 @param std::string nam: user's name
 @return
*/
void User :: set_name(string nam) {
    name = nam;
}

/* Method to rate a new article
 @param
 @return
*/
void User :: new_article() {

    cout << "---- Rate new article ----" << endl;
    
    int typ;
    
    // Show the options
    cout << "1. Movie" << endl;
    cout << "2. Series" << endl;
    cout << "3. Book" << endl;
    cout << "Which type of article do you want to rate?: ";
    cin >> typ;
    cout << endl;

    if (typ >= 1 && typ <= 3) {
        switch (typ) {
            // if user choose 1
            case 1: {
                // Call the function to create new object of Movie
                create_movie();
                break;
            }
            // if user choose 2
            case 2: {
                // Call the function to create new object of Series
                create_series();
                break;
            }
            // if user choose 3
            case 3: {
                // Call the function to create new object of Book
                create_book();
                break;
            }
        }
     
    } else {
     cout << "INVALID OPTION" << endl;
    }
}

/* Method to create and rate a new book
 @param
 @return
*/
void User::create_book(){
    
    // Create a new object of book
    Book book;
    book.new_book();
    
    // Print out the information of the book
    cout << "------ Book: " << book.get_title() << " -------"<< endl;
    cout << "The rate of the book is: " << book.get_rate() << "/10" << endl;
    cout << "The number of volumes: " << book.get_volumes() << endl;
    cout << "The released year of the book is: " << book.get_pub_year() << endl;
    cout << endl;
    
    // Save it in the array
    arg_boo[book_num] = book;
    
    // Update the number of the book inside the array
    book_num = book_num + 1;
}

/* Method to create and rate a new movie
 @param
 @return
*/
void User::create_movie(){
    
    // Create a new object of Movie
    Movie movie;
    movie.new_movie();
    
    // Print out the information of the movie
    cout << "------ Movie: " << movie.get_title() << " -------"<< endl;
    cout << "The rate of the movie is: " << movie.get_rate() << "/10" << endl;
    cout << "The duration of the movie is: " << movie.get_duration() << " min" << endl;
    cout << "The released year of the movie is: " << movie.get_pub_year() << endl;
    cout << endl;
    
    // Save it in the array
    arg_mov[movie_num] = movie;
    
    // Update the number of the movie inside the array
    movie_num = movie_num + 1;
}

/* Method to create and rate a new series
 @param
 @return
*/
void User::create_series(){
    
    // Create a new object of Series
    Series series;
    series.new_series();
    
    // Print out the information of the series
    cout << "------ Series: " << series.get_title() << " -------"<< endl;
    cout << "The rate of the series is: " << series.get_rate() << "/10" << endl;
    cout << "The number of episodes: " << series.get_episodes() << " episodes" << endl;
    cout << "The released year of the series is: " << series.get_pub_year() << endl;
    
    // Add favorite episodeds (I did not have time to make a code for this so it select episode No. 20 as a default)
    series.add_fav_episodes(20);
    cout << "Your favorite episodes are: " << endl;
    int size_fav = series.get_size_fav();
    
    // Print all the episode inside the array
    for (int i = 0; i < size_fav; i++){
        cout << "Episode No." << series.get_fav_episodes(i);
    }
    cout << endl;
    
    // Save it in the array
    arg_ser[series_num] = series;
    
    // Update the number of the series inside the array
    series_num = series_num + 1;
}
