#include <iostream>

using namespace std;

int year_to_century(int year){
    int y;
    if((year%10)==0)
        return year/100;
    else{
        y=year/100;
        return y+1;}

}

int main()
{
    int x;
    cin>>x;
    cout<<year_to_century(x);
    return 0;
}
