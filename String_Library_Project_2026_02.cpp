
#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{

    clsString String1("chaymae El Omari");

    cout << String1.CountVowels();
    cout << clsString::CountVowels("Mohammed DAHOU");
    

    system("pause>0");

    return 0;
}

