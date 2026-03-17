#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p;
  // p = (int *)malloc(100 * sizeof(int));
  // if (p == NULL){
  if ((p = (int *)malloc(10 * sizeof(int))) == NULL) { // WORKING
    printf("NO MEMORY WAS ALLOCATED, hence, no space available in your "
           "memory(RAM) \n\nExiting...");
    exit(1);
  } else {
	  // hello
    printf("Memory allocation Successful!");
  }
  p = realloc(p, 100 * sizeof(int));
  free(p);
  // EOF
} // WORKING