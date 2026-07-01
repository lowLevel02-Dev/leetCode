#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> fruits;
    fruits["apple"] = 10;
    fruits["banana"] = 20;
    cout<<"Apple"<<fruits["apple"];
    return 0;
}