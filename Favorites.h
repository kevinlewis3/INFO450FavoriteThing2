#pragma once
#include <iostream>
#include <string>
using namespace std;

class Favorites{
private:
    string beerType;
    double alcContent;
    double price;
public:
    string name;
    string location;
    string system;

    Favorites();
    Favorites(string n, string l, string b, double a, double p);

    ~Favorites();

    //Implementing getters and setters.
    void getFavoritesInput();

    void showFavorites();

    string getName();

    double getPrice();

    string getLocation();

    double getAlcContent();

    string getBeerType();

    void setName(string n);

    void setPrice(double p);

    void setLocation(string l);

    void setAlcContent(double a);

    void setBeerType(string b);

    friend ostream &operator<<(ostream &output, Favorites &i);

    friend bool operator==(const Favorites &lhs, const Favorites &rhs);

};

