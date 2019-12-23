#include<iostream>
using namespace std;
int main()
{
    int n = 1;
    int x = 1;
    int s = 0;

    while(n <= 10000)
    {
        while(x<=(n*2))
        {
            if(n % x == 0)
                s = s + x;
                x = x + 1;

        }
        if(n == s){
            cout<< n <<", Es perfecto" << endl;
        }

        n = n + 1;
	x = 1;
        s = 0;
    }
    cin.ignore(); return 0;
}
//UN NUMERO PERFECTO ES CUANDO TODOS SUS DIVISORES MENORES SUMADOS DAN EL MISMO NUMERO.

