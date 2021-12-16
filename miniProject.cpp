#include <bits/stdc++.h>
#include <windows.h>
#define loop(i,j) for(int i = 0; i<j; ++i)
using namespace std;

void printSpaces(int n){
      loop(i,n)
        cout << " ";
}

void printInBox(int n){
    int cnt = floor(log10(n)+1);

}

void printBorder(vector<int> v,int index,string box){
    loop(i,v.size()){
        if(i == index){
            cout << box << endl;
            break;
        }
        printSpaces(floor(log10(v[i])+1)+3);
    }
}

void printArray(vector<int> v, int index){
    string box = "+";
    int cntdigits = floor(log10(v[index])+1);
    loop(i,cntdigits+2){
        box += "-";
    }
    box+="+";
    printBorder(v,index,box);
    loop(i,v.size()){
        if(i == index){
            
            cout << "| " << v[i] << " |";
        }
        else{
            cout << v[i];
        }
        printSpaces(3);
    }
    cout << endl;
    printBorder(v,index,box);
}


int main(){
  vector<int> v;
  
  return 0;
}
