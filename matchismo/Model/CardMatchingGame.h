//
//  CardMatchingGame.h
//  matchismo
//
//  Created by Julia Foster on 3/15/16.
//  Copyright © 2016 Riley Fewell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

@property (nonatomic, readonly) NSInteger score;

// DESIGNATED INITIALIZER
- (instancetype)initWithCard:(NSUInteger)count usingDeck:(Deck *) deck;
- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@end
