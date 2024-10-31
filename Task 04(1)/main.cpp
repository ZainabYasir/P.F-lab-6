#include<iostream>
using namespace std;
int main(){
    int week=3;
    int i,j;
    for(i=1;i<=week;i++){
        cout<<"Week "<<i<<":"<<endl;
        for(j=1;j<=7;j++){
          cout<<"Day "<<j<<endl;  
        }
        cout<<endl;
    }
    return 0;
}