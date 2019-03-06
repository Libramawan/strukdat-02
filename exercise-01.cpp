/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi : Program ini menunjukkan atribut struct yang sederhana
 * Tahun    : 2019
 */
#include <iostream>
#include<string.h>

using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char goldar[2];
    char jk[1];
};

int main(){
    Orang orang;
    orang.umur=10;
    strcpy(orang.nama, "fahmi");
    strcpy(orang.goldar, "O");
    strcpy(orang.jk,"L");


    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.goldar<<endl;
    cout<<orang.jk<<endl;
}