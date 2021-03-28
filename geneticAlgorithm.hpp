
#define GENETICALGORITHM_HPP
#ifndef GENETICALGORITHM_HPP

#include"IO.hpp"
#include<iostream>


class GeneticAlgorithm{
    private:
        double arr[20][20];
        double s[20];//an int array external to the funcition
        int city;
    public:
        geneticAlgorithm();
        void fileHandle();
        void swap(int &p, int &q);
        int factorial();
        void setCity(int city);
        int getCity();
        std::string printS();
        
        void s();
        //add print arr function
        std::string printS();
        void permute(int permsThisCall);
        double cost();//find cost of permutation/tour
};
#endif