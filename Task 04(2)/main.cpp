#include<iostream>
using namespace std;
int main(){
    int week=3;
    int i;
    while(i<=week){
        cout<<"Week "<<i<<":"<<endl;
        int j=1;
        while(j<=7){
          cout<<"Day "<<j<<endl;
          j++;  
        }
        cout<<endl;
        i++;
    }
    return 0;
}