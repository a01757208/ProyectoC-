/*
 * Proyecto Rate
 * Risako Baba
 * A01757208
 * 29/11/2023
 */

/*
 Article class has general methods and attributes of an article and has 3 children
 classes: Movie, Series, Book
 */

#ifndef article_h
#define article_h


#endif /* article_h */
#include <string>

// Declairs the abstract class Article
class Article {
private:
    
    // Declairs the variables
    std::string title;
    int rate;
    int pub_year;
    
public:
    
    // Constructor for default
    Article(): title(""), rate(0), pub_year(0){};
    
    /* Constructor when the class receives values and save it in the instance variables
     @param std::string titl: title of the article, int rate: rate of the article, int year: when it was published.
     @return
    */
    Article(std::string titl, int rate, int year): title(titl), rate(rate), pub_year(year){};
    
    // Declairs the methods that the object will have
    // get valuables
    std::string get_title();
    int get_rate();
    int get_pub_year();
    
    // set valuables
    void set_title(std::string);
    void set_rate(int);
    void set_pub_year(int);
    
};

/* getter title
 @param
 @return std::string title of the article
*/
std::string Article::get_title(){
    return title;
}

/* getter rate
 @param
 @return int: rate of the article
*/
int Article::get_rate(){
    return rate;
}

/* getter pub_year
 @param
 @return int: pub_year (published year) of the article
*/
int Article::get_pub_year(){
    return pub_year;
}

// setters

/* setter title
 @param std::string: titl
 @return
*/
void Article::set_title(std::string titl){
    title = titl;
}

/* setter rate
 @param int: rate of the article
 @return
*/
void Article::set_rate(int rat){
    rate = rat;
}

/* setter pub_year
 @param int: year when it was published the article
 @return
*/
void Article::set_pub_year(int year){
    pub_year = year;
}
