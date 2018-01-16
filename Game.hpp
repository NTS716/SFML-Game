#pragma once


#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>

class Game
{
	private:
		sf::Color clearColor;

	public:
		void init();
		void run();

	protected:
		sf::RenderWindow window;

		void setClearColor(sf::Color color_arg);

		virtual void conf();
		virtual void handleEvents();
		virtual void render();

		virtual void load();
		virtual void update();
		virtual void draw();

		virtual void keyPressed(sf::Keyboard::Key key_arg);
		virtual void keyReleased(sf::Keyboard::Key key_arg);
};

#endif
