#include<iostream>
#include <stdio.h>


using namespace std;


int main(void){

  FILE *fd;

  fd = fopen("16_hello_file.txt", "w");


  fclose(fd);
}


