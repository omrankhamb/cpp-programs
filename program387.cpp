#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
    creat("Demo/New.txt",777);
  return 0;
}