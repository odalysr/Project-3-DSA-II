#ifndef BRUTEFORCE_HPP
#define BRUTEFORCE_HPP
#include "geneticAlgorithm.hpp"
#include <vector>
class BF{
    private:
        std::vector<int> pass;//
        int city;
    public:
        BF(int city);
        void run();
        void makeInit();
        void printMin(int m);

};
#endif