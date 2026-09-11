#include <iostream>
//finding largest 
int main(){
    int a,b,c;
    std::cout<<" Enter three number";
    std::cin>>a>>b>>c;

    if(a>=b&&a>=c){
        std::cout<<a<<" is the largest.";
    }

    else if(b>=a&&b>=c){
        std::cout<<b<<" is the largest.";
    }

    else{
        std::cout<<c<<" is the largest.";
    }

    return 0;


}
    
