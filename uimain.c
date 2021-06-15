#include <stdio.h>
#include "draw.h"

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop
    /*Added new option for chars font, and Arrow Shape */
    fputs("Select which shape you want to print (Arrow = a, Triangle = t, Square = s, Chars = c, Chars New Font = d) or 'q' to quit\n> ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    //Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:");
      for (char c = 'A'; c < 'D'; c++)
	print_char_11x16(c);
      break;
      /* new font option:'8x12 font' */
    case 'd':
      puts("You selected chars in 8x12 font:");
      for(char c = 'A'; c < 'D'; c++)
	print_char_8x12(c);
      break;
      /* new shape option: 'arrow' */
    case 'a':
      puts("You selected arrow:");
      print_arrow(6,6);
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
