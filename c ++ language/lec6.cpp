
// There are two types of header files :
// 1. System heder files: It comes with the compiler
# include<iostream>

//2. User defined header files: Itnis written by the programmer
#include "this.h"// this heder file is written by me 

//#include "this.h"<<-- This file is need to be in your directory if not this will give you a error.

int main () {

    int a =4, b=5;
    std ::cout<<"Types of operaters in c++"; 

    //Arithmetic Operaters
     std::cout<<"\nThe value of a + b is "<<a+b;
     std::cout<<"\nThe value of a - b is "<<a-b;
     std::cout<<"\nThe value of a * b is "<<a*b;
     std::cout<<"\nThe value of a / b is "<<a/b;
     std::cout<<"\nThe value of a % b is "<<a%b;

     // a++ , a-- means first print original value then. apply operators in next line or code 
     std::cout<<"\nThe value of a ++  is "<<a++;
     std::cout<<"\nThe value of a --  is "<<a--;
  
     // ++a, --a means first apply operators. then print in same line or code 
     std::cout<<"\nThe value of ++ a  is "<<++a;
     std::cout<<"\nThe value of -- a  is "<<--a;


     //Assignment Operaters --> used to assign values to variables
     //int a =3, b=9;
     // char d='d';



    // Comparison Operators
    std::cout<<"\nFollowing are the comparison operatorin c++";
    
    std::cout<<"\nThe value of a == b "<<(a==b);
    std::cout<<"\nThe value of a != b "<<(a!=b);
    std::cout<<"\nThe value of a >= b "<<(a>=b);
    std::cout<<"\nThe value of a <= b "<<(a<=b);
    std::cout<<"\nThe value of a > b "<<(a>b);
    std::cout<<"\nThe value of a < b "<<(a<b);



    // Logical Operators 
    std::cout<<"\nFollowing are the logical operators in c++";

    // when both are true
    std::cout<<"\n The value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b));

    // when only one is true
    std::cout<<"\n The value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b));

    //when true become false ... false become true
    std::cout<<"\n The value of this logical not operator (!(a==b)) is "<<(!(a==b));
    

      //yaaaaaaaaaaaaaaaaaaaaaaaaaaa


    return 0;

}