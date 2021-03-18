#include"geneticAlgorithm.hpp"
using namespace std;

void geneticAlgorithm::loadData(){
    ifstream inFile;
    inFile.open("distances.txt");

    if(!inFile.is_open()){
        cout << "Error opening distances.txt" << endl;
        return;
    }
    for(int i = 0; i < 20; ++i){
        for(int j = 0; j < 20; ++j){
            if(i == j)
                this->array[i][j] = 0;
            else
                inFile >> this->array[i][j];
        }
    }
}
void geneticAlgorithm::permute(int p){

}
int geneticAlgorithm::factorial(){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
double geneticAlgorithm::cost(){

}