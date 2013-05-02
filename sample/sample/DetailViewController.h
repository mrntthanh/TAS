//
//  DetailViewController.h
//  sample
//
//  Created by tasvietnam02 on 5/2/13.
//  Copyright (c) 2013 tasvietnam02. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
