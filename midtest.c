#include <stdio.h>
float distance=0.0;                 //Declaring the distance of each customer's home, here the initial value is 0

void gasoline(){                    //The function will be called gasoline
    float liter;                    //This variable will be used to count the gasoline required by the driver
    for(int i=1;i<=4;i++){          //Since there are four destination hence this loop will be used to count each destination's distance
        switch(i){                  //Switch case will be used in order to track the driver's current location
            case 1:                 //Each case represents the customer's home, here the customer's number is represented by i
            distance+=2.0;
            break;

            case 2:
            distance+=0.9;
            break;

            case 3:
            distance+=1.7;
            break;

            case 4:
            distance+=2.7;
            break;

        }
    }
distance*=2.0;                      //The driver will be going to all customers then going back to the restaurant
                                    //assuming the path does not change hence the total distance will be counted twice

liter=distance/2.4;                 //1 liter is required for 2.4km, thus the formula becomes distance/2.4

printf("Total gasoline required is %.2f liters", liter);
}

int main(){

    gasoline();
    return 0;
}
