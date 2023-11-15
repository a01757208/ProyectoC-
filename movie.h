#include <string>

#include <iostream>
#include "article.h"

using namespace std;


class Movie : public Article{
private:
    int duration;
    
public:
    Movie(): Article(), duration(0){};
    Movie(std::string titl, int rate, int dur, int year): Article(titl, rate, year), duration(dur){};
    
    // get valuables
    int get_duration();
    
    // set valuables
    void set_duration(int);
    void new_movie();
};

// los getters
int Movie::get_duration(){
    return duration;
}

// los setters
void Movie::set_duration(int dura){
    duration = dura;
}

void Movie :: new_movie() {
    
    string titl;
    int yea;
    int rat;
    
    cout << "Title: ";
    cin >> titl;
    Movie :: set_title(titl);
    
    cout << "Releasted year: ";
    cin >> yea;
    Movie :: set_pub_year(yea);
    
    cout << "Rate (0 - 10): ";
    cin >> rat;
    Movie :: set_rate(rat);
    
    cout << "Duration (min): ";
    cin >> duration;

}
