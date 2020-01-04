#include <stdio.h>

int x,y;main(){ printf(
"\nEnter two numbers"); scanf(
"%d %d", &x, &y); printf(
"\n\n%d is bigger", (x>y)?x:y);
getchar(); getchar(); return 0;}