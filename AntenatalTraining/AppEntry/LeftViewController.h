//
//  LeftViewController.h
//  AntenatalTraining
//
//  Created by test on 16/4/27.
//  Copyright © 2016年 kimoworks. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LeftViewController;
@protocol LeftViewControllerDelegate <NSObject>

@required
- (void)leftViewController:(LeftViewController *)leftController didSelectAtIndex:(NSInteger)index;

@end

@interface LeftViewController : UIViewController

@property (nonatomic, weak) id<LeftViewControllerDelegate> delegate;
@property (nonatomic, assign) NSInteger selectedIndex;

@end
