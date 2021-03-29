#include"IO.hpp"

//mutators
void IO::setTours(int tours){
    this->tours = tours;
}
void IO::setGenerations(int generations){
    this->generations = generations;
}
void IO::setPercent(double percent){
    this->percent = percent;
}
//accessors
int IO::getTours(){
    return this->tours;
}
int IO::getGenerations(){
    return this->generations;
}
double IO::getPercent(){
    return this->percent;
}

void IO::setPop(int n){
    this->population = n;
}

int IO::getPop(){
    return this->population;
}