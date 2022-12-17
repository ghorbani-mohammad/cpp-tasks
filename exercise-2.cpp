#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int f = 0, g = 1;

    while(f <= N){
        if (f<=N){
            printf("%d\n",f);
        }
        f = f + g;
        g = f - g;
    }

    return 0;
}
