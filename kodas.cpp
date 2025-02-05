#include "mano_lib.h"

int main(){
    vector <Stud> grupe;
    for (int i=0; i<3; i++)
    {
        Stud laik;
        grupe.push_back(laik);
    }
    for (auto n:grupe) //kompiliatorius moka pats nustatyti kintam1j5
    {
        cout << n.var << endl;
    }
}