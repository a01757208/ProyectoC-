/*
 * Proyecto Rate
 * Risako Baba
 * A01757208
 * 29/11/2023
 */


// Libraries
#include <iostream> // To print out on the terminals
#include <string> // To manage text values
#include "user.h" // This is where manages all the classes and objects

using namespace std;

// MENU
void menu() {
    
    // Print the options
    cout << "---- Let's Rate! ----" << endl;
    cout << "Menu: " << endl;
    cout << "1. Rate a new article" << endl;
    cout << "2. End" << endl;
    cout << endl;
}

int main(){
    
    User user;
    
    bool contin = true;
    int option;
    
    // Run the code until the user wants to end
    while(contin){
        
        // Print the menu
        menu();
        
        // Imput the option
        cout << "Choose one: ";
        
        // Save the imput value inside the variable option
        cin >> option;
        cout << endl;
        
        // If the user chose option 1
        if (option == 1) {
            
            // Ceates new object and rate it
            user.new_article();
        }
        // If the user chose option 2
        else if (option == 2) {
            
            cout << "Thank you!" << endl;
            // Exit the while loop
            contin = false;
        }
        // If the user chose an invalid option
        else {
            
            // Show the error
            cout << "INVALID OPTION" << endl;
        }
        
        
    }

    return 0;
}
