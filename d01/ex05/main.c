#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

int main(void)
{
	struct s_tank *tank = initTank();
	/*-------------------
	launch your test here
	--------------------*/
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 100);
	tankPush(tank, 50);
	printf("%d\n", tank->stacks[0]->sum);
	printf("%d\n", tank->stacks[1]->sum);
	printf("%d\n", tank->stacks[2]->sum);
	return (0);
}



// Function used for the test
// Don't go further :)