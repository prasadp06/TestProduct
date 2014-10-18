//
//  DetailViewController.h
//  TestProduct
//
//  Created by Prasad Prabhakaran on 10/18/14.
//  Copyright (c) 2014 Prasad Prabhakaran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

