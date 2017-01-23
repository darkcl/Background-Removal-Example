//
//  UIImage+BackgroundRemove.h
//  Stylistpark
//
//  Created by Yeung Yiu Hung on 11/12/14.
//  Copyright (c) 2014 Cherrypicks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreImage/CoreImage.h>
#import "GPUImage.h"
#import "UIImage+FloodFill.h"

@interface UIImage (BackgroundRemoval)

//Simple Removal
- (UIImage *)simpleRemoveBackgroundColor;
- (UIImage *)floodFillRemove;
//Complex one
- (UIImage *)complexReoveBackground;
@end
