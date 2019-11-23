#include <iostream>
#include <string>
#include "Favorites.h"
using namespace std;

Favorites::Favorites()
{
    name = "";
    price = 0;
    location = "";
    alcContent = 0;
    beerType = "";
    system = "";

}

Favorites::Favorites(string n, string l, string b, double a, double p)
{
    name = n;
    price = p;
    beerType = b;
    alcContent = a;
    location = l;

}
Favorites::~Favorites() {

}



string Favorites::getName()
{
    return name;
}
string Favorites::getLocation()
{
    return location;
}
string Favorites::getBeerType()
{
    return beerType;
}
double Favorites::getAlcContent()
{
    return alcContent;
}
double Favorites::getPrice()
{
    return price;
}
void Favorites::setName(string n)
{
    name = n;
}
void Favorites::setLocation(string l)
{
    location = l;
}
void Favorites::setAlcContent(double a)
{
    alcContent = a;
}
void Favorites::setPrice(double p)
{
    price = p;
}
void Favorites::setBeerType(string b)
{
    beerType = b;
}
void Favorites::getFavoritesInput() //Getting users input about their favorites.
{
    cout << "What is the name of your favorite beer from a Microbrewery? " << endl;
    getline(cin, name);

    cout << "What is the name of the Microbrewery that you can purchase this from? " << endl;
    getline(cin, location);

    cout << "What type of beer is it? Example, Lagar, Pale Ale, Stout " << endl;
    getline(cin, beerType);

    cout << "What is the alcohol percent? " << endl;
    cin >> alcContent;
    cin.ignore();

    cout << "What is the price? " << endl;
    cin >> price;
    cin.ignore();

}
void Favorites::showFavorites() {
    cout << "Name: " << name << " | ";
    cout << "Beer Type: " << beerType << " | ";
    cout << "Alcohol Content: " << alcContent << " | ";
    cout << "Price: " << price << " | ";
    cout << "Location: " << location << endl <<endl;


}

ostream& operator<<(ostream & output, Favorites &i) //Displaying the information collected from the user.
{
    output << "Beer: " <<i.name << " | Type: " << i.beerType << " | Price: $" << i.price <<endl;
    output << "Alcohol Content: " << i.alcContent << " | Location: " << i.location << endl;
    return output;

}

bool operator==(const Favorites& lhs, const Favorites& rhs)
{
    return lhs.name == rhs.name && lhs.system == rhs.system;
}
