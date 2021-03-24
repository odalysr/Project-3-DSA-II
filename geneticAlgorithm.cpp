#include"geneticAlgorithm.hpp"
using namespace std;

void geneticAlgorithm::loadData(){//fileHandling stuff
    ifstream inFile;
    inFile.open("distances.txt");

    if(!inFile.is_open()){
        cout << "Error opening distances.txt" << endl;
        return;
    }
    //adjacency matrix
    for(int i = 0; i < 20; ++i){//row
        for(int j = 0; j < 20; ++j){//column
            if(i == j)
                this->arr[i][j] = 0;
            else
                inFile >> this->arr[i][j];
        }
    }
}
void geneticAlgorithm::swap(int &p, int &q){//swap function
    int temp;
    temp = p;
    p = q; 
    q = temp;
}
string geneticAlgorithm::printS(){//print the s array, thereby displaying the next permutation

    s[0] = 0;
    s[city + 1] = 0;

    string str;

    for(int i = 0; i < city+1; i++){
        str.push_back(s[i]) << endl;
    }
    return str;//print str
}
void geneticAlgorithm::permute(int permsThisCall){
    int m, k, p, q, i;
    //print function
    printS();
    NUMELEMNTS = this->city; //NUMELEMNTS is the number of ints in the s array that you're permutating

    for(int i = 1; i < permsThisCall; i++){
        m = NUMELEMNTS - 2;
        while(s[m]>s[m+1]){
            m = m - 1;
        }
        k = NUMELEMNTS -1;
        while(s[m] > s[k]){
            k = k - 1;
        }
        swap(m,k);
        p = m + 1;
        q = NUMLEMNTS - 1;
        while(p < q){
            swap(p,q);
            p++;
            q--;
        }
        printS();
    }
}
int geneticAlgorithm::factorial(){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
/*
double geneticAlgorithm::cost(){

}
*/