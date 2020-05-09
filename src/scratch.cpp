#include <stdio.h>
#include <iostream>
#include <SDL.h>
#include <GL/gl.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main( int argc, char* args[] )
{
	SDL_Window* window = NULL;

	window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL );
		
	SDL_GLContext context = SDL_GL_CreateContext(window);

	while (true) {

		glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
		glClearColor(1.f, 0.f, 0.f, 0.f);
		glClear(GL_COLOR_BUFFER_BIT);

		SDL_GL_SwapWindow(window);

	}

    std::cout<<"XGE"<<std::endl;

	//Destroy window
	SDL_DestroyWindow( window );

	//Quit SDL subsystems
	SDL_Quit();

	return 0;
}