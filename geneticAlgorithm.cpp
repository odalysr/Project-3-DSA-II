#include"geneticAlgorithm.hpp"
using namespace std;

void geneticAlgorithm::loadData(){
    ifstream inFile;
    inFile.open("distances.txt");

    if(!inFile.is_open()){
        cout << "Error opening distances.txt" << endl;
        return;
    }
    for(int i = 0; i < 20; ++i){//row
        for(int j = 0; j < 20; ++j){//column
            if(i == j)
                this->array[i][j] = 0;
            else
                inFile >> this->array[i][j];
        }
    }
}
void geneticAlgorithm::swap(int &p, int &q){
    int temp;
    temp = p;
    p = q; 
    q = temp;
}
void geneticAlgorithm::permute(int permsThisCall){
    int m, k, p, q, i;
    //print function
    NUMELEMNTS = this->city;
    for(int i = 1; i < permsThisCall; i++){
        m = NUMELEMNTS - 2;
        while(s[m]>s[m+1]){
            k = k - 1;
        }
        k = NUMELEMNTS -1;
        while(s[m]>[s[k]]){
            k = k - 1;
        }
        swap(m,k);
    }
}
int geneticAlgorithm::factorial(){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
double geneticAlgorithm::cost(){

}