#include<iostream>
using namespace std;
int main(){
int i=1;
int row=5;
while(i<=row){
    cout<<"Row "<<i<<endl;
    int j=1;
    int seat=10;
    while(j<=seat){
    cout<<"Seat "<<j<<endl;
    j++;    
    } 
    cout<<endl;
    i++;
}
return 0;
}
