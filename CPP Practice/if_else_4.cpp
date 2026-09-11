# include <iostream>
// how to find leap year 

int main(){
    int year ;
    std::cout<<" Enter a year:";
    std::cin>>year;

    if ( year % 4 == 0 && year % 100 != 0){
        std::cout<< year <<" is a leap year.";
    }

    else if ( year % 400 == 0){
        std::cout << year <<"nis a leap year.";
    }

    else {
        std::cout<< year <<" is not a leap year.";
    }

    return 0;

    
} 

