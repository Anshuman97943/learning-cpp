# include<iostream>

int c = 33;

int main() {

    //--************Build in Data Types************--//

   /* int  a, b, c;
    std::cout<<"\n the value of a ";
    std::cin>>a;

    std::cout<<"\n the value of b ";
    std::cin>>b;
    
    c = a+b;
    
    std::cout<<"\n the sum is "<<c;
    std::cout<<"\n the global c is = "<<::c;*/

//------************* 
    //----- we use (f) and (l) in variable to defind the type of data tupe that variable is -----//



//--************ float , double and long double Literals************--//

   /* float d = 45.7f;
    long double e = 45.7l;

    
    std::cout<<"\n The size of 45.7 is "<<sizeof(45.7);
    std::cout<<"\n The size of 45.7f is "<<sizeof(45.7f);
    std::cout<<"\n The size of 45.7F is "<<sizeof(45.7F);
    std::cout<<"\n The size of 45.7l is "<<sizeof(45.7l);
    std::cout<<"\n The size of 45.7L is "<<sizeof(45.7L);


    std::cout<<"\n the value of d is "<<d<<"\n the value of e is "<<e;*/
 
   //--************  Reference Veriables ************--//

  // float x = 455;
   //float & y = x;
   //std::cout<<x<< std::endl;
   //std::cout<<y<< std::endl;


   //--************ Typecasting ************--//

   int a = 45;
   float b = 45.6;
    std::cout<<"The value of a is "<<int(a)<< std::endl;
    std::cout<<"the value of a is "<<(float)a<< std::endl;

    std::cout<<"the value of a is "<<(float)b<< std::endl;
    std::cout<<"the value of a is "<<(int)b<< std::endl;
    int c = int(b);

    std::cout<<" the expression is "<<a + b<< std::endl;
    std::cout<<" the expression is "<<a + int(b)<< std::endl;
    std::cout<<" the expression is "<<a + (int)b<< std::endl;

   


   return 0;
 

}


   