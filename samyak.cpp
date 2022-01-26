// CPP program to find winner of
// the game of N stones
#include <bits/stdc++.h>
using namespace std;

const int MAX = 200;

// finds the winning and losing
// states for the 200 stones.
void findStates(int position[])
{
    // 0 means losing state
    // 1 means winning state
    position[0] = 0;
    position[1] = 0;
    position[2] = 1;
    position[3] = 1;
    position[4] = 1;
    position[5] = 1;
    position[6] = 1;
    position[7] = 1;

    // find states for other positions
    for (int i = 8; i <= MAX; i++) {
        if (!position[i - 1] || !position[i - 3]
            || !position[i - 4])
            position[i] = 1;
        else
            position[i] = 0;
    }
}

// driver function
int main()
{
    int t;
    cin>>t;
    while (t--){
    int N;
    cin>>N;
    int position[MAX] = { 0 };

    findStates(position);

    if (position[N] == 1)
        cout << "SUSHANT";
    else
        cout << "RIYA";

    return 0;
}
}