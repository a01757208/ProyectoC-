#include <string>

class Series{
private:
    int episodes;
    int rate;
    std::string title;
    int pub_year;
    int size_fav = 0;
    int fav_episodes[0] = {};

public:
    Series(): title(""), rate(0), episodes(0), pub_year(0){};
    Series(std::string titl, int rate, int epi, int year): title(titl), rate(rate), episodes(epi), pub_year(year){};
    
    // obtener valiables
    std::string get_title();
    int get_rate();
    int get_episodes();
    int get_pub_year();
    int get_size_fav();
    int get_fav_episodes(int);
    
    // determinar valiables
    void set_title(std::string);
    void set_rate(int);
    void set_episodes(int);
    void set_pub_year(int);

    void add_fav_episodes(int);
};

// los getters
std::string Series::get_title(){
    return title;
}

int Series::get_rate(){
    return rate;
}

int Series::get_episodes(){
    return episodes;
}

int Series::get_pub_year(){
    return pub_year;
}

int Series::get_size_fav(){
    return size_fav;
}

int Series::get_fav_episodes(int i){
    return fav_episodes[i];
}

// los setters
void Series::set_title(std::string titl){
    title = titl;
}

void Series::set_rate(int rat){
    rate = rat;
}

void Series::set_episodes(int epi){
    episodes = epi;
}

void Series::set_pub_year(int year){
    pub_year = year;
}

void Series::add_fav_episodes(int epi){
    fav_episodes[size_fav] = epi;
    size_fav = size_fav + 1;
}
