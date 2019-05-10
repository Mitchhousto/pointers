#include <stdio.h>
float dAvg(float myArray[], size_t length){
    size_t c;
    float sum = 0;

    // Calculate sum first
    for (c = 0; c < length; c++){
        sum += myArray[c];
    }

    // Find average by dividing the sum by the number of numbers in a row
    return sum / (int) length;
} 

int main(void){
    int i;
    //Initiallize array
    float myArray[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1,2.2, 2.3 } };

    //Computes the average value per row of array
    for(i = 0; i < 3; i++){
        printf("The average of row %d is %f\n", i, dAvg(myArray[i], 3));
    }

    return 0;
}




/*#include <stdio.h>



main() {


float myArray[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1,2.2, 2.3 } };

int xnum = 0, ynum = 0;
        
        for(y = 0; y< yres; y++)
        {
            for(x = 0; x < xres; x++)
            {
                yArray[3][3];
                yArray[3][3];
                yArray[3][3]*/