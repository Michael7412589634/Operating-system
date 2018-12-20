// Semafory.cpp : Defines the entry point for the console application.
//

#include "Semaphore.h"
#include <iostream>

Semaphore::Semaphore(int value):value(value){}

void get_value(Semaphore& S) {

	std::cout << S.value << std::endl;

}

void wait(Semaphore& S) {

	S.value--;
	
	if (S.value < 0) { //blokujemy proces

		//dodajemy proces do listy czekających procesów

	}

}

void signal(Semaphore& S) {

	S.value++;

	if (S.value <= 0) { //odblokowyjemy proces usuwamy z listy pod semaforem

		//usuwamy proces z listy pod semaforem

	}


}
