//
//  DetailsViewController.h
//  CoreDataExample
//
//  Created by AppsbeeTechnology on 07/02/15.
//  Copyright (c) 2015 AppsbeeTechnology. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface DetailsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *designationTextfield;
@property (weak, nonatomic) IBOutlet UITextField *cityTextField;
@property (strong) NSManagedObject *employee;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
