#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        // spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        // numbers
        int num = i;
        for(int j = 1; j <= i; j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}
/*
Output -->
5
    1
   23
  345
 4567
56789
*/