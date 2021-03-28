
#include"IO.hpp"
#include"geneticAlgorithm.hpp"
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
    GA objGA;

    int cities;
    int tours;
    int generations;

    //user input
    cout << "Enter the number of cities:" << endl;
    cin >> cities;
    cout << "Enter the number of tours:" << endl;
    cin >> tours;
    cout <<"Enter the number of generations:" << endl;
    cin >> generations;
    cout << "Enter the percentage each mutation:" <<endl;

    //setters
    objGA.setCities(cities);
    objIO.setTours(tours);
    objIO.setGenerations(generations);
    objIO.setPercent();

    objGA.fileHandle(); //initialize arr;

    cout << endl << endl << endl;
 
    //get number of cities 
    cout << "Number of cities to run: " << objGA.getCities() << endl;

    //timer
    struct timeval *t;
    t = (struct timeval *)malloc(sizeof(struct timeval));
    gettimeofday(t,NULL);
    time_t startSec = t->tv_sec;

   //compute num of required mutated tours
   int mutations = objIO.getTours() * objIO.getPercent() /100; //percent of muated tours
    //COMPUTE NUM OF MUTATIONS
    
    //get elites from each generation
    for( int i =0 ; i < 2 ; i ++){

    }

    









    return 0;
}
