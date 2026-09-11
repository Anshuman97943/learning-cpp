#include <iostream>

int main() {
    int num;
    std::cout<<"\n enter the number ";
    std::cin>>num;

    if( num < 0){
        std::cout<<" this number is negative ";
        std::cin>>num;
    
    }

    else if ( num > 0){
        std::cout<<" this number is positive ";
        std::cin>>num;
    }

    else {
        std::cout<<" this numers is zero";

    }
return 0 ;


    
}