#ifndef IO_HPP
#define IO_HPP

class IO{//genetic algorithm
    private:
        int tour;
        int generation;
        int percent;
    public:
        void setTour(int tour);
        void setGeneration(int generation);
        void setPercent(double percent);
        int getTour();
        int getGeneration();
        double getPercent();
};
#endif