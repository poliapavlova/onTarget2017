#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<string>
#include <iostream>
using namespace std;
////Button constants
//const int BUTTON_WIDTH = 67;
//const int BUTTON_HEIGHT = 67;
//const int TOTAL_BUTTONS = 9;


const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

//Starts up SDL and creates window
bool init ();

//Loads media
bool loadMedia();

//Frees media adn shuts down SDL
void close();

//Loads individual image as texture


SDL_Window* gWindow = NULL;

SDL_Renderer* gRenderer = NULL;

SDL_Texture* gTexture = NULL;

SDL_Texture* textureX = NULL;

SDL_Texture* textureO = NULL;

SDL_Renderer* rend1 = NULL;


bool init()
{
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0 )
	{
		cout << " SDL could not initialize"<<endl;
		success = false;
	}
	else
	{
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,"1"))
			cout << " Warning: Linear texture filtering not enable";
	}
	gWindow = SDL_CreateWindow("task1",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
	if(gWindow == NULL)
		{
		cout << " Window could not be created";
		success = false;
		}
	else
	{
		gRenderer = SDL_CreateRenderer(gWindow,-1,SDL_RENDERER_SOFTWARE);
		if (gRenderer == NULL)
			{
			cout <<"Renderer could not be created";
			success = false;
			}
	}
	return  success;

}
bool loadMedia()
{
	bool success = true;

	gTexture = IMG_LoadTexture(gRenderer,"tictactoe.png");
	if (gTexture == NULL)
	{
		cout << " Failed to load texture image";
		success = false;
	}
	textureX=IMG_LoadTexture(gRenderer,"x.png");
	if(textureX == NULL)
	{
		cout<< " Failed to load textureX";
		success = false;
	}
	textureO=IMG_LoadTexture(gRenderer,"o.png");
	if(textureO == NULL)
	{
		cout << " Failed to load textureO";
		success=false;
	}

	return success;
}

void close ()
{

	SDL_DestroyTexture(gTexture);
	gTexture = NULL;

	SDL_DestroyTexture(textureO);
	textureO = NULL;

	SDL_DestroyTexture(textureX);
	textureX = NULL;

	SDL_DestroyRenderer(gRenderer);
	gRenderer = NULL;

	SDL_DestroyWindow(gWindow);
	gWindow = NULL;

	IMG_Quit();
	SDL_Quit();
}

