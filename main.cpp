#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void reset(double a, double b, double c){
    a=0;
    b=0;
    c=0;
}

int askStatus(int status){
	cout<<"keep running? [1/0]\n";
    cin>>status;
    return status;
}

int main(){
    double sideA = 0.0;
    double sideB = 0.0;
    double sideC = 0.0; 
    int status = 0;
    status = askStatus(status);
    while (status == 1){
        cout<<"enter side a (leave 0 if unknown)\n";
        cin>>sideA;
        cout<<"enter side b (leave 0 if unknown)\n";
        cin>>sideB;
        cout<<"enter side c (leave 0 if unknown)\n";
        cin>>sideC;
        if(sideC == 0){
            sideC = pow(pow(sideA,2.0)+pow(sideB,2.0),0.5);
            cout<<"result: "<<sideC<<'\n';
            reset(sideA, sideB, sideC);
	        status = askStatus(status);
        }
        else if(sideA == 0){
            sideA = pow(pow(sideC, 2)-pow(sideB, 2), 0.5);
            cout<<"result: "<<sideA<<'\n';
            reset(sideA, sideB, sideC);
		    status = askStatus(status); 
        }
        else if(sideB == 0){
            sideB = pow(pow(sideC, 2)-pow(sideA, 2), 0.5);
            cout<<"result: "<<sideB<<'\n';
            reset(sideA, sideB, sideC);
	        status = askStatus(status);
        }
	    else{
	    	if(pow(sideC,2.0)==pow(sideA,2.0)+pow(sideB,2.0) || (round(pow(sideC,2.0)*10.0))/10.0==(round(pow(sideA,2.0)*10.0))/10.0+(round(pow(sideB,2.0)*10.0))/10.0){
	    		cout<<"Result: Yes\n";
	    		status = askStatus(status);
	    	}
	    	else{
	    		cout<<"Result: No\n";
	    		status = askStatus(status);
	    	}
	    	reset(sideA, sideB, sideC);
	    }
    }
    return 0;
}