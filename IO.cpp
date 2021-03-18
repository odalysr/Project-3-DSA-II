#include"IO.hpp"

void IO::setTour(int tour){
    this->tour = tour;
}
void IO::setGeneration(int generation){
    this->generation = generation;
}
void IO::setPercent(int percent){
    this->percetn = percent;
}
int IO::getTour(){
    return tour;
}
int IO::getGeneration(){
    return generation;
}
int GAlgotithm::getPercent(){
    return percent;
}