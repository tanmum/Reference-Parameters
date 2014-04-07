//
//  main.cpp
//  RefPa
//
//  Created by Tan Bui on 4/7/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int&a, int&b)
{
    int c = a;
    a = b;
    b = c;
}
void swap(int*a, int*b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main(int argc, const char * argv[])
{
    int a = 89, b = 75;
    int c = 31, d = 44;
    
    cout << "Before\n";
    std::cout << "a = " << a << "; b = " << b << endl;
    std::cout << "c = " << c << "; b = " << d << endl;
    
    swap(a, b);
    swap(&c, &d);
    
    cout << "After\n";
    std::cout << "a = " << a << "; b = " << b << endl;
    std::cout << "c = " << c << "; b = " << d << endl;
    return 0;
}

