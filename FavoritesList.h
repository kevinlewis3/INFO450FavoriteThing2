#pragma once
#include <iostream>
#include <string>
#include "Favorites.h"
using namespace std;

class FavoritesList
{
    int totalFavorites;
private:
    Favorites beers [100];
public:
    int numFavorites;
    FavoritesList();
    void addFavorites();
    void showFavorites();
    void readFromFile(string filename);
    void saveFile(string filename);
    ~FavoritesList();
};


