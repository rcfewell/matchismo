//
//  Card.m
//  matchismo
//
//  Created by Julia Foster on 3/14/16.
//  Copyright © 2016 Riley Fewell. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards {
    int score = 0;
    
    for (Card* card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    return score;
}

@end
