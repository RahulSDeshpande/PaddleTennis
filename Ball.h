//Copyright 2015 Roger Bassons
#include <SDL2/SDL.h>
#include "Paddle.h"

class Ball {
 public:
	Ball();
	void setSize(int size);
	void setLaunchSpeed(int speed);
	
	// inside rectangle width*height
	void launch(int width, int height);
	bool move(int width, int height, const Paddle &left, const Paddle &right, int &winner);
	void moreSpeed();
	
	void draw(SDL_Renderer *ren) const;

 private:
	SDL_Rect b_;
	int launchSpeed_;
	int dx_,dy_;

	bool hasCollidedWithAnyPaddle(int width, int height, const Paddle &left, const Paddle &right);
};
	
