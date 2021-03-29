#include <iostream>
#include <vector>
#include <algorithm>
#include "bruteForce.hpp"

using namespace std;

BF::BF(int city){
    this->city = city;
}


void BF::run(){
    vector<int> temp = makeInit();
    vector<int> min = makeInit();
    int mcost = 100000;
    do{
        if(getCost(min) < getCost(temp)){
            temp = min;
            mcost = getCost(min);
        }
    }while(next_permutation(min.begin()+1), min.end()-1);
    printMin(temp);
}
void BF::makeInit(){
    for(int i = 0; i < this->city; i++){
        this->pass.push_back(i);
    }
    this->pass.push_back(0);
}

void printMin(vector<int> min){
    for(int i = 0; i < min.size(); i++){
        cout << min.at(i);
    }
}