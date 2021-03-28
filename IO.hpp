#ifndef IO_HPP
#define IO_HPP

class IO{//genetic algorithm
    private:
        int tours;
        int generations;
        int percent;
    public:
        void setTours(int tours);
        void setGenerations(int generations);
        void setPercent(double percent);
        int getTours();
        int getGenerations();
        double getPercent();
};
#endif