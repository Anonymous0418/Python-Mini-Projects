#include<iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int numb = rand()%501;
    char run_again;

    cout<<numb<<endl;

    return 0;
}