/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jaime
 *
 * Created on 20 de septiembre de 2018, 15:48
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void Fiboushint(){
    unsigned short int n=0;
    unsigned short int n1=0;
    unsigned short int n2=1;
    unsigned short int nesimo=0;
    while (nesimo >= 0){
        nesimo=n1+n2;
        n1=n2;
        n2=nesimo;
        n=n+1;
        if(nesimo == 0 || n1>n2){
            break;
        }
    }
    cout << "Se produce Overflow en el tipo de variable unsigned short int:" << n << endl;
}

void Fiboshint(){
    short int n=0;
    short int n1=0;
    short int n2=1;
    short int nesimo=0;
    while (nesimo >= 0){
        nesimo=n1+n2;
        n1=n2;
        n2=nesimo;
        n=n+1;
        if(nesimo == 0 || n1>n2){
            break;
        }
    }
    cout << "Se produce Overflow en el tipo de variable short int:" << n << endl;
}

void Fibouint(){
    unsigned int n=0;
    unsigned int n1=0;
    unsigned int n2=1;
    unsigned int nesimo=0;
    while (nesimo >= 0){
        nesimo=n1+n2;
        n1=n2;
        n2=nesimo;
        n=n+1;
        if(nesimo == 0 || n1>n2){
            break;
        }
    }
    cout << "Se produce Overflow en el tipo de variable unsigned  int:" << n << endl;
}

void Fiboint(){
    int n=0;
    int n1=0;
    int n2=1;
    int nesimo=0;
    while (nesimo >= 0){
        nesimo=n1+n2;
        n1=n2;
        n2=nesimo;
        n=n+1;
        if(nesimo == 0 || n1>n2){
            break;
        }
    }
    cout << "Se produce Overflow en el tipo de variable int:" << n << endl;
}

void Fibouloint(){
    unsigned long int n=0;
    unsigned long int n1=0;
    unsigned long int n2=1;
    unsigned long int nesimo=0;
    while (nesimo >= 0){
        nesimo=n1+n2;
        n1=n2;
        n2=nesimo;
        n=n+1;
        if(nesimo == 0 || n1>n2){
            break;
        }
    }
    cout << "Se produce Overflow en el tipo de variable unsigned long int:" << n << endl;
}

void Fiboloint(){
    long int n=0;
    long int n1=0;
    long int n2=1;
    long int nesimo=0;
    while (nesimo >= 0){
        nesimo=n1+n2;
        n1=n2;
        n2=nesimo;
        n=n+1;
        if(nesimo == 0 || n1>n2){
            break;
        }
    }
    cout << "Se produce Overflow en el tipo de variable long int:" << n << endl;
}

int main(int argc, char** argv) {
    Fiboshint();
    Fiboushint();
    Fiboint();
    Fibouint();
    Fiboloint();
    Fibouloint();
    return 0;
}

