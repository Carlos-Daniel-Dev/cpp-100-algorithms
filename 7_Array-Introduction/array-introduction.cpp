#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int inicio = 0;
    int fim = n - 1;
    while (inicio < fim) {
        int temp = arr[inicio];
        arr[inicio] = arr[fim]; // inicio = fim
        arr[fim] = temp; // fim = inicio
        
        inicio++;
        fim --;
        
    }
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

