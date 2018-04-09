/*
 * =====================================================================================
 *
 *       Filename:  1.5.4.c
 *
 *    Description:  count lines, words, and characters in input
 *
 *        Version:  1.0
 *        Created:  04/08/2018 10:51:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>

#define IN 1 /* in and out of a word */
#define OUT 0

main(){
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

