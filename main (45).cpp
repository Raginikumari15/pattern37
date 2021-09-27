#include<iostream>
using namespace std;
int main(){
    int i =1;
    int j =0;
    int n ;
    cin>> n;
    while(i<= n){
        j = 1;
        while(j<= n-i){
          cout<<" ";
          j++;
        }
        int k = i;
        j=1;
        while(j<=i){
            cout<<k;
            k--;
            j++;
        }
        int h = 2;
        j = 1;
        while(j<=i-1){
            cout<<h;
            h++;
            j++;
        }
        cout<< endl;
        i++;
    }
}
    
    