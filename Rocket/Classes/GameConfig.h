//
//  GameConfig.h
//  RocketManCocos2dx
//
//  Modified by Sanjeev Dwivedi, Dale Stammen and Eric Mitelette
//  Created by Carlos Pinan on 13/10/13.
//
//

#ifndef RocketManCocos2dx_GameConfig_h
#define RocketManCocos2dx_GameConfig_h

#include <ctime>
#include <cstdlib>

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 480
#define DISPLAY_STATS true

#define RANDOM_SEED() srand(time(0))

enum {
	kSpriteManager = 0,
	kRocketMan, 
	kScoreLabel,
	kExit,
	kPlataformStartTag = 2000,
	kBonusStartTag = 3000,
	kPopUpPlayerTag = 10000,
	kPopUpEditBoxTag = 150000
};

enum {
	kBonus5 = 0,
	kBonus10,
	kBonus50, 
	kBonus100,
	kNumBonuses
};

#endif //RocketManCocos2dx_GameConfig_h
