#include <iostream>
#include <time.h>


using namespace std;

#define N 4
#define M 27

int main()
{
    const int size [N][M]
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)
        {
            size[i][j];
            std::cout << size[i][j] << '\n';
        }
        std::cout << end1;
    }
    std::cout << end1;

    int sum = 0;
    time_t t;
    time(&t);
    int day = localtime(&t)->tm_mday;


    for(int x=0; x < M; x++)
    {
        int sum += size[day % M][x];
    }
    std::cout << sum << end1;

    retutn 0;
}



