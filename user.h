//
//  user.h
//  Poject-Rating
//
//  Created by 馬場理咲子 on 2023/11/20.
//

#ifndef user_h
#define user_h //for what is this?


#endif /* user_h */
#include <string>
#include <iostream>
#include "movie.h" 
#include "series.h"
#include "book.h"

using namespace std;

class User {
private:
    string name;
    int book_num = 0;
    int series_num = 0;
    int movie_num = 0;
    
    Movie arg_mov[100];
    Series arg_ser[100];
    Book arg_boo[100];

public:
    User(): name(""){};
    User(string nam): name(nam){};

    string get_name();
    int get_book_num();
    int get_series_num();
    int get_movie_num();
    
    void set_name(string);
    void new_article();
    
};

string User :: get_name() {
    return name;
}

int User :: get_book_num() {
    return book_num;
}

int User :: get_series_num() {
    return series_num;
}

int User :: get_movie_num() {
    return movie_num;
}

void User :: set_name(string nam) {
    name = nam;
}

void User :: new_article() {
    // calificar los articulo
    cout << "---- Rate new article ----" << endl;
    
    int typ;
    cout << "1. Movie" << endl;
    cout << "2. Serie" << endl;
    cout << "3. Book" << endl;
    cout << "Which type of article do you want to rate?: ";
    cin >> typ;
    cout << endl;

    if (typ >= 1 && typ <= 3) {
     switch (typ) {
         case 1: {
             Movie movie;
             movie.new_movie();
             cout << "------ Movie: " << movie.get_title() << " -------"<< endl;
             cout << "The rate of the movie is: " << movie.get_rate() << "/10" << endl;
             cout << "The duration of the movie is: " << movie.get_duration() << " min" << endl;
             cout << "The released year of the movie is: " << movie.get_pub_year() << endl;
             cout << endl;
             
             arg_mov[movie_num] = movie;
             movie_num = movie_num + 1;
             
             break;
         }
             
         case 2: {
             Series series;
             series.new_series();
             cout << "------ Series: " << series.get_title() << " -------"<< endl;
             cout << "The rate of the series is: " << series.get_rate() << "/10" << endl;
             cout << "The number of episodes: " << series.get_episodes() << " episodes" << endl;
             cout << "The released year of the series is: " << series.get_pub_year() << endl;
             
             series.add_fav_episodes(20); // <-- me falta pedir a los usuarios sus episodios favoritos
             cout << "Your favorite episodes are: " << endl;
             int size_fav = series.get_size_fav();
             for (int i = 0; i < size_fav; i++){
                 cout << "Episode No." << series.get_fav_episodes(i);
             }
             cout << endl;
             
             arg_ser[series_num] = series;
             series_num = series_num + 1;
             
             break;
         }

         case 3: {
             Book book;
             book.new_book();
             
             cout << "------ Book: " << book.get_title() << " -------"<< endl;
             cout << "The rate of the book is: " << book.get_rate() << "/10" << endl;
             cout << "The number of volumes: " << book.get_volumes() << endl;
             cout << "The released year of the book is: " << book.get_pub_year() << endl;
             cout << endl;
             
             arg_boo[book_num] = book;
             book_num = book_num + 1;
             
             break;
             
         }
             

     }
     
    } else {
     cout << "INVALID OPTION" << endl;
    }
}
