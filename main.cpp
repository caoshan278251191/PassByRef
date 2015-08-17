/* 
 * File:   main.cpp
 * Author: caoshan
 *
 * Created on August 17, 2015, 1:39 PM
 */

#include <cstdlib>
#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

/*
 * 35. There are twoint variables: a and b, don’t use “if”, “? :”, “switch”or other judgementstatements, find out the biggest one of the two numbers.
答案：( ( a + b ) + abs( a- b ) ) / 2
 */
int main(int argc, char** argv) {

    srand(time(NULL));
    int A=rand()%10;
    int B=rand()%10;
    cout<<"A is "<<A<<endl;
    cout<<"B is "<<B<<endl;
    int C=((A+B)+abs(A-B))/2;
    
    cout<<"Judgement Output is "<<C<<endl;
    
}

