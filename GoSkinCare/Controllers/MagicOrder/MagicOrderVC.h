//
//  MagicOrderVC.h
//  GoSkinCare
//
//  Created by Luokey on 11/20/15.
//  Copyright © 2015 Luokey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MagicInfoCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UILabel* cardNumberLabel;

@end



@interface MagicOrderCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UIImageView* productImageView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView* activityIndicator;
@property (weak, nonatomic) IBOutlet UILabel* nameLabel;
@property (weak, nonatomic) IBOutlet UILabel* priceLabel;
@property (weak, nonatomic) IBOutlet UIButton* frequencyButton;
@property (weak, nonatomic) IBOutlet UILabel* nextOrderLabel;
@property (weak, nonatomic) IBOutlet UIButton* editButton;
@property (weak, nonatomic) IBOutlet UIButton* thumbButton;

@end


@interface MagicOrderVC : UIViewController

@end
