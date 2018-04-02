#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    double Deg;
    double Dis;

    cin >> Deg >> Dis;
    Deg /= 10;

    string Dir;
    if (11.25 <= Deg && Deg < 33.75) {
        Dir = "NNE";
    } else if (33.75 <= Deg && Deg < 56.25) {
        Dir = "NE";
    } else if (56.25 <= Deg && Deg < 78.75) {
        Dir = "ENE";
    } else if (78.75 <= Deg && Deg < 101.25) {
        Dir = "E";
    } else if (101.25 <= Deg && Deg < 123.75) {
        Dir = "ESE";
    } else if (123.75 <= Deg && Deg < 146.25) {
        Dir = "SE";
    } else if (146.25 <= Deg && Deg < 168.75) {
        Dir = "SSE";
    } else if (168.75 <= Deg && Deg < 191.25) {
        Dir = "S";
    } else if (191.25 <= Deg && Deg < 213.75) {
        Dir = "SSW";
    } else if (213.75 <= Deg && Deg < 236.25) {
        Dir = "SW";
    } else if (236.25 <= Deg && Deg < 258.75) {
        Dir = "WSW";
    } else if (258.75 <= Deg && Deg < 281.25) {
        Dir = "W";
    } else if (281.25 <= Deg && Deg < 303.75) {
        Dir = "WNW";
    } else if (303.75 <= Deg && Deg < 326.25) {
        Dir = "NW";
    } else if (326.25 <= Deg && Deg < 348.75) {
        Dir = "NNW";
    } else {
        Dir = "N";
    }

    double v = round(Dis / 60 * 10) / 10;
    int W;
    if (0.0 <= v && v <= 0.2) {
        W = 0;
    } else if (0.3 <= v && v <= 1.5) {
        W = 1;
    } else if (1.6 <= v && v <= 3.3) {
        W = 2;
    } else if (3.4 <= v && v <= 5.4) {
        W = 3;
    } else if (5.5 <= v && v <= 7.9) {
        W = 4;
    } else if (8.0 <= v && v <= 10.7) {
        W = 5;
    } else if (10.8 <= v && v <= 13.8) {
        W = 6;
    } else if (13.9 <= v && v <= 17.1) {
        W = 7;
    } else if (17.2 <= v && v <= 20.7) {
        W = 8;
    } else if (20.8 <= v && v <= 24.4) {
        W = 9;
    } else if (24.5 <= v && v <= 28.4) {
        W = 10;
    } else if (28.5 <= v && v <= 32.6) {
        W = 11;
    } else if (32.7 <= v){
        W = 12;
    }

    if (W == 0) {
        Dir = "C";
    }

    cout << Dir << " " << W << endl;

    return 0;
}