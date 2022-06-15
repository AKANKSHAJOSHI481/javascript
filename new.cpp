
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char* array = new char[n];
    for(int i = 0; i < n;i++){
        cin >> array[i];
    }
    int count = 0;
    for(int j= 0; j < n;j++){
        if(((array[j] == 'U')&&(array[j+1] == 'R'))||((array[j]=='R')&&(array[j+1] == 'U'))){ 
           array[j] = 'D';
           array[j+1] = array[j+2];
           count++;
        }
    }
    cout << n-count << endl;

    return 0;
}