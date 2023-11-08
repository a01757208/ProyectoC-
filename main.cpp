# Risako Baba
# A01757208

#include <iostream>
#include <string>
#include "movie.h"
#include "series.h"
#include "book.h"

using namespace std;


/*
MENU (todavia no lo he acabado constuir)
void menu() {
    // insert code here...
    cout << "---- My ratings ----" << endl;
    cout << "Menu: " << endl;
    cout << "1. Search by title" << endl;
    cout << "2. Rate new item" << endl;
    cout << "3. My records" << endl;
    cout << "4. My favorites" << endl;
    cout << "5. Salir" << endl;
    
}
*/


int main(int argc, char* argv[]){
    
    
    Movie movie("Barbie", 10, 210, 2023);
    
    cout << "------ Movie: " << movie.get_title() << " -------"<< endl;
    cout << "The rate of the movie is: " << movie.get_rate() << "/10" << endl;
    cout << "The duration of the movie is: " << movie.get_duration() << " min" << endl;
    cout << "The released year of the movie is: " << movie.get_pub_year() << endl;
    cout << endl;
    
    Series series("Modern family", 10, 250, 2009);
    
    cout << "------ Series: " << series.get_title() << " -------"<< endl;
    cout << "The rate of the series is: " << series.get_rate() << "/10" << endl;
    cout << "The number of episodes: " << series.get_episodes() << " episodes" << endl;
    cout << "The released year of the series is: " << series.get_pub_year() << endl;
    
    series.add_fav_episodes(20);
    cout << "Your favorite episodes are: " << endl;
    int size_fav = series.get_size_fav();
    for (int i = 0; i < size_fav; i++){
        cout << "Episode No." << series.get_fav_episodes(i);
    }
    cout << endl;
    
    Book book("Harry Potter", 9, 10, 1997);
    
    cout << "------ Book: " << book.get_title() << " -------"<< endl;
    cout << "The rate of the book is: " << book.get_rate() << "/10" << endl;
    cout << "The number of volumes: " << book.get_volumes() << " episodes" << endl;
    cout << "The released year of the book is: " << book.get_pub_year() << endl;
    cout << endl;
    
    
    
    
    
    /*
    bool contin = true;
    int option = 0;
    int type = 0;
    string title = "";
    
    while(contin == true){
        
        menu();
        cin >> option;
        
        // Pide otra vez is la opcion
        if (option < 1 || option > 5){
            cout << "INVALID OPTION" << endl;
            break;
        }
        
        switch (option){
            case 1:
                // Busca con el titlo
                
                // Mostrar opciones
                cout << "Which type do you want to search?: " << endl;
                cout << "1. Movie" << endl;
                cout << "2. Serie" << endl;
                cout << "3. Book" << endl;
                cin >> type;
                
                switch (type){
                    case 1:
                        // Nueva pelicula
                        cout << "New movie" << endl;
                        
                        continue;
                    
                    case 2:
                        // Nueva serie
                        cout << "New series" << endl;
                        continue;
                        
                    case 3:
                        // Nueva
                        cout << "New book" << endl;
                        continue;
                        
                }
            
            case 2:
                // Califica nuevo articulo
                cout << "You rated this" << endl;
                continue;
            
            case 3:
                // Muestra cuantos articulos ha visto
                cout << "Your record is this" << endl;
                continue;
            
            case 4:
                // Muestra sus favoritos
                cout << "You favoite is this" << endl;
                continue;
                
            case 5:
                // Salir
                cout << "Thank you!" << endl;
                contin = false;
                
        }
        
        // space
        cout << endl;
        cout << endl;
        
    }
    */

    return 0;
}


