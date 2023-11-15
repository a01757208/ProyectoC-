#include <string>
#include <iostream>
//#include "article.h"

class Series : public Article{
private:
    int episodes;
    int size_fav = 0;
    int fav_episodes[0] = {};

public:
    Series(): Article(), episodes(0){};
    Series(std::string titl, int rate, int epi, int year): Article(titl, rate, year), episodes(epi){};
    
    // get valuables
    int get_episodes();
    int get_size_fav();
    int get_fav_episodes(int);
    
    // set valuables
    void set_episodes(int);
    void add_fav_episodes(int);
    
    void new_series();
};

// los getters
int Series::get_episodes(){
    return episodes;
}

int Series::get_size_fav(){
    return size_fav;
}

int Series::get_fav_episodes(int i){
    return fav_episodes[i];
}

// los setters
void Series::set_episodes(int epi){
    episodes = epi;
}

void Series::add_fav_episodes(int epi){
    fav_episodes[size_fav] = epi;
    size_fav = size_fav + 1;
}

void Series :: new_series() {
    
    string titl;
    int yea;
    int rat;
    
    cout << "Title: ";
    cin >> titl;
    Series :: set_title(titl);
    
    cout << "Releasted year: ";
    cin >> yea;
    Series :: set_pub_year(yea);
    
    cout << "Rate (0 - 10): ";
    cin >> rat;
    Series :: set_rate(rat);
    
    cout << "Number of episodes: ";
    cin >> episodes;

}
