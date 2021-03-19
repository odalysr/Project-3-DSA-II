
#define GENETICALGORITHM_HPP
#ifndef GENETICALGORITHM_HPP

#include"IO.hpp"
#include<iostream>


class GeneticAlgorithm{
    private:
        double arr[20][20];
        double s[20];
        int city;
    public:
        void loadData();
        void setCity(int city);
        int getCity();
        void swap(int &p, int &q);
        std::string printS();
        void permute(int permsThisCall);
        
        //int factorial();
        //double cost();
};
#endif