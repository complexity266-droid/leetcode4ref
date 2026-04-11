#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    int turn = 0; // 0 -> Sereja, 1 -> Dima

    while(l <= r){
        int pick;
        if(arr[l] > arr[r]){
            pick = arr[l];
            l++;
        } else {
            pick = arr[r];
            r--;
        }

        if(turn == 0){
            sereja += pick;
        } else {
            dima += pick;
        }

        turn ^= 1; // switch turn
    }

    cout << sereja << " " << dima;
}
