#include <iostream>
using namespace std;

float BMI(float a,float b){
    return a/(b*b); 
}

string status_BeratBadan (float bmi){
    if (bmi < 18.5){
        return "Berat Badan Kurang";
    }  
    else if (bmi <25){
        return "Berat Badan Normal";
    }
    else if (bmi < 30){
        
    }
}