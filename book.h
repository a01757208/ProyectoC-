#include <string>

class Book{
private:
    int volumes;
    int rate;
    std::string title;
    int pub_year;
    

public:
    Book(): title(""), rate(0), volumes(0), pub_year(0){};
    Book(std::string titl, int rate, int vol, int year): title(titl), rate(rate), volumes(vol), pub_year(year){};
    
    // obtener valiables
    std::string get_title();
    int get_rate();
    int get_volumes();
    int get_pub_year();
    
    // determina valiables
    void set_title(std::string);
    void set_rate(int);
    void set_volumes(int);
    void set_pub_year(int);
    
    
    
};

// los getters
std::string Book::get_title(){
    return title;
}

int Book::get_rate(){
    return rate;
}

int Book::get_volumes(){
    return volumes;
}

int Book::get_pub_year(){
    return pub_year;
}

// los setters
void Book::set_title(std::string titl){
    title = titl;
}

void Book::set_rate(int rat){
    rate = rat;
}

void Book::set_volumes(int vol){
    volumes = vol;
}

void Book::set_pub_year(int year){
    pub_year = year;
}
