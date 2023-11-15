#include <string>

class Article {
private:
    int rate;
    std::string title;
    int pub_year;
    
public:
    Article(): title(""), rate(0), pub_year(0){};
    Article(std::string titl, int rate, int year): title(titl), rate(rate), pub_year(year){};
    
    // get valuables
    std::string get_title();
    int get_rate();
    int get_pub_year();

    
    // set valuables
    void set_title(std::string);
    void set_rate(int);
    void set_pub_year(int);
    
};

std::string Article::get_title(){
    return title;
}

int Article::get_rate(){
    return rate;
}

int Article::get_pub_year(){
    return pub_year;
}

// los setters
void Article::set_title(std::string titl){
    title = titl;
}

void Article::set_rate(int rat){
    rate = rat;
}

void Article::set_pub_year(int year){
    pub_year = year;
}
