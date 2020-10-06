#include <bits/stdc++.h> 
using namespace std; 

int main() { 
    string a;
    cin >> a;
  
    int x = a.length(); 
  
    char array[x + 1]; 
  
    strcpy(array, a.c_str());
    
    string b;
    cin >> b;
  
    int y = b.length(); 
  
    char arr[y + 1]; 
  
    strcpy(arr, b.c_str());
    
    int sum = 0;
    for(int i = 0; i < x && i < y; ++i){
        sum += abs(int(array[i]) - int(arr[i]));
    }
    cout << sum;
  
    return 0; 
}