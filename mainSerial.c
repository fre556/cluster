#include <stdio.h>
#include <stdlib.h>

int maxX, maxY, numSharks, numFish, breedingAgeShark, breedingAgeFish, sharkStarvationAge;

int main (int argc, char *argv[]){

 maxX = strtol(argv[1], NULL, 10);
 maxY = strtol(argv[2], NULL, 10);
 numSharks = strtol(argv[3], NULL, 10);
 numFish = strtol(argv[4], NULL, 10);
 breedingAgeShark = strtol(argv[5], NULL, 10);
 breedingAgeFish = strtol(argv[6], NULL, 10);
 sharkStarvationAge = strtol(argv[7], NULL, 10);
 
 printf("Max X: %d\n",maxX);
printf("Max Y: %d\n",maxY);
printf("Number of Sharks: %d\n",numSharks);
printf("Number of Fish: %d\n",numFish);
printf("Breeding age of Sharks: %d\n",breedingAgeShark);
printf("Breeding age of Fish: %d\n",breedingAgeFish);
printf("Shark starvation age: %d\n",sharkStarvationAge);
  return 0;
}
