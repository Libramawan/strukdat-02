/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi : Program ini membuat object dari struct Theater
 * Tahun    : 2019
 */
#include <iostream>
#include <string.h>

using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};

 int main(){
     Theater theater;
     theater.room=7;
     strcpy(theater.seat, "J9");
     strcpy(theater.movieTitle, "Adit & Jarwo");

     cout<<"room : "<<theater.room<<endl;
     cout<<"seat : "<<theater.seat<<endl;
     cout<<"movieTitle : "<<theater.movieTitle<<endl;
 }