#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void reset(double a, double b, double c){
    //resets variables
    a=0;
    b=0;
    c=0;
}

int askStatus(int status){
	cout<<"keep running? 1 for yes, 0 for no...\n";
    //ask for if the user wants to keep running the program or not
    cin>>status;
    return status;
}

int main()
{
    double sideA = 0.0;
    double sideB = 0.0;
    double sideC = 0.0; 
    double area = 0.0;

    int status = 0;

    status = askStatus(status);

    while (status == 1)
    {
        //ask side a
        cout<<"enter side a (leave 0 if unknown)\n";
        cin>>sideA;
        //ask side b
        cout<<"enter side b (leave 0 if unknown)\n";
        cin>>sideB;
        //ask side c
        cout<<"enter side c (leave 0 if unknown)\n";
        cin>>sideC;

        if(sideC == 0)
        {
            sideC = pow(pow(sideA,2.0)+pow(sideB,2.0),0.5);
            cout<<"result: "<<sideC<<'\n';
            reset(sideA, sideB, sideC);
	        status = askStatus(status);
        }
        else if(sideA == 0)
        {
            sideA = pow(pow(sideC, 2)-pow(sideB, 2), 0.5);
            cout<<"result: "<<sideA<<'\n';
            reset(sideA, sideB, sideC);
		    status = askStatus(status); 
        }
        else if(sideB == 0)
        {
            sideB = pow(pow(sideC, 2)-pow(sideA, 2), 0.5);
            cout<<"result: "<<sideB<<'\n';
            reset(sideA, sideB, sideC);
	        status = askStatus(status);
        }
	    else
        {
	    	if(pow(sideC,2.0) == pow(sideA,2.0) + pow(sideB,2.0) || (round(pow(sideC,2.0)*10.0)) / 10.0 == (round(pow(sideA,2.0) * 10.0))/10.0 + (round(pow(sideB,2.0) * 10.0)) / 10.0)
            //TODO: make this more readable
                //i think i fixed it
            {
	    		cout<<"Result: Yes\n";
	    		status = askStatus(status);
	    	}
	    	else
            {
	    		cout<<"Result: No\n";
	    		status = askStatus(status);
	    	}
	    	reset(sideA, sideB, sideC);
	    }
        area = (sideA*sideB)/2
        cout<<"area: "<<area<<'\n';
    }
    return 0;
}