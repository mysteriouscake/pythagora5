#include <iostream>
#include <cmath>

void reset(double a, double b, double c){
    //resets variables
    a=0;
    b=0;
    c=0;
}

void printarea(double a, double b){
    double area = (a*b)/2;
    std::cout<<"Area: "<<area<<'\n';
}

int main()
{
    double sideA = 0.0;
    double sideB = 0.0;
    double sideC = 0.0; 

        //ask side a
        std::cout<<"enter side a (leave 0 if unknown)\n";
        std::cin>>sideA;
        //ask side b
        std::cout<<"enter side b (leave 0 if unknown)\n";
        std::cin>>sideB;
        //ask side c
        std::cout<<"enter side c (leave 0 if unknown)\n";
        std::cin>>sideC;

        if(sideC == 0)
        {
            sideC = pow(pow(sideA,2.0)+pow(sideB,2.0),0.5);
            std::cout<<"Result: "<<sideC<<'\n';
            printarea(sideA, sideB);
            reset(sideA, sideB, sideC);
        }
        else if(sideA == 0)
        {
            sideA = pow(pow(sideC, 2)-pow(sideB, 2), 0.5);
            std::cout<<"Result: "<<sideA<<'\n';
            printarea(sideA, sideB);
            reset(sideA, sideB, sideC);
        }
        else if(sideB == 0)
        {
            sideB = pow(pow(sideC, 2)-pow(sideA, 2), 0.5);
            std::cout<<"Result: "<<sideB<<'\n';
            printarea(sideA, sideB);
            reset(sideA, sideB, sideC);
        }
	    else
        {
	    	if(pow(sideC,2.0) == pow(sideA,2.0) + pow(sideB,2.0) /*|| (round(pow(sideC,2.0)*10.0)) / 10.0 == (round(pow(sideA,2.0) * 10.0)) / 10.0 + (round(pow(sideB,2.0) * 10.0)) / 10.0*/)
            {
	    		std::cout<<"Result: Yes\n";
	    	}
	    	else
            {
	    		std::cout<<"Result: No\n";
	    	}
	    	reset(sideA, sideB, sideC);
	    }
    return 0;
}