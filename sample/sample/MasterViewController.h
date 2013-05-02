//
//  MasterViewController.h
//  sample
//
//  Created by tasvietnam02 on 5/2/13.
//  Copyright (c) 2013 tasvietnam02. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
