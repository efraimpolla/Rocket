//
//  MainLayer.cpp
//  RocketManCocos2dx
//
//  Modified by Sanjeev Dwivedi, Dale Stammen and Eric Mitelette
//  Created by Carlos Pinan on 13/10/13.
//
//

#include "MainLayer.h"

using namespace cocos2d;

Scene* MainLayer::scene()
{
	Scene* scene = Scene::create();
	MainLayer* layer = new MainLayer();
	scene->addChild(layer);
	layer->autorelease();

	return scene;

}

MainLayer::MainLayer()
{
	RANDOM_SEED();
	// Load up the packed sprites using the SpriteFrameCache
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("sprites.plist");

	// a single sprite can be extracted from the cache using createWithSpriteFrameName
	Sprite * background = Sprite::createWithSpriteFrameName("background.png");
	this->addChild(background);
	background->setPosition(Point(SCREEN_WIDTH * 0.5f, SCREEN_HEIGHT * 0.5F));

}


void MainLayer::update(float dt){

}
