//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
using namespace std;

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;


int main(int args,char* argc[] ) {


	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
		{
			cout<< "SDL could not initialize! SDL_Error: %s\n", SDL_GetError();
		}
	gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
			if( gWindow == NULL )
			{
				cout <<"Window could not be created! SDL_Error: %s\n", SDL_GetError() ;
			}

	int counter = 0;
	bool quit = false;
	SDL_Event e;

	while(! quit)
		{
			while(SDL_PollEvent(&e) != 0)
				{
				if(e.type == SDL_QUIT)
					{
						quit = true;
					}
				else if(e.type == SDL_MOUSEBUTTONUP)
					{
						//get mouse postion
						int x, y;
						SDL_GetMouseState(&x, &y);
						counter++;
						cout << "mouse x: " << x << " y: " << y << "\n";
						}
					}
				}
	cout << "Counter : " << counter << endl;
	return 0;
}
