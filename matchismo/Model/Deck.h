//
//  Deck.h
//  matchismo
//
//  Created by Julia Foster on 3/14/16.
//  Copyright © 2016 Riley Fewell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void) addCard:(Card *)card;

- (Card*)drawRandomCard;

@end