int main(int argc, char* args[])
{
	SDL_Rect rect1;
	rect1.x = 0 ;
	rect1.y = 0;
	rect1.h = 200;
	rect1.w = 200;

	SDL_Rect rect2;
	rect2.x = 200;
	rect2.w = 200;
	rect2.y = 0;
	rect2.h = 200;

	SDL_Rect rect3;
	rect3.x = 400;
	rect3.w = 200;
	rect3.y = 0;
	rect3.h = 200;

	SDL_Rect rect4;
	rect4.x = 0;
	rect4.w = 200;
	rect4.y = 200;
	rect4.h = 200;

	SDL_Rect rect5;
	rect5.x = 200;
	rect5.w = 200;
	rect5.y = 200;
	rect5.h = 200;

	SDL_Rect rect6;
	rect6.x = 400;
	rect6.w = 200;
	rect6.y = 200;
	rect6.h = 200;

	SDL_Rect rect7;
	rect7.x = 0;
	rect7.w = 200;
	rect7.y = 400;
	rect7.h = 200;

	SDL_Rect rect8;
	rect8.x = 200;
	rect8.w = 200;
	rect8.y = 400;
	rect8.h = 200;

	SDL_Rect rect9;
	rect5.x = 200;
	rect5.w = 200;
	rect5.y = 600;
	rect5.h = 400;



	bool verify1 = false;
	bool verify2 = false;
	bool verify3 = false;
	bool verify4 = false;
	bool verify5 = false;
	bool verify6 = false;
	bool verify7 = false;
	bool verify8 = false;
	bool verify9 = false;


	SDL_Event e;
	if (!init())
		cout << " Failed to initialize"<<endl;
	else
	{
		if(!loadMedia())
			cout << " Failed to load media"<< endl;
		else
		{
			bool quit = false;

			while(!quit)
			{
				while(SDL_PollEvent(&e) != 0)
				{
					SDL_RenderClear(gRenderer);
					SDL_RenderCopy(gRenderer,gTexture,NULL,NULL);
					SDL_RenderPresent(gRenderer);

					if(e.type == SDL_QUIT)
							quit = true;

					else if (e.type == SDL_MOUSEBUTTONDOWN || e.type == SDL_MOUSEBUTTONUP  )
					{
						int x;
						int y;
						SDL_GetMouseState(&x,&y);

						cout << "X = " << x << " y= "<< y<<endl;
						if(x >= 0 && x<= 200 && y >= 0 && y <= 200)
						{
							verify1 = true;
							SDL_RenderCopy(gRenderer,textureX,NULL,&rect1);
							SDL_RenderPresent(gRenderer);

						}
						else if (x >= 200 && x <= 400 && y >= 0 && y <= 200)
						{
							verify2=true;
							SDL_RenderCopy(gRenderer,textureO,NULL,&rect2);
							SDL_RenderPresent(gRenderer);
						}
						else if (x >= 400 && x <= 600 && y >= 0 && y <= 200)
						{
							verify3=true;
							SDL_RenderCopy(gRenderer,textureX,NULL,&rect3);
							SDL_RenderPresent(gRenderer);
						}
						else if (x >= 0 && x <= 200 && y >= 200 && y <= 400)
						{
							verify4 = true;
							SDL_RenderCopy(gRenderer,textureO,NULL,&rect4);
							SDL_RenderPresent(gRenderer);
						}
						else if (x >= 200 && x <= 400 && y >= 200 && y <= 400)
						{
							verify5 = true;
							SDL_RenderCopy(gRenderer,textureX,NULL,&rect5);
							SDL_RenderPresent(gRenderer);
						}
						else if (x >= 400 && x <= 600 && y >= 200 && y <= 400)
						{
							verify6 = true;
							SDL_RenderCopy(gRenderer,textureO,NULL,&rect6);
							SDL_RenderPresent(gRenderer);
						}
						else if (x >= 0 && x <= 200 && y >= 400 && y <= 600)
						{
							verify7 = true;
							SDL_RenderCopy(gRenderer,textureX,NULL,&rect7);
							SDL_RenderPresent(gRenderer);
						}
						else if (x >= 200 && x <= 400 && y >= 400 && y <= 600)
						{
							verify8 = true;
							SDL_RenderCopy(gRenderer,textureO,NULL,&rect8);
							SDL_RenderPresent(gRenderer);
						}
						else if (x >= 400 && x <= 600 && y >= 400 && y <= 600)
						{
							verify9 = true;
							SDL_RenderCopy(gRenderer,textureX,NULL,&rect9);
							SDL_RenderPresent(gRenderer);
						}
					}

				}
				if (verify1)
					SDL_RenderCopy(gRenderer,textureX,NULL,&rect1);

				if (verify2)
					SDL_RenderCopy(gRenderer,textureO,NULL,&rect2);

				if (verify3)
					SDL_RenderCopy(gRenderer,textureX,NULL,&rect3);

				if (verify4)
					SDL_RenderCopy(gRenderer,textureO,NULL,&rect4);

				if (verify5)
					SDL_RenderCopy(gRenderer,textureX,NULL,&rect5);

				if (verify6)
					SDL_RenderCopy(gRenderer,textureO,NULL,&rect6);

				if (verify7)
					SDL_RenderCopy(gRenderer,textureX,NULL,&rect7);

				if(verify8)
					SDL_RenderCopy(gRenderer,textureO,NULL,&rect8);

				if(verify9)
					SDL_RenderCopy(gRenderer,textureX,NULL,&rect9);

			SDL_RenderPresent(gRenderer);

			}

		}
	}









	close();
	return 0;
}
