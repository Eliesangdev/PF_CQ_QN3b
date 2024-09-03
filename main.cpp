#include <iostream>

using namespace std;

int gcd(int a, int b) {//this is my function"gcd"
    if (b == 0)//first condition
        return a;
    else
        return gcd(b, a % b);
}

int reduce(int num, int denom) {//declaration of my variables
    int com_divisor = gcd(num, denom);//declare my com_div
    return num / com_divisor;
}

int main()//main code
{
    int num;
    int denom;
    std::cout<<"Enter the numerator: ";
    std::cin>>num;
    std::cout<<"Enter the denominator: ";
    std::cin>>denom;

if(num%denom==0){ std::cout<<1;}
else if(num||denom<=0 && num%denom!=0){
        std::cout<<0;
}
}
