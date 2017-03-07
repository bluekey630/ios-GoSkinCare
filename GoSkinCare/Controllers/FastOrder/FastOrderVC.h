//
//  FastOrderVC.h
//  GoSkinCare
//
//  Created by Luokey on 11/20/15.
//  Copyright © 2015 Luokey. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ProductCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UIImageView* productImageView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView* activityIndicator;
@property (weak, nonatomic) IBOutlet UILabel* nameLabel;
@property (weak, nonatomic) IBOutlet UILabel* priceLabel;
@property (weak, nonatomic) IBOutlet UILabel* descLabel;
@property (weak, nonatomic) IBOutlet UITextField* amountField;
@property (weak, nonatomic) IBOutlet UILabel* totalCostLabel;

@property (weak, nonatomic) IBOutlet UIButton* plusButton;
@property (weak, nonatomic) IBOutlet UIButton* minuseButton;
@property (weak, nonatomic) IBOutlet UIButton* thumbButton;

@end



@interface FastOrderVC : UIViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
