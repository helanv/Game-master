#include "pch.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>
#include <stdlib.h> 


#define SPACE 32;
#define UP 72;
#define DOWN 80;
#define LEFT 75;
#define RIGHT 77;

using namespace std;

// пометка игрового поля
const int sizeX=14;
const int sizeY=14;

int GameZone[sizeX][sizeY];

void sizeOfConsole() {
	// ограничение консоли по размеру
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("mode con cols=80 lines=25");
}

// вывод игрового поля
void Show() {
	
}


// круги и кывадрата двигаються к плюсу
void MoveToPlus() {   

}

// движение плюса
void MovePlus() {

}

// инициализация кругов и квадратов
void Initialize() {

	// логика главной фигуры
	int x = 0, y = 0;
	int x1 = 0, y1 = 0, speedT1 = 100;


	while (true) {
		if (_kbhit()) {
			int tmpCharacter = _getch();
			switch (tmpCharacter) {
			case UP:
				y--;
				break;
			case DOWN:
				y++;
				break;
			case LEFT:
				x--;
				break;
			case RIGHT:
				x++;
				break;
			}
		}
	}
}

int main()
{
	sizeOfConsole();
	Initialize();
	Show();
}
