/*
 * Proyecto Rate
 * Risako Baba
 * A01757208
 * 29/11/2023
 */


/*
 Movie class is a derived class from the abstract class Article and represents a movie.
 It adds the specific attribute 'duration' to the general attributes of an article.
 */

#ifndef movie_h
#define movie_h

#endif /* movie_h */

#include <string>
#include <iostream>
#include "article.h"

using namespace std;

// Declares the class Movie, a derived class from Article
class Movie : public Article {
private:
    
    int duration;  // Duration of the movie in minutes
    
public:
    // Constructors
    // Default constructor
    Movie(): Article(), duration(0){};
    
    /* Constructor that initializes the Movie object with specific values.
     @param std::string titl: title of the movie
            int rate: rate of the movie
            int dur: duration of the movie in minutes
            int year: year when the movie was released
     @return
    */
    Movie(std::string titl, int rate, int dur, int year): Article(titl, rate, year), duration(dur){};
    
    // Getter for duration
    int get_duration();
    
    // Setter for duration
    void set_duration(int);
    
    // Method to input new movie details from the user
    void new_movie();
};

/* Getter for duration
 @param
 @return int: duration of the movie in minutes
*/
int Movie::get_duration(){
    return duration;
}

/* Setter for duration
 @param int: dur - new duration of the movie
 @return
*/
void Movie::set_duration(int dura){
    duration = dura;
}

/* Method to input new movie details from the user
 @param
 @return
*/
void Movie::new_movie() {
    
    string titl;
    int yea;
    int rat;
    
    // Input title from the user
    cout << "Title: ";
    cin >> titl;
    Movie::set_title(titl);
    
    // Input release year from the user
    cout << "Released year: ";
    cin >> yea;
    Movie::set_pub_year(yea);
    
    // Input rating from the user
    cout << "Rate (0 - 10): ";
    cin >> rat;
    Movie::set_rate(rat);
    
    // Input duration from the user
    cout << "Duration (min): ";
    cin >> duration;
}
