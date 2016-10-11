#include <iostream>
#include <math.h>

using namespace std;

int function(int mynumber, int somethingelse,int yetanother, int evenmore)
{
    return (mynumber * 100 + somethingelse / 200) *
    (yetanother + 400 / mynumber) / (mynumber + evenmore);
}

int function2(int mynumber2, int somethingelse2,int yetanother2, int evenmore2)
{
    double a = mynumber2 * 100 + somethingelse2 / 200;
    double b = yetanother2 + 400 / mynumber2;
    double c = mynumber2 + evenmore2;
    return a * b / c;
}

int function3(int integer1,int integer2,int integer3,int integer4,int integer5)
{
    return (integer1 * 5 * 5 + integer2) * (integer3 + 50 + 50 / integer4) +
    (integer1 + 500 + integer5 + 800) + (integer1 + 800 + integer1);
}
int function4(int integer1,int integer2,int integer3,int integer4,int integer5)
{
    int variableA = integer1 * 5 * 5 + integer2;
    int variableB = integer3 + 50 + 50 / integer4;
    int variableC = integer1 + 500 + integer5 + 800;
    int variableD = integer1 + 800 + integer1;
    return variableA * variableB + variableC + variableD;
}
int main()
{
    cout << function(1,1,1,1) << endl;
    cout << function2(1,1,1,1) << endl;
    cout << function3(5,25,100,600,900) << endl;
    cout << function4(5,25,100,600,900) << endl;
    double n = 10.0,e = 3.0;
    cout << pow(n,e) << endl;
    cout << pow(10.0,3.0) << endl;
    
}
