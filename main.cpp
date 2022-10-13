#include <iostream>
#include <cmath>
#include <math.h>

void reset(double a, double b, double c){
    //resets variables
    a=0;
    b=0;
    c=0;
}

int askStatus(int status){
	std::cout<<"keep running? 1 for yes, 0 for no...\n";
    //ask for if the user wants to keep running the program or not
    std::cin>>status;
    return status;
}

<<<<<<< Updated upstream
=======
void printarea(double a, double b){
    double area = (a*b)/2;
    std::cout<<"area: "<<area<<'\n';
}

>>>>>>> Stashed changes
int main()
{
    double sideA = 0.0;
    double sideB = 0.0;
    double sideC = 0.0; 

    int status = 0;

    status = askStatus(status);

    while (status == 1)
    {
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
<<<<<<< Updated upstream
            cout<<"result: "<<sideC<<'\n';
=======
            std::cout<<"result: "<<sideC<<'\n';
            printarea(sideA, sideB);
>>>>>>> Stashed changes
            reset(sideA, sideB, sideC);
	        status = askStatus(status);
        }
        else if(sideA == 0)
        {
            sideA = pow(pow(sideC, 2)-pow(sideB, 2), 0.5);
<<<<<<< Updated upstream
            cout<<"result: "<<sideA<<'\n';
=======
            std::cout<<"result: "<<sideA<<'\n';
            printarea(sideA, sideB);
>>>>>>> Stashed changes
            reset(sideA, sideB, sideC);
		    status = askStatus(status); 
        }
        else if(sideB == 0)
        {
            sideB = pow(pow(sideC, 2)-pow(sideA, 2), 0.5);
<<<<<<< Updated upstream
            cout<<"result: "<<sideB<<'\n';
=======
            std::cout<<"result: "<<sideB<<'\n';
            printarea(sideA, sideB);
>>>>>>> Stashed changes
            reset(sideA, sideB, sideC);
	        status = askStatus(status);
        }
	    else
        {
	    	if(pow(sideC,2.0) == pow(sideA,2.0) + pow(sideB,2.0) || (round(pow(sideC,2.0)*10.0)) / 10.0 == (round(pow(sideA,2.0) * 10.0))/10.0 + (round(pow(sideB,2.0) * 10.0)) / 10.0)
            //TODO: make this more readable
                //i think i fixed it
            {
	    		std::cout<<"Result: Yes\n";
	    		status = askStatus(status);
	    	}
	    	else
            {
	    		std::cout<<"Result: No\n";
	    		status = askStatus(status);
	    	}
	    	reset(sideA, sideB, sideC);
	    }
    }
    return 0;
}