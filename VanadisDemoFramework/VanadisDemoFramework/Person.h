//
//  Person.h
//  VanadisDemoFramework
//
//  Created by jorge Velasco on 14/02/15.
//  Copyright (c) 2015 Vanadis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic,strong) NSString * name;
@property (nonatomic,strong) NSString * surname;

+ (NSString *) sayHi;

@end
