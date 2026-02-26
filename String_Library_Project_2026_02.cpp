
#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    clsString String1("Mohammed DAHOU");

    cout << String1.CountVowels();
    cout << clsString::CountVowels("Mohammed DAHOU");
    

    system("pause>0");

    return 0;
}

