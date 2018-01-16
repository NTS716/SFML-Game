#include "Game.hpp"

void Game::init()
{
	// create the window with default properties
	window.create(sf::VideoMode(800,600), "SFML Game");

	// set default clear color
	this->setClearColor(sf::Color::White);

	// override defaults if user definitions exist
	this->conf();	
	this->load();
}


void Game::run()
{
	while (window.isOpen())
	{
		this->update();

		this->handleEvents();

		this->render();
	}
}

void Game::setClearColor(sf::Color color_arg)
{
	clearColor = color_arg;
}

void Game::handleEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		switch(event.type)
		{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				this->keyPressed(event.key.code);
				break;

			case sf::Event::KeyReleased:
				this->keyReleased(event.key.code);
				break;
		}
	}
}

void Game::render()
{
	window.clear(clearColor);
	this->draw();
	window.display();
}

void Game::conf()
{}

void Game::load()
{}

void Game::update()
{}

void Game::draw()
{}

void Game::keyPressed(sf::Keyboard::Key key_arg)
{}

void Game::keyReleased(sf::Keyboard::Key key_arg)
{}
