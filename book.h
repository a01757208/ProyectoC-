//
//  books.h
//  Poject-Rating
//
//  Created by 馬場理咲子 on 2023/11/07.
//

#ifndef book_h
#define book_h

#endif /* book_h */
#include <string>
//#include "article.h"

class Book: public Article {
private:
    int volumes;

public:
    Book(): volumes(0), Article(){};
    Book(std::string titl, int rate, int year, int vol): Article(titl, rate, vol), volumes(vol){};
    
    // get valuables
    int get_volumes();
    
    // set valuables
    void set_volumes(int);
    
    void new_book();
    
};

int Book::get_volumes(){
    return volumes;
}

void Book::set_volumes(int vol){
    volumes = vol;
}

void Book :: new_book() {
    
    string titl;
    int yea;
    int rat;
    
    cout << "Title: ";
    cin >> titl;
    Book :: set_title(titl);
    
    cout << "Releasted year: ";
    cin >> yea;
    Book :: set_pub_year(yea);
    
    cout << "Rate (0 - 10): ";
    cin >> rat;
    Book :: set_rate(rat);
    
    cout << "Number of volumes: ";
    cin >> volumes;
}
    
