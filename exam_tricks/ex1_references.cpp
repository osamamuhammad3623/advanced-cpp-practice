#include<iostream>
using namespace std;

/* this function returns a reference to x */
int & fun(){
    static int x = 10;
    return x;
}

int main(){
    /*
    the following line is equivalent to: x=30
    because fun() returns a reference to x,
    so you can modify the value of x using a refernce to it.
    */
    fun() = 30;
    cout << fun();
    return 0;
}