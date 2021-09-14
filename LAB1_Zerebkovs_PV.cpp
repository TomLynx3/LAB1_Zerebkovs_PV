

#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>
#include <cmath>
#include <iostream>
#include <numeric>


float GetAverage(int a, int b, int c);
int GetNegativeNumberCount(int a, int b, int c);
int GetMaxValue(int a, int b, int c);
bool CanCreateTriangle(int a, int b, int c);


void main()
{
    int a, b, c;
    
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    printf("c = "); scanf("%d", &c);
  
    double averageSum = GetAverage(a, b, c);
    int negativeNumberCount = GetNegativeNumberCount(a, b, c);
    int maxValue = GetMaxValue(a, b, c);
    bool canCreateTriangle = CanCreateTriangle(a, b, c);
    printf("Average sum = %.2f\n", averageSum);
    printf("Negative Number Count = %d\n", negativeNumberCount);
    printf("Max value is = %d\n", maxValue);

    if (canCreateTriangle) {
        printf("It is possible to create triangle with given values\n");
    }
    else {
        printf("It is not possible to create triangle with given values\n");
    } 
}


float GetAverage(int a, int b, int c) {

    return (a + b + c) / 3;
}

int GetNegativeNumberCount(int a, int b, int c) {
    int counter = 0;

    if (a < 0) counter++;
    if (b < 0) counter++;
    if (c < 0) counter++;

    return counter;

}

int GetMaxValue(int a, int b, int c) {

    return  c > (a > b ? a : b) ? c : ((a > b) ? a : b);
}

bool CanCreateTriangle(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}

