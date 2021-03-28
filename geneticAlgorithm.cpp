#include"geneticAlgorithm.hpp"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void GA::GA(){
    for(int i = i; i < this->cities; i++){
        s[i] = i;
    }
}
void GA::FileHandle(){//fileHandling stuff
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

void GA::swap(int &p, int &q){//swap function
    int temp;
    temp = p;
    p = q; 
    q = temp;
}
int GA::factorial(){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
void GA::setcities(int cities){
    this->cities = cities;
}
int GA::getCities(){
    return this->cities;
}

string GA::printS(){//print the s array, thereby displaying the next permutation
    //permutations start and end with 0
    s[0] = 0;
    s[cities + 1] = 0;

    string str;

    for(int i = 0; i < cities+1; i++){
        str.push_back(s[i]);
    }
    return str;//print str
}
//printArr function
void GA::permute(int permsThisCall){
    int m, k, p, q, i;
    //print function
    printS();
    NUMELEMNTS = this->cities; //NUMELEMNTS is the number of ints in the s array that you're permutating

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
//get cost of specific tour
double GA::getCost(string array){
    //find cost

    double cost;
    int tempArr[cities];//create a temp array

    for(int i =0; i < array.length(); i++){
        tempArr[i] = array[i]; //initialize temp array to parameter array
    }
    for(int j = 0; j < cities; j++){
        cost = arr[tempArr[j]][tempArr[j+1]] + cost;//iterate over arr and add cost of each element to cost variable
    }
    return cost;//return 
}
