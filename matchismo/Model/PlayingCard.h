//
//  PlayingCard.h
//  matchismo
//
//  Created by Julia Foster on 3/14/16.
//  Copyright © 2016 Riley Fewell. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (nonatomic, strong) NSString * suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
