//
//  DetailViewController.h
//  HelloTableView
//
//  Created by Ryan Chung on 2014/12/5.
//  Copyright (c) 2014年 Ryan Chung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

