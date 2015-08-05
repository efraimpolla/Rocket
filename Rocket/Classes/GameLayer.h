//
//  GameLayer.h
//  RocketManCocos2dx
//
//  Modified by Sanjeev Dwivedi, Dale Stammen and Eric Mitelette
//  Created by Carlos Pinan on 13/10/13.
//
//

#ifndef __RocketManCocos2dx__GameLayer__
#define __RocketManCocos2dx__GameLayer__
#include <vector>

#include "MainLayer.h"

using namespace cocos2d;
using namespace std;

class GameLayer : public MainLayer
{
public:
	GameLayer();
	virtual ~GameLayer();
	void update(float dt);

	static cocos2d::Scene* scene();

private:
	Point rm_position;
	Vec2 rm_velocity;
	Vec2 rm_acceleration;

	Sprite *rocketMan;
	Animate *jetpackAnimation;

	int currentPlatformTag;
	int platformCount;
	float currentPlatformY;
	float currentMaxPlatformStep;
	int currentBonusType;
	int currentBonusPlatformIndex;
	
	bool rm_lookingRight;
	bool gameSuspended;

	void _initPlatform();
	void _initPlatforms();
	void _resetPlatform();
	void _resetPlatforms();

	
	void _startGame();
	void _resetRocketMan();
	void _jump();
	void _initJetPackAnimation();

	void onAcceleration(Acceleration *acc, Event* event);
};


#endif /* defined(__RocketManCocos2dx__GameLayer__) */
