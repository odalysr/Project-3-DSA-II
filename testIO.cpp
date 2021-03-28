#include"IO.hpp"
#include<iostream>

using namespace std;
int main(){
    IO obj;

    obj.setTours(10);
    obj.setGenerations(2);
    obj.setPercent(20.1);
/*
    cout << obj.getTour();
    cout << obj.getGeneration();
    cout << obj.getPercent();
    cout << obj.getCity();
*/
    return 0;
}