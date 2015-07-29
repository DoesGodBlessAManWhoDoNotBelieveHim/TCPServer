//
//  ViewController.h
//  TCPServer
//
//  Created by wrt on 15/7/29.
//  Copyright (c) 2015年 wrtsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TCPServerTool.h"

@interface ViewController : UIViewController<TCPServerToolDelegate>
@property (strong, nonatomic) IBOutlet UIView *bindingView;
@property (strong, nonatomic) IBOutlet UITextField *portTextField;
@property (strong, nonatomic) IBOutlet UIButton *bindingButton;

- (IBAction)settings:(UIButton *)sender;
- (IBAction)goToBind:(UIButton *)sender;

@property (strong, nonatomic) IBOutlet UIImageView *curtainsImageView;

@property (strong, nonatomic) IBOutlet UIImageView *hallLightImageView;
@property (strong, nonatomic) IBOutlet UIImageView *dinningRoomLightImageView;
@property (strong, nonatomic) IBOutlet UILabel *hallBrintness;
@property (strong, nonatomic) IBOutlet UILabel *dinningRoomBrightness;

@end

