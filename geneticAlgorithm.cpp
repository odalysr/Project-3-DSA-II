#include"geneticAlgorithm.hpp"
#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void GA::GA(int city, int pop, int gen, double perc){
    //fills array s
    this->n = pop;
    this->numGens = gen;
    this->cities = city;
    this->prob = perc;
    srand(time(0));
    //May have to init first tour
}
void GA::FileHandle(){//fileHandling stuff
    ifstream inFile;
    inFile.open("distances.txt");

    if(!inFile.is_open()){
        cout << "Error opening distances.txt" << endl;
        return;
    }
    //adjacency matrix
    for(int i = 0; i < 20; ++i){//row
        for(int j = 0; j < 20; ++j){//column
            if(i == j)
                this->arr[i][j] = 0;
            else
                inFile >> this->arr[i][j];
        }
    }
}

void GA::swap(int &p, int &q){//swap function
    int temp;
    temp = p;
    p = q; 
    q = temp;
}
int GA::factorial(){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
void GA::setcities(int cities){
    this->cities = cities;
}
int GA::getCities(){
    return this->cities;
}

void GA::printS(){//print the s array, thereby displaying the next permutation
    //permutations start and end with 0
    /*s[0] = 0;
    s[cities + 1] = 0;

    string str;

    for(int i = 0; i < cities+1; i++){
        str.push_back(s[i]);
    }
    return str;//print str*/
    for(int i: initialTour){
        cout << i << " ";
    }
    cout << endl;
}

void GA::permute(int permsThisCall){
    int m, k, p, q, i;
    //print function
    printS();
    NUMELEMNTS = this->cities; //NUMELEMNTS is the number of ints in the s array that you're permutating
    vector<int> s = this->initialTour;
    for(int i = 1; i < permsThisCall; i++){
        m = NUMELEMNTS - 2;
        while(s[m]>s[m+1]){
            m = m - 1;
        }
        k = NUMELEMNTS -1;
        while(s[m] > s[k]){
            k = k - 1;
        }
        swap(m,k);
        p = m + 1;
        q = NUMLEMNTS - 1;
        while(p < q){
            swap(p,q);
            p++;
            q--;
        }
        printS();
        this->initialTour = s;
        perms.push_back(s);
    }
}


//get cost of specific tour
double GA::getCost(vector<int> array){

    double cost;

    for(int j = 0; j < cities-1; j++){
        
        cost+= arr[array[j]][array[j+1]];
    }
    return cost;
}

void GA::mutate(vector<int> array){
    /*for(int i = 0; array.size(); i++){
        if( array[i] != 0 && array[i+1] != 0){ 
            swap(array[i], array[i+1]);
            return;
        }
    }*/
    vector<int> temp = array;
    int a = 1+(rand()%(array.size()-1));
    int b = 1+(rand()%(array.size()-1));
    swap(array.at(a),array.at(b));
}

void GA::elite(){ //get two elites
    vector<int> min1;
    int c = 1000000;
    for(vector<int> path: perms){
        /*for(int i = 0; i < perms.size(); i++){
            path = perms[i];
        }*/
        if(getCost(path)< c)
            min1 = path;
            c = getCost(path);
    }
    cost = 1000000;
    vector<int> min2;
    for(vector<int> path){
        if(getCost(path) < cost && path != min1)
            min2 = path;
            c = getCost(path);
    }
    elite1 = min1;
    elite2 = min2;
}
int GA::poor(){
    vector<int> max1;
    int c = -1;
    int i = 0;
    for(vector<int> path: perms){
        if(getCost(path) > c){ 
            max1 = path;
            c = getCost(path);
            i++;
        }
    }
    return i;
}
void GA::setPop(int n){
    this->n = n;
}
 void GA::getNumGens(int numGens){
this->numGens = numGens;
 }

void bestElite(){//best elite and replaces with poor of population
    int c1 = getCost(elite1);
    int c2 = getCost(elite2);
    if(c1 < c2)
        perms.at(poor()) = elite1;
    else    
        perms.at(poor()) = elite2;
}

void GA::compute(){
    //initialize popultation
    for(int i = 0; i < cities; i++)
        initialTour.push_back(i);
    initialTour.push_back(0);
    perms.push_back(initialTour);
    permute(this->n);
    //loop for num of generations

    int tempGens = numGens;
    while(tempGens > 0){
        elite();
        if(rand()%10 < prob*10){
            mutate(elite1);
            mutate(elite2);
        }
        bestElite();
        tempGens--;
    }
    bestElite();
    printS();
}



