/*
 * Proyecto Rate
 * Risako Baba
 * A01757208
 * 29/11/2023
 */

/*
 The Series class is a derived class from the abstract class Article and represents a series.
 It adds the specific attributes 'episodes' and 'fav_episodes' to the general attributes of an article.
 */

#ifndef series_h
#define series_h

#endif /* series_h */

#include <string>
#include <iostream>

// Declaration of the Series class, a derived class from Article
class Series : public Article {
private:
    
    int episodes;               // Number of episodes in the series
    int size_fav = 0;           // Size of the array of favorite episodes
    int fav_episodes[100];      // Array to store favorite episodes

public:
    
    // Constructors
    // Default constructor
    Series(): Article(), episodes(0){};
    
    /* Constructor that initializes the Series object with specific values.
     @param std::string titl: title of the series
            int rate: rating of the series
            int epi: number of episodes in the series
            int year: year when the series was released
     @return
    */
    Series(std::string titl, int rate, int epi, int year): Article(titl, rate, year), episodes(epi){};
    
    // Getters for attributes
    int get_episodes();
    int get_size_fav();
    
    int get_fav_episodes(int);

    // Setters for attributes
    void set_episodes(int);
    void add_fav_episodes(int);
    
    // Method to input new series details from the user
    void new_series();
};

/* Getter for episodes
 @param
 @return int: number of episodes in the series
*/
int Series::get_episodes(){
    return episodes;
}

/* Getter for the size of the array of favorite episodes
 @param
 @return int: size of the array of favorite episodes
*/
int Series::get_size_fav(){
    return size_fav;
}

/* Getter for a specific favorite episode
 @param int: i - index of the favorite episode in the array
 @return int: the i-th favorite episode
*/
int Series::get_fav_episodes(int i){
    return fav_episodes[i];
}

/* Setter for episodes
 @param int: epi - new number of episodes in the series
 @return
*/
void Series::set_episodes(int epi){
    episodes = epi;
}

/* Method to add a favorite episode to the array
 @param int: epi - new favorite episode to add
 @return
*/
void Series::add_fav_episodes(int epi){
    fav_episodes[size_fav] = epi;
    size_fav = size_fav + 1;
}

/* Method to input new series details from the user
 @param
 @return
*/
void Series::new_series() {
    
    string titl;
    int yea;
    int rat;
    
    // Input title from the user
    cout << "Title: ";
    cin >> titl;
    Series::set_title(titl);
    
    // Input release year from the user
    cout << "Released year: ";
    cin >> yea;
    Series::set_pub_year(yea);
    
    // Input rating from the user
    cout << "Rate (0 - 10): ";
    cin >> rat;
    Series::set_rate(rat);
    
    // Input number of episodes from the user
    cout << "Number of episodes: ";
    cin >> episodes;
}

