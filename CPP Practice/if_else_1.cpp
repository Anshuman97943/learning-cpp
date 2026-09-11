#include <iostream>

int main() {
    // code for grading according to your marks 
    
    int grades;
    std::cout<<"\nenter your markes ";
    std::cin>>grades;

    if(grades==100){
        std::cout<<"A++";
    }

    else if(grades>=90){
        std::cout<<"A";
    }

    else if (grades>=75){
        std::cout<<"B";

    }

    else if (grades>=60){
        std::cout<<"C";
    }

    else if (grades>=40){
        std::cout<<"D";
    }

    else {
        std::cout<<"F";

    }

    return 0;






}

