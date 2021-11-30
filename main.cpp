/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julian Londono
 */


#include <iostream>

using namespace std;

int main()
{
    string operation;
    double num1, num2;

    cout<<"Enter the expression: ";
    cin >> operation>>num1>>num2;

    if(operation == "+") {
        cout<<"Addition of two nums"<<num1<<" and "<<num2<<" is "<<(num1+num2)<<endl;
    }


    else if(operation == "-") {
        cout<<"Minus of two nums"<<num1<<" and "<<num2<<" is "<<(num1-num2)<<endl;
    }

    else if(operation == "*") {
        cout<<"Multiplication of two nums"<<num1<<" and "<<num2<<" is "<<(num1*num2)<<endl;
    }

    else if(operation == "/") {
        cout<<"Divition of two nums"<<num1<<" and "<<num2<<" is "<<(num1/num2)<<endl;
    }

    return 0;
}