//
//  main.cpp
//  Poject-Rating
//
//  Created by 馬場理咲子 on 2023/11/06.
//

#include <iostream>
#include <string>
#include "user.h"

using namespace std;

// MENU (todavia no lo he acabado constuir)
void menu() {
    cout << "---- Let's Rate! ----" << endl;
    cout << "Menu: " << endl;
    cout << "1. Rate a new article" << endl;
//    cout << "2. Nominate an article" << endl;
//    cout << "3. My records" << endl;
//    cout << "4. My favorites" << endl;
    cout << "2. End" << endl;
    cout << endl;
}

int main(){
    
    User user;
    
    bool contin = true;
    int option;
    
    while(contin){
        
        // Muestra el menu
        menu();
        cout << "Choose one: ";
        cin >> option;
        cout << endl;
        
        
        if (option == 1) {
            user.new_article();
        }
        else if (option == 2) {
            cout << "Thank you!" << endl;
            contin = false;
        }
        else {
            cout << "INVALID OPTION" << endl;
        }
        
        
    }

    return 0;
}


