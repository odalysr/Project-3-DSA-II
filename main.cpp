
#include"IO.hpp"
#include"geneticAlgorithm.hpp"
#include<iostream>
#include<string>

using namespace std;

int main(){

    IO objIO;
    GA objGA;

    int cities;
    int tours;
    int generations;

    //user input
    cout << "Enter the number of cities " << endl;
    cin >> cities;
    cout << "Enter the number of tours " << endl;
    cin >> tours;
    cout <<"Enter the number of generations" << endl;
    cin >> generations;

    //setters
    objGA.setCities(cities);
    objIO.setTours(tours);
    objIO.setGenerations(generations);






    return 0;
}
