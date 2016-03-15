//
//  Card.h
//  matchismo
//
//  Created by Julia Foster on 3/14/16.
//  Copyright © 2016 Riley Fewell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
