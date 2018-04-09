/*
 * =====================================================================================
 *
 *       Filename:  1.5.2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/08/2018 10:37:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>

// count characters in input; 1st version

main(){
  long nc;
  while (getchar() != EOF)
    ++nc;
  printf("%1d\n", nc);
}

