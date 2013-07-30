/*
 ============================================================================
 Name        : TestC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	LOG("test second\n");
	LOG("test third\n");
	LOG("test fourth");
	LOG("test finveth");
	LOG("test sixth");
	LOG("test seventh");
	LOG("test eighth");
	LOG("test nineth");
	LOG("test tenth");
	LOG("test eleventh\n");
	int i=0;
	for(i=0;i<3;i++){
		printf("outer %d\n",i);
		int i;
		for(i=0;i<5;i++){
			printf("inner %d\n",i);
		}
	}
	return EXIT_SUCCESS;
}
