
#define GENETICALGORITHM_HPP
#ifndef GENETICALGORITHM_HPP

#include"IO.hpp"
#include<iostream>


class GeneticAlgorithm{
    private:
        double arr[20][20];
    public:
        void loadData();
        void permute(int p);
        int factorial();
        double cost();
};
#endif