#include"IO.hpp"

//mutators
void IO::setTour(int tour){
    this->tour = tour;
}
void IO::setGeneration(int generation){
    this->generation = generation;
}
void IO::setPercent(double percent){
    this->percent = percent;
}
void IO::setCity(int city){
    this->city = city;
}

//accessors
int IO::getTour(){
    return this->tour;
}
int IO::getGeneration(){
    return this->generation;
}
double IO::getPercent(){
    return this->percent;
}
int IO::getCity(){
    return this->city;
}