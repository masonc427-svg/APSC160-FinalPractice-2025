#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int calculateSum(int nums[], int numsSize);
double calculateAverage(int nums[], int numsSize);
int calculateAboveOrEqualsAverage(int nums[], int numsSize);


/**
 * @param nums[] - array of integers
 * @param numsSize - size of nums[]
 * @return the sum of integers in nums[]
 */ 
 
int calculateSum(int nums[], int numsSize) {
    int sum = 0;
    int index = 0; 
    for (index = 0; index < numsSize; index++){
         sum+= nums[index];
    }
    return sum;
}



/**
 * @param nums[] - array of integers
 * @param numsSize - size of nums[]
 * @return the average of integers in nums[]
 */ 
 
double calculateAverage(int nums[], int numsSize) {
    int sum = calculateSum(nums[], numsSize);
    double average = (double)sum/numsSize;
    return average;
}



/**
 * @param nums[] - array of integers
 * @param numsSize - size of nums[]
 * @return the number of elements above or equal to the average of integers in nums[]
 */ 
 
int calculateAboveOrEqualsAverage(int nums[], int numsSize) {
     double average = calculateAverage(nums[],numsSize);
     int index = 0;
     int count = 0;
     for (index = 0; index < numsSize; index++){
      if (average<=nums[index]){
       count++;
      }
     }
 return count;
}


