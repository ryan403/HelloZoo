//
//  MasterViewController.h
//  HelloTableView
//
//  Created by Ryan Chung on 2014/12/5.
//  Copyright (c) 2014年 Ryan Chung. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

