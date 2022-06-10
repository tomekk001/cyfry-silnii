#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int x,s;
    cout << "Ile chcesz przekazac liczb: " << endl;
    cin >> x;

    for(int i=0; i<x; i++)
    {
        int silnia = 1;
        if(i==0)
        {
                cout << "Podaj liczbe do silnii \n";
        }
        cin >> s;
        if(s==0)
        {
            silnia = 1;
        }
        else
        {
            for(int j=s; j>0; j--)
            {
                silnia *= j;
            }
        }
        int dlugosc = silnia;
        int ile_cyfr = 0;
        while(dlugosc > 0 )
        {
            dlugosc /= 10;
            ile_cyfr++;
        }
        cout << endl << silnia << "\t" << endl;
        string cyfra = to_string(silnia);

        for(int i=0; i<ile_cyfr; i++)
        {
            if(ile_cyfr == 1)
            {
                cout << 0 << "\t" << cyfra[i];
                continue;
            }
            cout << cyfra[i] << "\t";
        }
    }
    return 0;
}
