//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by 於程鹏 on 15-3-23.
//  Copyright (c) 2015年 於程鹏. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

