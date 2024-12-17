#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int N = 0;
    float sum = 0,sum2 = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += stof(textline);
        sum2 += pow(stof(textline),2);
        N ++;
    }
cout << "Number of data = " << N << endl;
cout << setprecision(3);
cout << "Mean = " << sum/N << endl;
cout << "Standard deviation = " << sqrt((sum2/N)-pow(sum/N,2));
    
}