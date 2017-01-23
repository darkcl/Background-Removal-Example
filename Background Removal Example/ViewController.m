//
//  ViewController.m
//  Background Removal Example
//
//  Created by Yeung Yiu Hung on 10/1/15.
//  Copyright (c) 2015 darkcl. All rights reserved.
//

#import "ViewController.h"
#import "UIImage+BackgroundRemove.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    fileName = @"shoes1.jpg";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)resetOrginal:(id)sender {
    _imageView.image = [UIImage imageNamed:fileName];
}

- (IBAction)simpleRemoval:(id)sender {
     _imageView.image = [[UIImage imageNamed:fileName] floodFillRemove];
}

- (IBAction)gpuImageRemove:(id)sender {
    _imageView.image = [[UIImage imageNamed:fileName] complexReoveBackground];
}
@end
