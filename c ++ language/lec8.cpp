# include<iostream>

int main() {

    //when you give the second value to same data type and veriable you have to use data type only one //

   /* int a = 15;
    std::cout<<"the value of a was : "<<a<< std::endl;

     a = 14;
    std::cout<<"the value of a is : "<<a<< std::endl;*/


    //<<<-------------- Constant in c++  --------------->>>/// --  in you can not give new value to same variable ;


   /*{const int} a  = 15 ;
    
    std::cout<<" the value of a is : "<<a<< std::endl;*/

    //<<------------ Manipulaters in c++ ------------->>//-- it use to defind the field width it means how much space you give to input and outpur operators--;


   /* #include<iomanip>

    int main() {

        int a=3, b=5, c=5656;
        std::cout<<" the value of a is: "<< std::setw(4)<<a<< std::endl;
        std::cout<<" the value of b is: "<< std::setw(4)<<b<< std::endl;
        std::cout<<" the value of c is: "<< std::setw(4)<<c<< std::endl;
        */

    //<<--------------  Operator Precedence  ---------->>//-- it defind what happend in eqution -- Precedence and associativity ;
    
   int a = 45, b= 56 ;
   int c = (((a*5)+b)-45)+85;
   std::cout<<c;  
    

    return 0;
    }