# include<iostream>

int main() {

    //Selection control structure :(If) (else-if) (else) ladder: 
    // In this you can use if else statment multiple times 

    int age;
    std::cout<<"\n Tell me your age ";
    std::cin>>age;

   /* if(age<18){
       std::cout<<"\n You can not come to my party";
    }

    else if(age==18){
        std::cout<<"\n You are kid you need kid pass";
    }

    else{
        std::cout<<"\n You can come to party";
    }*/
    //Selection control structure : Switch case statements:
    switch (age)
    {
    case 18:
    std::cout<<"\n you are 18";
    break;

    case 22:
    std::cout<<"\n you are 22";
    break;

    case 2:
    std::cout<<"\n you are 2";
    break;

    default:
    std::cout<<"\n No defalt case";
        break;
    }


    return 0;

    
}