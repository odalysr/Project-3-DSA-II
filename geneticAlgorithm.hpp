
#ifndef GENETICALGORITHM_HPP
#define GENETICALGORITHM_HPP

#include"IO.hpp"
#include<iostream>
#include<string>

class GA{
    private:
        double arr[20][20];
        double s[20];//an int array external to the funcition
        std::vector<int> initialTour;
        std::vector<vector<int>> perms;//populations
        int n; //population size
        int numGens;
        int cities;
        std::vector<int> elite1;
        std::vector<int> elite2;
        double prob;
    public:
        GA();
        void fileHandle();
        void swap(int &p, int &q);
        int factorial();
        void setCities(int cities);
        void setPop(int n);
        int getCities();
        std::string printS();
        void permute(int permsThisCall);
        void getNumGens(int numGens);
        double getCost(std::string array);//find cost of permutation/tour
        void printArr();
        void mutate(vector<int> array);
        void elite();
        void compute();
        void poor();
};
#endif