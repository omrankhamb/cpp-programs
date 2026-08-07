#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
  char name[30] = {'\0'};
  printf("Enter your name: ");
fflush(stdout);  // Ensures prompt is shown before scanf
scanf("%s", name);

  return 0;
}