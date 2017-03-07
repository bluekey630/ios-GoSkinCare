//
//  OrderDetailVC.h
//  GoSkinCare
//
//  Created by Luokey on 11/20/15.
//  Copyright © 2015 Luokey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OrderCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UILabel* infoLabel;
@property (weak, nonatomic) IBOutlet UILabel* costLabel;

@end


@interface OrderFooterCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UILabel* infoLabel;
@property (weak, nonatomic) IBOutlet UILabel* costLabel;

@end


@interface CardCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UIButton* cardButton;

@end


@interface OrderDetailVC : UIViewController

@property (strong, nonatomic) NSMutableArray* orderProducts;

@end
