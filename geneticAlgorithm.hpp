
#ifndef GENETICALGORITHM_HPP
#define GENETICALGORITHM_HPP

#include"IO.hpp"
#include<iostream>
#include<string>

class GA{
    private:
        double arr[20][20];
        double s[20];//an int array external to the funcition
        int cities;
    public:
        GA();
        void fileHandle();
        void swap(int &p, int &q);
        int factorial();
        void setCities(int cities);
        int getCities();
        std::string printS();
        void permute(int permsThisCall);

        double getCost(std::string array);//find cost of permutation/tour
        //void printArray();
};
#endif