#pragma once
#include <list>
#include <memory>

class Semaphore {

private:

	int value; // wartość dodatnia - semafor otwarty; niedodatnia - zamknięty, liczba bezwzględna oznacza ilość czekających procesów
	std::list<std::unique_ptr<int>>container_of_waiting_processes; // kontener wskaźników na czekające procesy

public:

	Semaphore(int value);

	friend void wait(Semaphore &S);
	friend void signal(Semaphore &S);
	friend void get_value(Semaphore& S);
};
