#include <string>

class Movie{
private:
    int duration;
    int rate;
    std::string title;
    int pub_year;

public:
    Movie(): title(""), rate(0), duration(0), pub_year(0){};
    Movie(std::string titl, int rate, int dur, int year): title(titl), rate(rate), duration(dur), pub_year(year){};
    
    // get valuables
    std::string get_title();
    int get_rate();
    int get_duration();
    int get_pub_year();
    
    // set valuables
    void set_title(std::string);
    void set_rate(int);
    void set_duration(int);
    void set_pub_year(int);
    
    
    
};

// los getters
std::string Movie::get_title(){
    return title;
}

int Movie::get_rate(){
    return rate;
}

int Movie::get_duration(){
    return duration;
}

int Movie::get_pub_year(){
    return pub_year;
}


// los setters
void Movie::set_title(std::string titl){
    title = titl;
}

void Movie::set_rate(int rat){
    rate = rat;
}

void Movie::set_duration(int dura){
    duration = dura;
}

void Movie::set_pub_year(int year){
    pub_year = year;
}
