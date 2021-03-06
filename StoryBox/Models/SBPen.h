//
//  SBPen.h
//  StoryBox
//
//  Created by spacewander on 14-6-16.
//  Copyright (c) 2014年 scutknight. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  用于涂鸦的画笔
 */
@interface SBPen : NSObject

- (void) transformToEraser;
- (void) transformBackToPen;

@property (nonatomic) int color;
@property (nonatomic) unsigned int precolor;
@property (nonatomic) unsigned int radius;
@property (nonatomic) unsigned int preradius;
@end
