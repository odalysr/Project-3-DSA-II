#ifndef IO_HPP
#define IO_HPP

class IO{//genetic algorithm
    private:
        int tours;
        int generations;
        int percent;
        int population;
    public:
        void setPop(int n);
        void setTours(int tours);
        void setGenerations(int generations);
        void setPercent(double percent);
        int getTours();
        int getGenerations();
        double getPercent();
        int getPop();
};
#endif