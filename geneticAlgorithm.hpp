
#define GENETICALGORITHM_HPP
#ifndef GENETICALGORITHM_HPP

#include"IO.hpp"
#include<iostream>


class GA{
    private:
        double arr[20][20];
        double s[20];//an int array external to the funcition
        int city;
    public:
        GA();
        void fileHandle();
        void swap(int &p, int &q);
        int factorial();
        void setCity(int city);
        int getCity();
        std::string printS();
        void permute(int permsThisCall);

        double getCost(string array);//find cost of permutation/tour
        //void printArray();
};
#endif