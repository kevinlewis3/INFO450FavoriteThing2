#include <iostream>
#include <string>
#include "Favorites.h"
#include "FavoritesList.h"
using namespace std;

int main() {
    int selection = 1;
    FavoritesList list;
    string fileLocation;

    do {
        cout << "1. Read items from a personal list." << endl;
        cout << "2. Add a new beer to your list." << endl;
        cout << "3. Display your favorite beers." << endl;
        cout << "4. Export your favorites to a file." << endl;
        cout << "0. Exit." << endl;
        cout << "Enter a number to choose from the above options: ";
        cin >> selection;
        cin.ignore();

        if (selection == 0) {
            break;
        } else if (selection == 1) {
            cout << "Enter the file path: ";
            getline(cin, fileLocation);
            list.readFromFile(fileLocation);
            cout << "\nSuccessfully loaded file. Use option 3 to view what you currently have on the list." << endl;
        } else if (selection == 2) {
            list.addFavorites();
            cout << "\nSuccessfully added a new beer to list." << endl;
        } else if (selection == 3) {
            list.showFavorites();
            cout << endl;
        } else if (selection == 4) {
            cout << "Enter the full file path: ";
            getline(cin, fileLocation);
            list.saveFile(fileLocation);
            cout << endl << "Successfully saved document" << endl;

        } else {
            cout << "Invalid response. Try again,sucker";
        }
        } while (selection != 0);

    }




