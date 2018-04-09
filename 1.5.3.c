/*
 * =====================================================================================
 *
 *       Filename:  1.5.3.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/08/2018 10:44:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>

/* count lines in input */

main(){
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF)
    if ( c == '\n')
      ++nl;
  printf("%d\n", nl);
}

