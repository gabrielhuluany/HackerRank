#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a, b, sum;
    cin >> a >> b;
    sum = add(a, b);
    cout << sum;
    return 0;
}
