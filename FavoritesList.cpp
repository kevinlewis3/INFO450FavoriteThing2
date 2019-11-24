#include <iostream>
#include <string>
#include <fstream>
#include "Favorites.h"
#include "FavoritesList.h"
using namespace std;



FavoritesList::FavoritesList()
{
    numFavorites = 0;
    totalFavorites = 0;
}

void FavoritesList::addFavorites()
{
    int i;
    beers[numFavorites].getFavoritesInput();
    for (i = 0; i < numFavorites; i++)
    {
        if (beers[numFavorites] == beers[i])
        {
            cout << "Please try again. You've already listed this beer as being your favorite" << endl;
            numFavorites--;
        }
    }
    numFavorites++;

}

void FavoritesList::showFavorites() {
    if (numFavorites != 0) {
        cout << endl << "Here is the list of beers you've added: " << endl;
        int i;
        for (i = 0; i < numFavorites; i++) {
            cout << beers[i];
        }
        cout << "Total number of beers is " << numFavorites << "." << endl;
    } else {
        cout << "You currently have no beers on the list. Try opening a file or add a new beer." << endl;
    }
}

void FavoritesList::saveFile(string filename)
{
    int i;
    ofstream outputFile;
    outputFile.open(filename, ios::in);
    if (!outputFile)
    {
    outputFile.open(filename, ios::out);
    }
    for (i = 0; i < numFavorites; i++)
    {
        outputFile << beers[i].getName() << "|";
        outputFile << beers[i].getLocation() << "|";
        outputFile << beers[i].getAlcContent() << "|";
        outputFile << beers[i].getPrice() << "|";
        outputFile << beers[i].getBeerType() << endl;

        //Extra Credit - to be implemented
//        outputFile << beers[i]-> getName() << "|";
//        outputFile << beers[i]-> getLocation() << "|";
//        outputFile << beers[i]-> getAlcContent() << "|";
//        outputFile << beers[i]-> getPrice() << "|";
//        outputFile << beers[i]-> getBeerType() << endl;

    }
    outputFile.close();
    //return 0;
}
void FavoritesList::readFromFile(string filename) {
    ifstream inputFile;
    inputFile.open(filename, ios::in);
    if (!inputFile)
    {
        cout << "Could not open file. Make sure the file exists and you entered the path correctly." << endl;
        return;
    }

    string beerType;
    double alcContent;
    double price;
    string name;
    string location;
    string inputString;
    while (!inputFile.eof())
    {
        getline(inputFile,inputString, '|');
        if (inputString.length() >= 1){
            name = inputString;
            getline(inputFile, beerType, '|');
            getline(inputFile,location, '|');
            getline(inputFile,inputString, '|');
            price = stoi(inputString);
            getline(inputFile, beerType, '|');
            getline(inputFile,inputString, '|');
            alcContent = stoi(inputString);


            //Extra Credit - to be implemented.
//            beers[numFavorites]-> setName(name);
//            beers[numFavorites]-> setLocation(location);
//            beers[numFavorites]-> setBeerType(beerType);
//            beers[numFavorites]-> setAlcContent(alcContent);
//            beers[numFavorites]-> setPrice(price);

            beers[numFavorites].setName(name);
            beers[numFavorites].setLocation(location);
            beers[numFavorites].setBeerType(beerType);
            beers[numFavorites].setAlcContent(alcContent);
            beers[numFavorites].setPrice(price);
            numFavorites++;

        }
    }
    inputFile.close();
}

FavoritesList::~FavoritesList() {

}
