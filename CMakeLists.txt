cmake_minimum_required(VERSION 3.14)
project(INFO450FavoriteThing)

set(CMAKE_CXX_STANDARD 14)

add_executable(INFO450FavoriteThing main.cpp Favorites.h FavoritesList.h FavoritesList.cpp Favorites.cpp)