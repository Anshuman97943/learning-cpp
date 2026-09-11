# include <iostream>
int main(){

    float a, b, c;
    std::cout<<"/n Enter three sides of the triangle:";
    std::cin>>a>>b>>c;

    if (a+b <= c || a+b <= b || b+c <= a){
        std::cout<<" Not a valid triangle.";
    }

    else if (a == b && b==c){
        std::cout<<"Equilateral triangle.";
    }

    else if (a == b || b == c || a == c){
        std::cout<<"Isosceles triangle.";
    }

    else {
        std::cout<<" Scalenr Tringle.";
    }

    return 0;

    
}