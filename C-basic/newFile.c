//
// Created by Jasper Oh on 2023-07-18.
//
#include <stdio.h>

int bigNum(int num1 , int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

//const char* printNewString(){
//    return "Hello World";
//}

char* printNewString1(){
    static char str[50] = "HelloWorld";
    return str;
}

int volumeOfSphere(float r){
    double volume = (4 / 3) * 3.14 * r * r * r;

    printf("The volume : %f\n", volume);

   return 0;
}

int enhancedVolumeOfSphere(float r){
    double volume = (4.0f / 3.0f) * 3.14 * r * r * r;

    printf("The volume : %f\n", volume);

    return 0;
}

double calculatedTaxAdded(float amount){
//    printf("Enter an amount : ");
//    scanf("")
    return amount + (amount * 0.05f);
}

int main(void){

    /*
     * Showing the volume of sphere
     */
    volumeOfSphere(2);

    /*
     * After get prompt from user and showing the volume of sphere
     */
    int radius;
    scanf("%d" , &radius);
    enhancedVolumeOfSphere(radius);

    /*
     * Calculate the (5%)tax added amount.
     */
    float amount;
    printf("Enter an amount : ");
    scanf("%f" , &amount);
    printf("With Tax added : %.2f", calculatedTaxAdded(amount));


    int result;
    result = bigNum(3, 4);

    printf("%d\n", result);
    printf("%s", printNewString1());

    return 0;
}
