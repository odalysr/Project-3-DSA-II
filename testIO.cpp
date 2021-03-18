#include"IO.hpp"
#include<iostream>

using namespace std;
int main(){
    IO obj;

    obj.setTour(10);
    obj.setGeneration(2);
    obj.setPercent(.20);
    obj.setCity(5);
/*
    cout << obj.getTour();
    cout << obj.getGeneration();
    cout << obj.getPercent();
    cout << obj.getCity();
*/
    return 0;
}