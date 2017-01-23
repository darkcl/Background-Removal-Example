//
//  ViewController.h
//  Background Removal Example
//
//  Created by Yeung Yiu Hung on 10/1/15.
//  Copyright (c) 2015 darkcl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    UIImage *originalImage;
    
    NSString *fileName;
}

- (IBAction)resetOrginal:(id)sender;
- (IBAction)simpleRemoval:(id)sender;
- (IBAction)gpuImageRemove:(id)sender;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;

@end

