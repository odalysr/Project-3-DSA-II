
#include"IO.hpp"
#include"geneticAlgorithm.hpp"
#include "bruteForce.hpp"
#include<iostream>
#include<string>

using namespace std;
/*
The number of cities run
optimal cost from brute force
time the brute force algorithm took
cost from the ga
time the ga took to run
percent of optimal (eg: 120%) that the ga produced 
*/
int main(){

    IO objIO;
    //GA objGA;

    int cities;
    int tours;
    int generations;
    double prob;

    //user input
    cout << "Enter the number of cities:" << endl;
    cin >> cities;
    cout << "Enter the number of tours:" << endl;
    cin >> tours;
    cout <<"Enter the number of generations:" << endl;
    cin >> generations;
    cout << "Enter the percentage each mutation:" <<endl;
    cin >> prob;


    //setters
    objIO.setTours(cities);
    objIO.setPop(tours);
    objIO.setGenerations(generations);
    objIO.setPercent(prob);

    GA objGA = GA(objIO.getTours(),objIO.getPop(), objIO.getGenerations(), objIO.getPercent());
    objGA.fileHandle(); //initialize arr;
    objGA.compute();

    cout << endl << endl << endl;
 
    BF objBF = BF(objIO.getTours());
    objBF.run();
   //compute num of required mutated tours
   

    

    









    return 0;
}
