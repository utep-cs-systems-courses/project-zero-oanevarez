#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
// print an arrow shape using the above methods
void print_arrow(int leftCol, int size){
  print_triangle(5,7);
  int totalCol = leftCol + size;
  for (int row =0; row<size; row++){
    if(row == (leftCol/2))
      print_square(6,6);
    putchar(' ');
  }
}

/*Prints an arrow
void prt_arrow(int leftCol, int size)
{
  int totalCol = leftCol * size;
  for (int row=0; row<size; row++){
    putchar(' ');
    for (int col=0; col<totalCol; col++){
      if (col == 3) putchar('*');
      putchar(' ');
    }
    putchar('\n');
  }
}
*/

