//
//  Person.m
//  VanadisDemoFramework
//
//  Created by jorge Velasco on 14/02/15.
//  Copyright (c) 2015 Vanadis. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize name,surname;

+ (NSString *) sayHi
{
    return [NSString stringWithFormat:@"Hi to the world!!"];
}

@end
