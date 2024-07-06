#include<iostream>
#include<ctime>
#include<random>

using namespace std;
int main()
{
    srand(time(0));

    int randNum = rand() %6 + 1;

    switch (randNum)
    {
    case 1:
        cout<<"Move one step ahead!!"<<endl;
        break;
    
    case 2:
        cout<<"Move two step ahead!!"<<endl;
        break;

    case 3:
        cout<<"Move three step ahead!!"<<endl;
        break;

    case 4:
        cout<<"Move four step ahead!!"<<endl;
        break;

    case 5:
        cout<<"Move five step ahead!!"<<endl;
        break;

    case 6:
        cout<<"Move six step ahead!! and Play again!!"<<endl;
        break;

    default:
        break;
    }

return 0;
}